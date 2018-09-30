// I will not comment on the code in detail,
// but it has been named as simple as possible and understandable.
// Who should not understand something can ask me gladly.

// Created 1.8.2018 by Marc-André Tragé
// ---> update 28.9.2018 + PDF-Export
// ---> update 29.9.2018 with QCloseEvent (event handler)
// ---> update 30.9.2018 Fix of some unwanted but still annoying little things!

#include "borg_backup_gui.h"
#include "ui_borg_backup_gui.h"
#include <QDesktopServices>
#include <QMessageBox>
#include <QTextStream>
#include <QDir>
#include <QSystemTrayIcon>
#include <QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include <QCloseEvent>

// ––– System and program paths with all basic values. –––
static QString Home_Path(QDir::homePath()),
               PATH,
               BackUP_Path,
               BackUP_Name,
               BackUP_Mount_Path,
               BackUP_Parameters,
               BackUP_DATA,
               File_Manager,
               Text_Editor,
               PDF_Viewer,
               Delete_Selcet_Point,
               Random_String,
               Original_Size,
               Compressed_Size,
               Deduplicated_Size,
               PDF_Export_DATE_TIME,
               Time_Mode   = "24",
               Cron_Script = "BORG_CRON_JOB.sh",
               BTMP        = "/tmp/BORG-BackUP-GUI/",
// ––– All tools with paths. –––––––––––––––––––––––––––––
               BORG        = "/usr/bin/borg",
               CAT         = "/usr/bin/cat",
               GREP        = "/usr/bin/grep",
               AWK         = "/usr/bin/awk",
               RM          = "/usr/bin/rm",
               ECHO        = "/usr/bin/echo",
               KILL        = "/usr/bin/kill",
               MOUNT       = "/usr/bin/mount",
               SH          = "/usr/bin/sh",
               CP          = "/usr/bin/cp",
               SUDO        = "/usr/bin/gksudo",
               Cron_Path   = "/etc/cron.d/Borg_Cron_Job";


static QString PDF_Logo = "/images/logo.svg";
static int PDF_Logo_Size_X     = 1000;
static int PDF_Logo_Size_Y     = 1000;
static int PDF_Logo_Position_X = 12000;
static int PDF_Logo_Position_Y = 250;


void BORG_BackUP_GUI::closeEvent (QCloseEvent *event)
{
    setDisabled(true);
    QPixmap pixmap(PATH+"/images/icon.png");
    QMessageBox a;
    a.setWindowTitle("Exit");
    a.setIconPixmap(pixmap);
    a.setText("Do you really want to exit?");
    a.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    a.setDefaultButton(QMessageBox::No);

    int b = a.exec();
    switch (b) {
      case QMessageBox::Yes:
          EXIT();
          break;
      case QMessageBox::No:
          event->ignore();
          setDisabled(false);
          break;
      default:
          break;
    }
}

QString currDate()
{
    QDate date = QDate::currentDate();
    return date.toString("dd.MM.yyyy");
}

QString currDATEfile()
{
    QDate date = QDate::currentDate();
    return date.toString("yyyy.MM.dd");
}

QString currTIMEfile()
{
    QTime time = QTime::currentTime();
    return time.toString("hh:mm:ss");
}


// Fake Loading Bar !!!
static int Loadbar = 0;
void BORG_BackUP_GUI::LOADING()
{
    int n = 301;
    int i = 0;

    if(Loadbar == 1)
    {
        while (i < n)
        {
            ui->loadBAR->setGeometry(QRect(-10, 200, 940, 10));
            ui->loadBAR_2->setGeometry(QRect(-10, 210, 940, 20));
            ui->loadBAR_3->setGeometry(QRect(-10, 230, 940, 10));
            ui->loadBAR->setStyleSheet("background:#000000;");
            ui->loadBAR_2->setStyleSheet("background:#000000;");
            ui->loadBAR_3->setStyleSheet("background:#000000;");
            ui->loadBAR->setValue(i/2);
            ui->loadBAR_2->setValue(i);
            ui->loadBAR_3->setValue(i/3);
            QDelay::msleep(10);
            ++i;
        }
    }
    i = 0;
    ui->loadBAR->setGeometry(QRect(-10, -460, 940, 10));
    ui->loadBAR_2->setGeometry(QRect(-10, -470, 940, 20));
    ui->loadBAR_3->setGeometry(QRect(-10, -490, 940, 10));
}


void PDF_Export(QString a)
{
    QString DATEfile = currDATEfile();
    QString TIMEfile = currTIMEfile();
    PDF_Export_DATE_TIME =  DATEfile + "-" + TIMEfile;
    QString PDF_Export_DATE_TIME_RE = PDF_Export_DATE_TIME;
    PDF_Export_DATE_TIME_RE.replace("-"," ");
    QPdfWriter writer(PATH + "/export/" + PDF_Export_DATE_TIME + "-" + a + ".pdf");
    writer.setPageSize(QPagedPaintDevice::A4);
    writer.setPageOrientation(QPageLayout::Landscape);
    writer.setPageMargins(QMargins(30, 30, 30, 30));

    QPainter painter(&writer);
    painter.setPen(Qt::black);
    painter.setFont(QFont("Courier", 10));
    QRect r = painter.viewport();

    QFile PDF_Logo_Check(PATH + PDF_Logo);
    if(PDF_Logo_Check.exists())
    {
        painter.drawImage(PDF_Logo_Position_X,PDF_Logo_Position_Y, QIcon(PATH + PDF_Logo).pixmap(QSize(PDF_Logo_Size_X,PDF_Logo_Size_Y)).toImage());
    }

    QString BackUP_PN = BackUP_Path + BackUP_Name;
    BackUP_PN.replace("\"","");

    QString name = BackUP_PN + ", ";
    name += PDF_Export_DATE_TIME_RE;
    painter.drawText(r, Qt::AlignRight, name);

    QString sender = "BORG BackUP GUI Path: ";
    sender += PATH + "\n\n";
    sender += "BackUP Mount Path: ";

    QString BackUP_Mount_Path_RE = BackUP_Mount_Path;
    BackUP_Mount_Path_RE.replace("\"","");
    sender += BackUP_Mount_Path_RE + "\n\n";
    sender += "BackUP Parameters: ";
    sender += BackUP_Parameters + "\n\n";

    QString BackUP_DATA_RE = BackUP_DATA;
    BackUP_DATA_RE.replace(" ","\n");
    sender += "BackUP DATA:\n";
    sender += BackUP_DATA_RE;
    sender += "\n\n\n";

    system(qPrintable(CAT + " " + BTMP + "Info > " + BTMP + "Borg_Details"));
    system(qPrintable("echo \"\n\" >> " + BTMP + "Borg_Details"));
    system(qPrintable(CAT + " " + BTMP + "List >> " + BTMP + "Borg_Details"));

    QFile file(BTMP + "Borg_Details");
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        sender += line + "\n";
    }

    file.close();
    painter.drawText(r, Qt::AlignLeft, sender);
    //writer.newPage();
    painter.end();
    system(qPrintable(PDF_Viewer + " " + PATH + "/export/" + PDF_Export_DATE_TIME + "-" + a + ".pdf &"));
}


void BORG_BackUP_GUI::Control_question()
{
    const QString possibleCharacters("01");
    const int randomStringLength = 4 ;
    QString randomString;
    for(int i=0; i<randomStringLength; ++i)
    {
        int index = qrand() % possibleCharacters.length();
        QChar nextChar = possibleCharacters.at(index);
        randomString.append(nextChar);
    }
    Random_String = randomString;
    on_Re_Check_Delete_editingFinished();
    ui->Check_Delete->setText(Random_String);
    ui->Re_Check_Delete->setText("");
}


// Read, convert and output the compression values for the Progress bars.
void BORG_BackUP_GUI::Compression_values(QString a, QString b, QString c)
{
    qreal v1 = a.toDouble();
    qreal v2 = b.toDouble();
    qreal v3 = c.toDouble();

    int roundV1 = qRound(v1);
    int roundV2 = qRound(v2);
    int roundV3 = qRound(v3);

    qreal v4 = roundV1;
    qreal v5 = roundV1;

    int roundV4 = qRound(100/v4*roundV2);
    int roundV5 = qRound(100/v5*roundV3);

    ui->progressBar_2->setValue(roundV4);
    ui->progressBar_3->setValue(roundV5);
}


void BORG_BackUP_GUI::Info_List()
{
    system(qPrintable(BORG + " info " + BackUP_Path + BackUP_Name + " > " + BTMP + "Info"));
    system(qPrintable(CAT + " " + BTMP + "Info | " + GREP + " 'Original' > " + BTMP + "Info_RE"));
    system(qPrintable(CAT + " " + BTMP + "Info | " + GREP + " 'All' >> " + BTMP + "Info_RE"));

    QFile filea(BTMP + "Info_RE");
    if (!filea.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    while (!filea.atEnd())
    {
        QByteArray text = filea.readAll();
        ui->Info->setText(text);
    }

    system(qPrintable(BORG + " list " + BackUP_Path + BackUP_Name + " > " + BTMP + "List"));

    // Write Original, Compressed and Deduplicated Size with Lables
    system(qPrintable(CAT + " " + BTMP + "Info | " + AWK + " '{if ($1 == \"All\") print $3;}' >  " + BTMP + "Space"));
    system(qPrintable(CAT + " " + BTMP + "Info | " + AWK + " '{if ($1 == \"All\") print $5;}' >> " + BTMP + "Space"));
    system(qPrintable(CAT + " " + BTMP + "Info | " + AWK + " '{if ($1 == \"All\") print $7;}' >> " + BTMP + "Space"));
    system(qPrintable(CAT + " " + BTMP + "Info | " + AWK + " '{if ($1 == \"All\") print $4;}' >> " + BTMP + "Space"));
    system(qPrintable(CAT + " " + BTMP + "Info | " + AWK + " '{if ($1 == \"All\") print $6;}' >> " + BTMP + "Space"));
    system(qPrintable(CAT + " " + BTMP + "Info | " + AWK + " '{if ($1 == \"All\") print $8;}' >> " + BTMP + "Space"));

    QFile file(BTMP + "Space");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    int n = 6;
    int i = 0;

    while (i < n)
    {
        QByteArray Space = file.readLine();
        if(i==0)
        {
            ui->Info->setText(Space); // Original Size
            Original_Size = Space;
        }
        if(i==1)
        {
            ui->Info_2->setText(Space); // Compressed Size
            Compressed_Size = Space;
        }
        if(i==2)
        {
            ui->Info_3->setText(Space); // Deduplicated Size
            Deduplicated_Size = Space;
        }
        if(i==3)
        {
            ui->Info_4->setText(Space); // kb/MB/GB Identification for Original Size
        }
        if(i==4)
        {
            ui->Info_5->setText(Space); // kb/MB/GB Identification for Compressed Size
        }
        if(i==5)
        {
            ui->Info_6->setText(Space); // kb/MB/GB Identification for Deduplicated Size
        }
        ++i;
    }

    Compression_values(Original_Size,Compressed_Size,Deduplicated_Size);
    Build_Delete_List();

    ui->Check_Delete->setText("");
    ui->Re_Check_Delete->setText("");
    ui->DELETE->setEnabled(false);
}


// QDarkStylesheet
void BORG_BackUP_GUI::QDarkStylesheet()
{
    QString a;
    int b=0;
    if(QFileInfo(BTMP + "Theme").exists())
    {
        QFile fileA(BTMP + "Theme");
        if (!fileA.open(QIODevice::ReadOnly | QIODevice::Text))
            return;
        QTextStream inA(&fileA);
        QString lineA = inA.readLine();
        while (!lineA.isNull())
        {
            a=lineA;
            if(a=="0")
            {
                b = 0;
            }
            if(a=="1")
            {
                b = 1;
            }
            lineA = inA.readLine();
        }
    }
    if(b==1)
    {
        QFile style(PATH + "/qdarkstyle/style.qss");
        if (style.exists())
        {
            style.open(QFile::ReadOnly | QFile::Text);
            QTextStream ts(&style);
            qApp->setStyleSheet(ts.readAll());
        }
    }
}


BORG_BackUP_GUI::BORG_BackUP_GUI(QWidget *parent) : QMainWindow(parent),ui(new Ui::BORG_BackUP_GUI)
{
    PATH = QCoreApplication::applicationDirPath();
    QDarkStylesheet();

    QIcon icon(PATH+"/images/icon.png");
    setWindowIcon(icon);

    ui->setupUi(this);
    this->setFixedSize(925,380);
    this->setWindowTitle("BORG BackUP GUI");
    //this->setWindowFlags(Qt::WindowTitleHint);

    QPixmap pixmap(PATH+"/images/icon.png");
    QIcon ButtonIcon(pixmap);

    ui->BORG->setIcon(ButtonIcon);
    ui->BORG->setIconSize(pixmap.rect().size());
    ui->BORG->setIconSize(QSize(40, 40));
    ui->BORG->setStyleSheet("padding: 2 0 0 0;");
    ui->BackUP_NOW->setStyleSheet("background:#006600; color:#FFFFFF;");

    QFile BBGF_kill("/tmp/Borg_ERROR");
    if(BBGF_kill.exists())
    {
        system(qPrintable(RM + " /tmp/Borg_ERROR"));
        QFile task("/tmp/Borg_Task");
        if (task.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QString task_READ = task.readAll();
            QString task_READ_length = QString::number(task_READ.count());
            QString task_READ_kill = task_READ.section(' ', 0, 0);
            if(task_READ_length.toInt() > 6)
            {
                system(qPrintable(ECHO + " \"\n\n---> BORG-BackUP-GUI is allready running! <---\n\""));
                setDisabled(true);
                QMessageBox::StandardButton reply;
                reply = QMessageBox::question(this, "ERROR", "BORG BackUP GUI should not run multiple times this can lead to errors in the display as well as when deleting.", QMessageBox::Ok|QMessageBox::Ok);
                if(reply == QMessageBox::Ok)
                {
                    system(qPrintable(KILL + " " + task_READ_kill));
                }
            }
        }
    }

    QString searchA("BackUP_Path=");
    QString searchB("BackUP_Name=");
    QString searchC("BackUP_Mount_Path=");
    QString searchD("BackUP_Parameters=");
    QString searchE("BackUP_DATA=");  
    QString searchF("File_Manager=");
    QString searchG("Text_Editor=");
    QString searchH("PDF_Viewer=");

    if(QFileInfo(PATH + "/BackUP.sh").exists())
    {
        QFile fileA(PATH + "/BackUP.sh");
        if (!fileA.open(QIODevice::ReadOnly | QIODevice::Text))
            return;
        QTextStream inA(&fileA);
        QString lineA;
        do
        {
            lineA = inA.readLine();
            if (lineA.contains(searchA, Qt::CaseSensitive))
            {
                lineA.replace("BackUP_Path=","");
                if(lineA=="\"\"")
                {
                    ERROR("Configuration file needs the\nBackUP PATH");
                }
                BackUP_Path = lineA;
            }

            if (lineA.contains(searchB, Qt::CaseSensitive))
            {
                lineA.replace("BackUP_Name=","");
                if(lineA=="\"\"")
                {
                    ERROR("Configuration file needs the\nBackUP NAME");
                }
                BackUP_Name = lineA;
            }

            if (lineA.contains(searchC, Qt::CaseSensitive))
            {
                lineA.replace("BackUP_Mount_Path=","");
                if(lineA=="\"\"")
                {
                    ERROR("Configuration file needs the\nMOUNT PATH");
                }
                BackUP_Mount_Path = lineA;
            }

            if (lineA.contains(searchD, Qt::CaseSensitive))
            {
                lineA.replace("BackUP_Parameters=","");
                if(lineA=="\"\"")
                {
                    ERROR("Configuration file needs the\nBackUP PARAMETERS");
                }
                lineA.replace("\"","");
                BackUP_Parameters = lineA;
            }

            if (lineA.contains(searchE, Qt::CaseSensitive))
            {
                lineA.replace("BackUP_DATA=","");
                if(lineA=="\"\"")
                {
                    ERROR("Configuration file needs the\nBackUP FILE(S) and / or FOLDER(S)");
                }
                lineA.replace("\"","");
                BackUP_DATA = lineA;
            }

            if (lineA.contains(searchF, Qt::CaseSensitive))
            {
                lineA.replace("File_Manager=","");
                if(lineA=="\"\"")
                {
                    ERROR("Configuration file needs a\nFile Manager");
                }
                lineA.replace("\"","");
                File_Manager = lineA;
            }

            if (lineA.contains(searchG, Qt::CaseSensitive))
            {
                lineA.replace("Text_Editor=","");
                if(lineA=="\"\"")
                {
                    ERROR("Configuration file needs a\nText Editor");
                }
                lineA.replace("\"","");
                Text_Editor = lineA;
            }

            if (lineA.contains(searchH, Qt::CaseSensitive))
            {
                lineA.replace("PDF_Viewer=","");
                if(lineA=="\"\"")
                {
                    ERROR("Configuration file needs a\nPDF Viewer");
                }
                lineA.replace("\"","");
                PDF_Viewer = lineA;
            }
        }
        while (!lineA.isNull());
    }

    QString Home_Path_pathInfo         = Home_Path;
    QString BackUP_Path_pathInfo       = BackUP_Path;
    QString BackUP_Name_pathInfo       = BackUP_Name;
    QString BackUP_Mount_Path_pathInfo = BackUP_Mount_Path;

    Home_Path_pathInfo.replace("\"","");
    BackUP_Path_pathInfo.replace("\"","");
    BackUP_Name_pathInfo.replace("\"","");
    BackUP_Mount_Path_pathInfo.replace("\"","");

    ui->pathInfo->setText(Home_Path_pathInfo);
    ui->pathInfo_2->setText(BackUP_Path_pathInfo);
    ui->pathInfo_3->setText(BackUP_Name_pathInfo);
    ui->pathInfo_4->setText(BackUP_Mount_Path_pathInfo);
    ui->pathInfo_11->setText(BackUP_Parameters);
    ui->pathInfo_10->setText(PATH);

    Info_List();

    ui->Info->setAttribute(Qt::WA_TranslucentBackground);
    ui->label->setAttribute(Qt::WA_TranslucentBackground);
    ui->label_2->setAttribute(Qt::WA_TranslucentBackground);
    ui->label_3->setAttribute(Qt::WA_TranslucentBackground);
    ui->Info_2->setAttribute(Qt::WA_TranslucentBackground);
    ui->Info_3->setAttribute(Qt::WA_TranslucentBackground);
    ui->Info_4->setAttribute(Qt::WA_TranslucentBackground);
    ui->Info_5->setAttribute(Qt::WA_TranslucentBackground);
    ui->Info_6->setAttribute(Qt::WA_TranslucentBackground);

    QFile BCJ("/etc/cron.d/Borg_Cron_Job");
    if(BCJ.exists())
    {
        ui->Remove->setEnabled(true);
    }

    system(qPrintable(MOUNT + " -l | " + GREP + " \"borgfs\" > " + BTMP + "Mount"));

    if(QFileInfo(BTMP + "Mount").exists())
    {
        QFile fileA("/tmp/BORG-BackUP-GUI/Mount");
        if (!fileA.open(QIODevice::ReadOnly | QIODevice::Text))
            return;
        QTextStream inA(&fileA);
        QString lineA;
        do
        {
            lineA = inA.readLine();
            if (lineA.contains("borg", Qt::CaseSensitive))
            {
                ui->BackUP_NOW->setEnabled(false);
                ui->progressBar->setEnabled(false);
                ui->progressBar_2->setEnabled(false);
                ui->progressBar_3->setEnabled(false);
                ui->listWidget->setEnabled(false);
                ui->Delete->setEnabled(false);
                ui->Mount->setEnabled(false);
                ui->Unmount->setEnabled(true);
                ui->Unmount->setStyleSheet("background:#AA0000; color:#FFFFFF;");
                ui->Mount->setGeometry(QRect(10, -70, 180, 50));
                ui->openMount->setGeometry(QRect(10, 210, 180, 50));
            }
        }
        while (!lineA.isNull());
    }
}


void BORG_BackUP_GUI::Build_Delete_List()
{
    ui->listWidget->clear();
    QFile file(BTMP + "List");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    QTextStream in(&file);
    QString line = in.readLine();
    int a = 0;
    while (!line.isNull())
    {
        a++;
        if(line.contains(":"))
        {
            ui->listWidget->addItem(new QListWidgetItem(line));
            if(a < 2)
            {
                a = a+1;
            }
        }
        line = in.readLine();
    }
}


void BORG_BackUP_GUI::Details()
{
    setDisabled(true);
    QString BackUP_Name_RE = BackUP_Name;
    BackUP_Name_RE.replace("\"","");
    QPixmap pixmap(PATH+"/images/icon.png");
    QMessageBox a;
    a.setWindowTitle("all Details");
    a.setIconPixmap(pixmap);
    a.setText("All details are available as\nPDF or text files.\n");
    a.setInformativeText("Open = opens an export text file.\n\nSave = saves a PDF file in the export folder and then opens the PDF file.");
    a.setStandardButtons(QMessageBox::Save | QMessageBox::Open | QMessageBox::Close);
    a.setDefaultButton(QMessageBox::Open);
    int b = a.exec();
    switch (b) {
      case QMessageBox::Save:
          PDF_Export(BackUP_Name_RE);
          setDisabled(false);
          break;
      case QMessageBox::Close:
          setDisabled(false);
          break;
      case QMessageBox::Open:
        system(qPrintable(CAT + " " + BTMP + "Info > " + BTMP + "Borg_Details"));
        system(qPrintable(CAT + " " + BTMP + "List >> " + BTMP + "Borg_Details"));
        system(qPrintable(Text_Editor + " " + BTMP + "Borg_Details"));
          setDisabled(false);
          break;
      default:
          setDisabled(false);
          break;
    }
}


void BORG_BackUP_GUI::on_BackUP_NOW_clicked()
{
    //setDisabled(true);
    ui->wait->setGeometry(QRect(-30, -60, 980, 440));
    Loadbar = 1;
    system(qPrintable(SH + " " + PATH + "/BackUP.sh &"));
    LOADING();
    qApp->processEvents();
    Info_List();
    ui->progressBar->setValue(100);
    ui->wait->setGeometry(QRect(-30, -560, 980, 440));
    //setDisabled(false);
}


void BORG_BackUP_GUI::on_Details_clicked()
{
    Details();
}


void BORG_BackUP_GUI::Mount_setEnabled_GUI_Parts()
{
    ui->Mount->setEnabled(false);
    ui->Unmount->setEnabled(true);
    ui->Unmount->setStyleSheet("background:#AA0000; color:#FFFFFF;");
    ui->BackUP_NOW->setEnabled(false);
    ui->progressBar->setEnabled(false);
    ui->progressBar_2->setEnabled(false);
    ui->progressBar_3->setEnabled(false);
    ui->listWidget->setEnabled(false);
    ui->Delete->setEnabled(false);
    ui->Mount->setGeometry(QRect(10, -70, 180, 50));
    ui->openMount->setGeometry(QRect(10, 210, 180, 50));
}


void BORG_BackUP_GUI::Unmount_setEnabled_GUI_Parts()
{
    ui->Mount->setEnabled(true);
    ui->Unmount->setEnabled(false);
    ui->Unmount->setStyleSheet("");
    ui->BackUP_NOW->setEnabled(true);
    ui->progressBar->setEnabled(true);
    ui->progressBar_2->setEnabled(true);
    ui->progressBar_3->setEnabled(true);
    ui->listWidget->setEnabled(true);
    ui->Delete->setEnabled(true);
    ui->Mount->setGeometry(QRect(10, 210, 180, 50));
    ui->openMount->setGeometry(QRect(10, -70, 180, 50));
}


void BORG_BackUP_GUI::on_Mount_clicked()
{
    system(qPrintable(BORG + " mount " + BackUP_Path + BackUP_Name + " " + BackUP_Mount_Path));
    Mount_setEnabled_GUI_Parts();
}


void BORG_BackUP_GUI::on_Unmount_clicked()
{
    system(qPrintable(BORG + " umount " + BackUP_Mount_Path));
    Unmount_setEnabled_GUI_Parts();
}


void BORG_BackUP_GUI::on_Config_File_clicked()
{
    system(qPrintable(Text_Editor + " " + PATH + "/BackUP.sh &"));
}


void BORG_BackUP_GUI::on_Re_Check_Delete_editingFinished()
{
    QString a = ui->Check_Delete->text();
    QString b = ui->Re_Check_Delete->text();
    if(a == b && b != "")
    {
        ui->DELETE->setEnabled(true);
        ui->DELETE->setStyleSheet("background:#AA0000; color:#FFFFFF;");
    }
    else
    {
        ui->DELETE->setEnabled(false);
        ui->DELETE->setStyleSheet("");
    }
}


void BORG_BackUP_GUI::on_listWidget_currentRowChanged(int currentRow)
{
    if(currentRow > -1)
    {
        const QString& a = ui->listWidget->item(currentRow)->text();
        QString b = a.section(' ',0,0);
        Control_question();
        Delete_Selcet_Point = b;
        ui->DELETE->setEnabled(false);
        ui->DELETE->setStyleSheet("");
    }
}


void BORG_BackUP_GUI::on_DELETE_clicked()
{
    ui->tabWidget->setEnabled(false);
    ui->wait->setGeometry(QRect(-30, -60, 980, 440));
    qApp->processEvents();
    QString a = BORG + " delete " + BackUP_Path+BackUP_Name + " " + Delete_Selcet_Point;
    system(qPrintable(a));
    Info_List();
    ui->tabWidget->setEnabled(true);
    ui->wait->setGeometry(QRect(-30, -560, 980, 440));
}


void BORG_BackUP_GUI::EXIT()
{
    QFile BBGF(BTMP);
    if(BBGF.exists())
    {
        system(qPrintable(RM + " -r " + BTMP));
        system(qPrintable(RM + " /tmp/Borg_Task"));
    }

    QFile BBGF_kill("/tmp/Borg_ERROR");
    if(BBGF_kill.exists())
    {
        system(qPrintable(RM + " /tmp/Borg_ERROR"));
    }

    QApplication::quit();
    delete ui;
}


BORG_BackUP_GUI::~BORG_BackUP_GUI()
{
    EXIT();
}

// --- Menu Bar
void BORG_BackUP_GUI::on_Exit_triggered()
{
    setDisabled(true);
    QPixmap pixmap(PATH+"/images/icon.png");
    QMessageBox a;
    a.setWindowTitle("Exit");
    a.setIconPixmap(pixmap);
    a.setText("Do you really want to exit?");
    a.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    a.setDefaultButton(QMessageBox::No);
    int b = a.exec();
    switch (b) {
      case QMessageBox::Yes:
          EXIT();
          break;
      case QMessageBox::No:
          setDisabled(false);
          break;
      default:
          break;
    }
}


void BORG_BackUP_GUI::on_Create_a_new_BackUP_point_Menu_triggered()
{
    on_BackUP_NOW_clicked();
}


void BORG_BackUP_GUI::on_Mount_Menu_triggered()
{
    on_Mount_clicked();
}


void BORG_BackUP_GUI::on_Unmount_Menu_triggered()
{
    on_Unmount_clicked();
}


void BORG_BackUP_GUI::on_Details_Menu_triggered()
{
    Details();
}


void BORG_BackUP_GUI::on_Configuration_Menu_triggered()
{
    ui->tabWidget->setCurrentIndex(1);
}


void BORG_BackUP_GUI::on_Delete_Section_Menu_triggered()
{
    ui->tabWidget->setCurrentIndex(2);
}


void BORG_BackUP_GUI::on_Schedule_Section_Menu_triggered()
{
    ui->tabWidget->setCurrentIndex(3);
}


void BORG_BackUP_GUI::on_Borg_Homepage_Menu_triggered()
{
    QString link = "https://www.borgbackup.org/";
    QDesktopServices::openUrl(QUrl(link));
}


void BORG_BackUP_GUI::on_Tutorial_Menu_triggered()
{
    QString link = "https://github.com/MTrage/Borg-BackUP-GUI";
    QDesktopServices::openUrl(QUrl(link));
}


void BORG_BackUP_GUI::on_About_Menu_triggered()
{
    QPixmap pixmap(PATH+"/images/icon.png");
    setDisabled(true);
    QMessageBox about;
    about.setWindowTitle("Information");
    about.setIconPixmap(pixmap);
    about.setText("BORG BackUP GUI V 0.1\n\n"
                  "Attention this GUI is not foolproof, the user is forced to read the manual.\n\n"
                  "More about Borg under:\n"
                  "https://www.borgbackup.org/\n\n"
                  "I wish you lots of fun,\n"
                  "Marc-André Tragé");
    about.exec();
    setDisabled(false);
}


void BORG_BackUP_GUI::ERROR(QString a)
{
    setDisabled(true);
    QMessageBox about;
    about.setWindowTitle("ERROR");
    about.setStyleSheet("QLabel{min-width: 512px;}");
    about.setText("BORG BackUP GUI V 0.1\n"
                  "\n"
                  "Configuration ERROR!!!\n\n"
                  + a);
    about.exec();
    EXIT();
}


// CRON JOB
void BORG_BackUP_GUI::on_AddChange_clicked()
{
    QFile BCJ(BTMP + "Borg_Cron_Job");
    if(BCJ.exists())
    {
        system(qPrintable(RM + " " + BTMP + "Borg_Cron_Job"));
    }

    QString a;
    QString cron;

    const int H = ui->HH->time().hour();
    const int M = ui->mm->time().minute();

    QString b = QString::number(H);
    QString c = QString::number(M);

    int h12 = H+12;

    QString d = QString::number(h12);;

    if(Time_Mode=="24")
    {
        cron = c + " " + b;
    }

    if(Time_Mode=="AM")
    {
        cron = c + " " + b;
    }

    if(Time_Mode=="PM")
    {
        cron = c + " " + d;
    }

    if(ui->WD1->isChecked())
    {
        a = " * * 1";
        system(qPrintable(ECHO + " \"" + cron + a + " " + PATH +"/"+ Cron_Script + "\" >> " + BTMP + "Borg_Cron_Job"));
    }

    if(ui->WD2->isChecked())
    {
        a = " * * 2";
        system(qPrintable(ECHO + " \"" + cron + a + " " + PATH +"/"+ Cron_Script + "\" >> " + BTMP + "Borg_Cron_Job"));
    }

    if(ui->WD3->isChecked())
    {
        a = " * * 3";
        system(qPrintable(ECHO + " \"" + cron + a + " " + PATH +"/"+ Cron_Script + "\" >> " + BTMP + "Borg_Cron_Job"));
    }

    if(ui->WD4->isChecked())
    {
        a = " * * 4";
        system(qPrintable(ECHO + " \"" + cron + a + " " + PATH +"/"+ Cron_Script + "\" >> " + BTMP + "Borg_Cron_Job"));
    }

    if(ui->WD5->isChecked())
    {
        a = " * * 5";
        system(qPrintable(ECHO + " \"" + cron + a + " " + PATH +"/"+ Cron_Script + "\" >> " + BTMP + "Borg_Cron_Job"));
    }

    if(ui->WD6->isChecked())
    {
        a = " * * 6";
        system(qPrintable(ECHO + " \"" + cron + a + " " + PATH +"/"+ Cron_Script + "\" >> " + BTMP + "Borg_Cron_Job"));
    }

    if(ui->WD7->isChecked())
    {
        a = " * * 0";
        system(qPrintable(ECHO + " \"" + cron + a + " " + PATH +"/"+ Cron_Script + "\" >> " + BTMP + "Borg_Cron_Job"));
    }

    system(qPrintable(SUDO + " \"" + CP + " -u " + BTMP + "Borg_Cron_Job " + Cron_Path + "\""));

    QFile BCJCF("/etc/cron.d/Borg_Cron_Job");
    if(BCJCF.exists())
    {
        ui->Remove->setEnabled(true);
    }
}


void BORG_BackUP_GUI::on_Time24AMPM_currentIndexChanged(int currentRow)
{
    if(currentRow == 0)
    {
        ui->HH->setMaximumTime(QTime(23,59,59));
        Time_Mode = "24";
    }
    if(currentRow == 1)
    {
        ui->HH->setMaximumTime(QTime(11,59,59));
        Time_Mode = "AM";
    }
    if(currentRow == 2)
    {
        ui->HH->setMaximumTime(QTime(11,59,59));
        Time_Mode = "PM";
    }
}


void BORG_BackUP_GUI::on_Remove_clicked()
{
    QFile a(Cron_Path);
    if(a.exists())
    {
        system(qPrintable(SUDO + " \"" + RM + " " + Cron_Path + "\""));
        ui->Remove->setEnabled(false);
    }
}


void BORG_BackUP_GUI::on_openMount_clicked()
{
    system(qPrintable(File_Manager + " " + BackUP_Mount_Path + " &"));
}


void BORG_BackUP_GUI::on_BORG_clicked()
{
    on_Tutorial_Menu_triggered();
}
