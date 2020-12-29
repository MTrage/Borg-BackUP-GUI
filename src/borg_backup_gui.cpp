/*
        dBBBBBb   dBBBBBPdBBBBBb    dBBBBBb       dBBBBBb dBBBBBb     dBBBBP dBP dBP dBP  dBP dBBBBBb        dBBBBBb dBP  dBP dBBBP
            dBP  dB' .BP     dBP   BB                 dBP      BB    dBP    d8P.dBP dBP  dBP      dB'       BB      dBP  dBP  dBP
       dBBBBK'  dB' .BP  dBBBBK'  dB BBBB        dBBBBK'   dBP BB   dBP    dBBBBP  dBP  dBP   dBBBP'       dB BBBB dBP  dBP  dBP
      dB'  db  dB' .BP  dBP  BB  dB'  BB        dB'  db   dBP  BB  dBP    dBP BB  dBP  dBP   dBP          dB'  BB dBP  dBP  dBP
     dBBBBBP' dBBBBBP  dBP  dB' dBBBBBB        dBBBBBP'  dBBBBBBB dBBBBP dBP dBP dBBBBBBP   dBP          dBBBBBB dBBBBBBP dBBBP
 ______         __          ___          __         __         _ __  __    _      __               _____               __  ___,___
/__  _ \___ ___/ /_ _____  / (_)______ _/ /____ ___/ / _    __(_) /_/ /   | | /| / /__ ________   / ___/_  ___ ___ ___/ / /  / __/
  / // / -_) _  / // / _ \/ / / __/ _ `/ __/ -_) _  / | |/|/ / / __/ _ \  | |/ |/ / _ `/ __/ _ \__\ \/ _ \/ -_) -_) _  /  / / _ \
 /____/\__/\_,_/\_,_/ .__/_/_/\__/\_,_/\__/\__/\_,_/  |__,__/_/\__/_//_/  |__/|__/\_,_/_/ / .__/____/ .__/\__/\__/\_,_/  /_/\___/
         ───╔╗─────/_/─╔═╗───────────────────────────────╔══╦══╦══╦══╗───────────────────/_/───────/_/──────────────────────────
      ──────║╚╦═╦═╦═╗╔╦╣═╬═╗─╔╦╦╦═╗─╔═╗╔╗╔╗──╔╗╔═╦═╦═╦═╗─╚╗╗║╔╗╠╗╔╣╔╗║─────────────────────────────────
   ─────────║╬║╩╣═╣╬╚╣║╠═║╩╣─║║║║╩╣─║╬╚╣╚╣╚╗─║╚╣╬╠╗║╔╣╩╣─╔╩╝║╠╣║║║║╠╣║───────────────
────────────╚═╩═╩═╩══╩═╩═╩═╝─╚══╩═╝─╚══╩═╩═╝─╚═╩═╝╚═╝╚═╝─╚══╩╝╚╝╚╝╚╝╚╝──────
          01101111 01100110 00100000 01100011 01101111 01110101 01110010
          01110011 01100101 00100000 01110111 01100101 00100000 01101110
          01100101 01110110 01100101 01110010 00100000 01100110 01101111
          01110010 01100111 01100101 01110100 00100000 01110100 01101000
          01100101 00100000 01100100 01100101 01100011 01100101 01101001
          01110100 01100110 01110101 01101100 00100000 01101100 01101111
          01110010 01100101 00100000 01101111 01110010 00100000 01110100
          01101000 01100101 00100000 01100010 01110010 01101001 01101100
          01101100 01101001 01100001 01101110 01110100 00100000 01100010
          00101101 00110100 00101110 °D

    BORG BackUP GUI – Version 0.81
--> created 01.08.2018 by Marc-André Tragé

--> update 04.08.2018 include QDarkStylesheet (Colin Duquesnoy https://github.com/ColinDuquesnoy/QDarkStyleSheet)

--> update 28.09.2018 PDF-Export (removed on 06.10.2018 will be replaced by direct printing and exporting an WWW Info Page Export)
    update 29.09.2018 QCloseEvent (event handler)
    update 30.09.2018 Fix of some unwanted but still annoying little things

--> update 01.10.2018 Now with mount monitoring, for the mount folder as well as for the mount state
    update 01.10.2018 Changeover from mkdir to QDir().mkdir();
    update 03.10.2018 Implementing a JSON query. Works with both 2D and Array
    update 06.10.2018 remove PDF-Export
    update 08.10.2018 HTML Info Page Export
    update 09.10.2018 include jQuery Circliful Plugin (Patric Gutersohn https://github.com/pguso/jquery-plugin-circliful) for HTML Info Page
    update 10.10.2018 Build a TrayIcon & Menu
    update 11.10.2018 Correction of small process errors
    update 13.10.2018 Crontab Handling
    update 14.10.2018 Random Key Generator with 1024++, 2048++, 4096++ or 8192++
    update 15.10.2018 Automatic Config System - creating a new process structure
    update 17.10.2018 Automatic Config System – implement the control and write functions
    update 17.10.2018 Fixed rounding error, at a threshold value X, the compressed value and the deduplicated value were set to negative
    update 18.10.2018 Config Area with new Submenus
    update 19.10.2018 Config / Mount Settings now with a auto search File Manager function
    update 20.10.2018 New Selection Area with clever BackUP & Ignore List function
    update 21.10.2018 Config save & set Config
    update 22.10.2018 Config read & set Config
    update 23.10.2018 Process and start-up optimizations
    update 24.10.2018 Rebuild the GUI Layout
    update 25.10.2018 "IN & OUT File Dir" Function & exprot values to sh script
    update 26.10.2018 New Login & more Informations in Delete Area (real time load)
    update 27.10.2018 Profie Manager
    update 28.10.2018 Profie Manager with *.removed 6 save check
    update 29.10.2018 Stabilization of the process flow of the direct borg query to the respective archives including inventory transfer
    update 30.10.2018 Extended profiles with keys and corresponding start scripts (.sh) with backup copies
    update 31.10.2018 Testing and bug fixing

--> update 01.11.2018 Prevent user input errors
    update 04.11.2018 Betatest – create a list of issues
    update 05.11.2018 Work through the list of issues
    update 06.11.2018 Include Worker Task for an uninterrupted display of the loading gif
    update 07.11.2018 Revise the entire snapshot process
    update 08.11.2018 Extended Mount Control System
    update 09.11.2018 Integration of extended system question ++
    update 10.11.2018 Create ascii style for comments and terminal output
    update 13.11.2018 Comment function for snapshots
    update 14.11.2018 Create and read the comment for the snapshots
    update 15.11.2018 Extend the command line function
    update 16.11.2018 Management interface clip for the snapshot comments in the Config area
    update 19.11.2018 Removing QDarkStylesheet – Complete conversion to Qt5 Style interface   

--> update 28.12.2020 Deactivation of the control whether the programme has already been started!
    update 29.12.2020 Login: Simplification of the BackUP selection.
    update 29.12.2020 Login: Change to the login sequence to prevent incorrect entries.
*/

#include "borg_backup_gui.h"
#include "ui_borg_backup_gui.h"

#include <QtConcurrent/QtConcurrent>
#include <QProcessEnvironment>
#include <QDesktopServices>
#include <QFutureWatcher>
#include <QDesktopWidget>
#include <QJsonDocument>
#include <QApplication>
#include <QInputDialog>
#include <QJsonObject>
#include <QMessageBox>
#include <QTextStream>
#include <QCloseEvent>
#include <QFileDialog>
#include <QJsonArray>
#include <QThread>
#include <QFuture>
#include <QScreen>
#include <QLayout>
#include <QAction>
#include <QMovie>
#include <random>
#include <QMenu>
#include <QDir>

// System and program paths with all basic values.
static QString Home_Path(QDir::homePath()),
               PATH,
               close_Event,
               PASSPHRASE,
               first_check_PASSPHRASE,
               Random_Key_Base64_final,
               BackUP_Path,
               BackUP_Name,
               BackUP_Mount_Path,
               BackUP_Parameters,
               BackUP_DATA,
               BackUP_IGNORE,
               BackUP_Snapshot_Comment,
               BackUP_List_of_Comments,
               File_Manager,
               json_LIST,
               json_LIST_html,
               json_LIST_detail,
               json_LIST_INFO_detail,
               Delete_Selcet_Point,
               Original_Size,
               Compressed_Size,
               Deduplicated_Size,
               html_Page_URL,
               html_Info_Page,
               html_Path,
               html_ID,
               html_Location,
               html_Last_modified,
               html_Encryption,
               config_un_Locked_Area_1,
               config_un_Locked_Area_2,
               config_un_Locked_Area_3,
               config_un_Locked_Area_4,
               Selection_IN_Dir,
               Selection_IN_File,
               Selection_OUT_Dir,
               Selection_OUT_File,
               Cron_Script,
               Crontab_without_Borg,
               Crontab_with_Borg,
               Crontab_final_List,
               Cron_all_BackUPs,
               Cron_Job_BackUPs,
               Cron_Change_state         = "original",
               Show_Hide_BORG_BackUP_GUI = "hide",
               Search_File_Managers      = "Konqueror,Krusader,SpaceFM,PCManFM,Nautilus,Dolphin,Thunar,Caja,Nemo",
               File_Managers_in_System;

// All tools with paths
// ––––––––––– Dynamic path ––––––––––– Absolute path -------
static QString SH      = "sh",       // "/usr/bin/sh",
               TAR     = "tar",      // "/usr/bin/tar"
               BORG    = "borg",     // "/usr/bin/borg",
               MOUNT   = "mount",    // "/usr/bin/mount",
               CRONTAB = "crontab";  // "/usr/bin/crontab"

// Status control of program queries and their values.
static QString Borg_Info_OK,
               Borg_List_OK,
              new_Archive_OK,
                   Mount_OK,
                 Crontab_OK,
            save_Crontab_OK,
            check_Archive_OK,
        Borg_Detail_Info_OK,
         export_Profiles_OK,
               Borg_Info_ERROR,
               Borg_List_ERROR,
              new_Archive_ERROR,
                   Mount_ERROR,
                 Crontab_ERROR,
            save_Crontab_ERROR,
            check_Archive_ERROR,
        Borg_Detail_Info_ERROR,
         export_Profiles_ERROR,
                     ask_a,
                     ask_b,
                     ask_c,
                     all_Profiles,
     Compression_Status = "-v -s -p",
Compression_Compression = "-C",
                get_env = qgetenv("BORG_PASSPHRASE");

// Values
static int Compression_values_Deduplicated,
             Compression_values_Compressed,
             Snapshot_Comments_current_Row,
// BEG ––– run once ––––––––––––––––––––––
    run_once_File_Managers_Main_Window = 0,
      run_once_File_Managers_in_System = 0,
         run_once_Cron_all_BackUPs_OUT = 0,
              run_later_Build_Dir_File = 0,
                run_once_read_Dir_File = 0,
                     run_once_TrayMenu = 0,
                       run_once_Worker = 0,
// END –––––––––––––––––––––––––––––––––––
                    on_Change_3_on_off = 0,
                      Changes_in_Areas = 0,
                        exclude_Caches = 0,
                        exclude_System = 0,
                          cron_List_in = 0,
                           ERROR_count = 0,
                              PW_count = 0,
                              Loadloop = 0,
                               Loadbar = 0;

// Style HR & Table
static QString hr   = "<hr>",
               tB   = "<table>",
               tE   = "</table>",
               trB  = "<tr><th align=\"left\">",
               trBr = "<tr><th align=\"right\">",
               trM  = "</th><th align=\"left\">",
               trMr = "</th><th align=\"right\">",
               trE  = "</th></tr>";

// Font Master FM(6-32, "n/b/i or end") = FM(12,"n") + "TEXT" + FM(0,"end") => normal TEXT with 12pt
QString FM(int a, QString b){
    QString c,
            d;
    if(b=="end"){d = "</font>";}
    else{
        if(b=="n"){c = "normal";}
        if(b=="b"){c = "bold";}
        if(b=="i"){c = "italic";}
        d = "<font style=\"font-size:" + QString::number(a) + "pt; font-weight:" + c + "\">";
    }
    return d;
}

// BORG: direct query from Borg for the info values, output in JSON.
void BORG_BackUP_GUI::run_JSON_Info(){
    QProcess          process;
                      process.start(BORG + " info " + BackUP_Path + BackUP_Name.replace("\"","") + " --json");
                      process.waitForFinished(-1);
    QString  stdout = process.readAllStandardOutput(),
             stderr = process.readAllStandardError();
    Borg_Info_OK    = stdout;
    Borg_Info_ERROR = stderr;
}

// BORG: direct query from Borg for the list values, output in JSON.
void BORG_BackUP_GUI::run_JSON_List(){
    QProcess          process;
                      process.start(BORG + " list " + BackUP_Path + BackUP_Name.replace("\"","") + " --json");
                      process.waitForFinished(-1);
    QString stdout  = process.readAllStandardOutput(),
            stderr  = process.readAllStandardError();
    Borg_List_OK    = stdout;
    Borg_List_ERROR = stderr;
}

// BORG: detail Information
void BORG_BackUP_GUI::run_Detail_JSON_Info(QString a){
    QProcess                 process;
                             process.start(BORG + " info " + BackUP_Path + BackUP_Name.replace("\"","") + "::" + a + " --json");
                             process.waitForFinished(-1);
    QString         stdout = process.readAllStandardOutput(),
                    stderr = process.readAllStandardError();
    Borg_Detail_Info_OK    = stdout;
    Borg_Detail_Info_ERROR = stderr;
}

// BORG: check whether an archive is available.
void BORG_BackUP_GUI::Check_Borg_Archive(QString a){
    QProcess             process;
                         process.start(BORG + " info " + a);
                         process.waitForFinished(-1);
    QString     stdout = process.readAllStandardOutput(),
                stderr = process.readAllStandardError();
    check_Archive_OK    = stdout;
    check_Archive_ERROR = stderr;
}

// BORG: create a new Borg BackUP.
void BORG_BackUP_GUI::new_Borg_Archive(QString a){
    static QString START_BORG_PASSPHRASE = qgetenv("BORG_PASSPHRASE");

    qputenv("BORG_PASSPHRASE", qPrintable(ui->Archive_Key->text()));

    QProcess           process;
                       process.start(a);
                       process.waitForFinished(-1);
    QString   stdout = process.readAllStandardOutput(),
              stderr = process.readAllStandardError();
    new_Archive_OK    = stdout;
    new_Archive_ERROR = stderr;

    qputenv("BORG_PASSPHRASE", qPrintable(START_BORG_PASSPHRASE));
}

// Checks if BORG BackUP GUI has mounted the Borg-BackUP or not.
void BORG_BackUP_GUI::run_Mount_checker(){
    QProcess         process;
                     process.start(MOUNT + " -l");
                     process.waitForFinished(-1);
    QString stdout = process.readAllStandardOutput(),
            stderr = process.readAllStandardError();
    Mount_OK       = stdout;
    Mount_ERROR    = stderr;
}

// Checks Crontab
void BORG_BackUP_GUI::run_Crontab_Values(){
    QProcess         process;
                     process.start(CRONTAB + " -l");
                     process.waitForFinished(-1);
    QString stdout = process.readAllStandardOutput(),
            stderr = process.readAllStandardError();
    Crontab_OK     = stdout;
    Crontab_ERROR  = stderr;
}

// Save Crontab
void BORG_BackUP_GUI::save_Crontab(){
    QProcess             process;
                         process.start(CRONTAB + " /tmp/Crontab.final");
                         process.waitForFinished(-1);
    QString     stdout = process.readAllStandardOutput(),
                stderr = process.readAllStandardError();
    save_Crontab_OK    = stdout;
    save_Crontab_ERROR = stderr;
}

// Export all profiles to the export folder run_export_Profiles("-zcvf", "Archive_Name.tar.gz", "Path_to_Folder");
void BORG_BackUP_GUI::run_export_Profiles(QString x, QString y, QString z){
    QProcess                process;
                            process.start(TAR + " " + x + " " + y + " " + z);
                            process.waitForFinished(-1);
    QString        stdout = process.readAllStandardOutput(),
                   stderr = process.readAllStandardError();
    export_Profiles_OK    = stdout;
    export_Profiles_ERROR = stderr;
}

// Intercepting the closing function.
void BORG_BackUP_GUI::closeEvent (QCloseEvent *event){
    if(close_Event=="no"){
        event->ignore();
        hide();
        Show_Hide_BORG_BackUP_GUI = "show";
    }
}

// The query of minutes and seconds is required for the random function of the delete control security question.
QString Time_MM_ss(){
    QTime time = QTime::currentTime();
    return time.toString("mm:ss");
}

// Create a timestamp for the current Crontab BackUP.
QString timestamp_Date_Time(){
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();
    QString  a = date.toString("yyyy.MM.dd"),
             b = time.toString("hh:mm:ss");
    return a + "-" + b;
}

// read BORG json data in 2D
QString Read_BORG_json(QString x, QString y){
    QString       a = Borg_Info_OK;
    QJsonDocument b = QJsonDocument::fromJson(a.toUtf8());
    QJsonObject   c = b.object();
    QJsonValue    d = c.value(QString(x));
    QJsonObject   e = d.toObject();
    QJsonValue    f = e[y];
    QString       g = f.toString();
    return        g;
}

// read BORG json Array stats
QString Read_BORG_json_Array_stats(QString x, QString y, QString z){
    QString       a = z;
    QJsonDocument b = QJsonDocument::fromJson(a.toUtf8());
    double        c = b.object().value("cache").toObject().value("stats").toObject().value(x).toDouble();
    QString       d = QString::number(c, 'f', 0);
    double        e = (c/1000000)*100;
    if(y!="Original_Value"){
        if(x=="total_csize"||x=="total_size"||x=="unique_csize"){
            if(e>99999){ // GB
                c = c/1000000000;
                d = QString::number(c, 'f', 2);
                d = d + " GB";
            }
            else{
                if(e>99){ // MB
                    c = c/1000000;
                    d = QString::number(c, 'f', 2);
                    d = d + " MB";
                }
                else{ // KB
                    c = c/1000;
                    d = QString::number(c, 'f', 2);
                    d = d + " KB";
                }
            }
        }
        return d;
    }
    else{
        double f = d.toDouble();
        f = f/10000*100;
        QString g = QString::number(f, 'f', 0);;
        return  g;
    }
}

// read BORG json info Snapshot
QString build_json_Snapshot_value(QString x){
    x.replace("                ","");
    double        c = x.toDouble();
    QString       d = QString::number(c, 'f', 0);
    double        e = (c/1000000)*100;
            if(e>99999){ // GB
                c = c/1000000000;
                d = QString::number(c, 'f', 2);
                d = d + " GB";
            }
            else{
                if(e>99){ // MB
                    c = c/1000000;
                    d = QString::number(c, 'f', 2);
                    d = d + " MB";
                }
                else{ // KB
                    c = c/1000;
                    d = QString::number(c, 'f', 2);
                    d = d + " KB";
                }
            }
        return d;
}

// read json Snapshot LIST
QString  read_json_Snapshot_LIST(QString x){
    QString Snapshot_Info,
            a = Borg_Detail_Info_OK,
            search(x),
            line;
        QTextStream in(&a);
        do{
            line = in.readLine();
            if (line.contains(search, Qt::CaseSensitive)){
                Snapshot_Info = line.replace(search,"").replace(",","");
            }
        }
        while (!line.isNull());
        return Snapshot_Info;
}

// read BORG json List Array
void BORG_BackUP_GUI::Read_BORG_json_LIST_Array(){
    QString       a = Borg_List_OK,
                  b,
                  c;
    QStringList   d,
                  d2;
    QJsonDocument e = QJsonDocument::fromJson(a.toUtf8());
    QJsonObject   f = e.object();
    QJsonArray    g = f["archives"].toArray();
    int i = 0;
    json_LIST        = "";
    json_LIST_detail = "";
    json_LIST_html   = "";
    foreach (const QJsonValue & k, g){
        QJsonObject h = k.toObject();
        d.append(h["name"].toString());
        d2.append(h["id"].toString());
        {
            b = d.last();
            c = d2.last();
            json_LIST        = json_LIST + "NR." + QString(QString::number(i+1)) + "\t" + b + " [" + c + "]\n";
            json_LIST_detail = json_LIST_detail + "NR." + QString(QString::number(i+1)) + "\t" + b + "\n\t[" + c + "]\n\n";
            json_LIST_html   = json_LIST_html + "<tr class=\"tr\"><td class=\"tc\">" + QString(QString::number(i+1)) + "</td><td class=\"tb\">" + b + "</td><td class=\"tf\">[" + c + "]</td></tr>";
        }
        ++i;
    }
// Reading the archive values with the JSON function.
    QString path          = Read_BORG_json("cache","path"),
            encryption    = Read_BORG_json("encryption","mode"),
            id            = Read_BORG_json("repository","id"),
            location      = Read_BORG_json("repository","location"),
            last_modified = Read_BORG_json("repository","last_modified");
// Shows archive information in textINFO only if values are available.
    if(path!=""){
        ui->textINFO->setText(json_LIST_detail + "ID: " + id + "\nLocation: " + location + "\nLast Snapshot: " + last_modified.replace("T"," ").replace(".000000","") + "\nEncryption: " + encryption);
    }
// Cache the info values for the HTML Info Page.
    html_Path          = path;
    html_ID            = id;
    html_Location      = location;
    html_Last_modified = last_modified.replace("T"," ").replace(".000000","");
    html_Last_modified.replace(" "," / ");
    html_Encryption    = encryption;
// Set all Snapshot Comments
    ui->Snapshot_Comments->clear();
    QFile loc(PATH + "/profiles/.list-of-comments");
    if (loc.exists()){
        loc.open(QFile::ReadOnly | QFile::Text);
        QTextStream ts(&loc);
        QString line;
        do{
            line = ts.readLine();
            if(line!=""){
                ui->Snapshot_Comments->addItem(line);
                QString a = "";
                if(BackUP_List_of_Comments!=""){a = "\n";}
                BackUP_List_of_Comments = BackUP_List_of_Comments + a + line;
            }
        }
        while (!line.isNull());
    }
}

// Simple query with input field - normal and with confirmation query ask("Title","Text","ask(yes/no)/verify/only_input");
QString BORG_BackUP_GUI::ask(QString x,QString y,QString z){
    if(z=="ask"){
        setDisabled(true);
        QPixmap     c(PATH+"/images/logo.svg");
        QMessageBox a;
                    a.setWindowTitle(x);
                    a.setIconPixmap(c);
                    a.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
                    a.setText(y);
        QSpacerItem* horizontalSpacer = new QSpacerItem(800, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
        QGridLayout* layout = (QGridLayout*)a.layout();
        layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
        int     b = a.exec();
        switch (b){
          case QMessageBox::Yes:
              setDisabled(false);
              return "OK";
              break;
          case QMessageBox::No:
              setDisabled(false);
              return "";
              break;
        }
        setDisabled(false);
    }
    else{
        if(z=="only_input"){ //Snapshot Comment Function
            qputenv("BORG_Snapshot_Comment",qPrintable(""));
            BackUP_List_of_Comments = "";
            QStringList items;
            items << tr("––– Without a Comment –––")
                  << tr("––– Enter a new Comment –––");
            ui->Snapshot_Comments->clear();
            QFile loc(PATH + "/profiles/.list-of-comments");
            if (loc.exists()){
                loc.open(QFile::ReadOnly | QFile::Text);
                QTextStream ts(&loc);
                QString line;
                do{
                    line = ts.readLine();
                    if(line!=""){
                        items << line;
                        ui->Snapshot_Comments->addItem(line);
                        QString a = "";
                        if(BackUP_List_of_Comments!=""){a = "\n";}
                        BackUP_List_of_Comments = BackUP_List_of_Comments + a + line;
                    }
                }
                while (!line.isNull());
            }
            bool ok;
            ask_a = QInputDialog::getItem(this, x, y, items, 0, false, &ok);
            if(ok==false){
                return "Cancel";
            }

            if(ask_a=="––– Without a Comment –––"){
                ask_a = "";
            }
            QTextStream ts(&BackUP_List_of_Comments);
            QString line;
            if(ask_a=="––– Enter a new Comment –––"){
                bool ok;
                ask_a = QInputDialog::getText(this,x,y,QLineEdit::Normal,"", &ok);

                if(ok==false){
                    return "Cancel";
                }
                QString a = "";
                BackUP_List_of_Comments.replace(ask_a,"\r");
                if(ask_a!=""){
                    a = "\n";
                }
                QString b = BackUP_List_of_Comments + a + ask_a;
                QTextStream ts(&b);
                BackUP_List_of_Comments = "";
                QString line;
                do{
                    line = ts.readLine();
                    if(line!=""){
                        items << line;
                        QString a = "";
                        if(BackUP_List_of_Comments!=""){
                            a = "\n";
                        }
                        BackUP_List_of_Comments = BackUP_List_of_Comments + a + line;
                    }
                }
                while (!line.isNull());
            }
            ask_c = ask_a;
        }
        else{
            if(z=="verify"){
                ask_a = QInputDialog::getText(this,x,y).toUtf8();
                ask_b = QInputDialog::getText(this,x,"Repeat " + y).toUtf8();

                if(ask_a==ask_b){
                    ask_c =  y + ": " + ask_a;
                }
                else{
                    ask(x,y,z);
                }
            }
            if(z==""){
                ask_a = QInputDialog::getText(this,x,y);
            }
            if(ask_a==""){
                ask(x,y,z);
            }
            if(ask_a!=""){
                ask_c = y + ": " + ask_a;
            }
        }
        if(BackUP_List_of_Comments!=""){
            QFile file(PATH + "/profiles/.list-of-comments");
                  file.open(QIODevice::WriteOnly | QIODevice::Text);
            QTextStream out(&file);
            out << BackUP_List_of_Comments;
            file.close();
        }
    }
    return ask_c;
}

// Fake Loading Bar
void BORG_BackUP_GUI::LOADING(){
    int n = 301,
        i = 0;
    if(Loadbar == 1){
        while (i < n){
              ui->loadBAR->setGeometry(QRect(-10, 250, 1040, 10));
            ui->loadBAR_2->setGeometry(QRect(-10, 260, 1040, 20));
            ui->loadBAR_3->setGeometry(QRect(-10, 280, 1040, 10));
              ui->loadBAR->setStyleSheet("background:#000000;");
            ui->loadBAR_2->setStyleSheet("background:#000000;");
            ui->loadBAR_3->setStyleSheet("background:#000000;");
              ui->loadBAR->setValue(i/2);
            ui->loadBAR_2->setValue(i);
            ui->loadBAR_3->setValue(i/3);
            QDelay::msleep(1);
            ++i;
        }
    }
    i = 0;
      ui->loadBAR->setGeometry(QRect(-10, -460, 1040, 10));
    ui->loadBAR_2->setGeometry(QRect(-10, -470, 1040, 20));
    ui->loadBAR_3->setGeometry(QRect(-10, -490, 1040, 10));
}

// Create a control number to prevent accidental deletion.
void BORG_BackUP_GUI::Control_question(){
    QString a = Time_MM_ss().replace(":",""),
            b = a.section("",1,1),
            c = a.section("",2,2);
    int     d = a.toInt();
    if(d < 99){
        a = a + b + c;
    }
    if(d > 999){
        a = a.section("",1,1) +  a.section("",2,2) + a.section("",3,3);
    }
       ui->Check_Delete->setText(QString::number(qrand() % ((a.toInt() + 1) - 1) + a.toInt()));
    ui->Re_Check_Delete->setText("");
}

// Read, convert and output the compression values for the Progress bars.
void BORG_BackUP_GUI::Compression_values(QString a, QString b, QString c){
    double d = a.toDouble(),
           e = b.toDouble(),
           f = c.toDouble();
    qreal  g = d,
           h = e,
           i = f;
    int    j = qRound((100/g)*h),
           k = qRound((100/g)*i);
    Compression_values_Compressed   = j;
          ui->progressBar_2->setValue(j);
    Compression_values_Deduplicated = k;
          ui->progressBar_3->setValue(k);
}

// Reads the values for "Original, Compressed & Deduplicated Size" and displays them in the GUI.
void BORG_BackUP_GUI::Info_List(){
    run_JSON_Info(); // Export Borg JSOM Info
    run_JSON_List(); // Export Borg JSOM List
// Write Original, Compressed and Deduplicated Size with Lables
// Original Size
    QString read_Stats_Original = Read_BORG_json_Array_stats("total_size","",Borg_Info_OK);
    ui->Info->setText(read_Stats_Original);
                      read_Stats_Original.replace(" KB","").replace(" MB","").replace(" GB","");
    Original_Size = Read_BORG_json_Array_stats("total_size","Original_Value",Borg_Info_OK);
// Compressed Size
    QString read_Stats_Compressed = Read_BORG_json_Array_stats("total_csize","",Borg_Info_OK);
    ui->Info_2->setText(read_Stats_Compressed);
                        read_Stats_Compressed.replace(" KB","").replace(" MB","").replace(" GB","");
    Compressed_Size = Read_BORG_json_Array_stats("total_csize","Original_Value",Borg_Info_OK);
// Deduplicated Size
    QString read_Stats_Deduplicated = Read_BORG_json_Array_stats("unique_csize","",Borg_Info_OK);
    ui->Info_3->setText(read_Stats_Deduplicated);
                        read_Stats_Deduplicated.replace(" KB","").replace(" MB","").replace(" GB","");
    Deduplicated_Size = Read_BORG_json_Array_stats("unique_csize","Original_Value",Borg_Info_OK);
    Compression_values(Original_Size,Compressed_Size,Deduplicated_Size);
    Read_BORG_json_LIST_Array();
    Build_Delete_List();
    ui->Info_4->setText(Read_BORG_json_Array_stats("total_chunks","",Borg_Info_OK));
    ui->Info_5->setText(Read_BORG_json_Array_stats("total_unique_chunks","",Borg_Info_OK));
    ui->Info_6->setText(html_Encryption);
    ui->Info_7->setText(html_Last_modified);
    ui->Info_8->setText(html_Location);
       ui->Check_Delete->setText("");
    ui->Re_Check_Delete->setText("");
             ui->DELETE->setEnabled(false);
}


// Showing and hiding the BORG BackUP GUI via the SystemTrayIcon menu.
void BORG_BackUP_GUI::Show_Hide(){
    if(Show_Hide_BORG_BackUP_GUI == "hide"){
        this->hide();
        Show_Hide_BORG_BackUP_GUI = "show";
    }
    else{
        this->show();
        Show_Hide_BORG_BackUP_GUI = "hide";
    }
}

// ––– SystemTrayIcon Buton Actions ––––––––––––––––––––––––––
void BORG_BackUP_GUI::Show_Hide_Icon(QSystemTrayIcon::ActivationReason a){
    if (a == QSystemTrayIcon::Trigger){
        if(Show_Hide_BORG_BackUP_GUI == "hide"){
            this->hide();
            Show_Hide_BORG_BackUP_GUI = "show";
        }
        else{
            this->show();
            Show_Hide_BORG_BackUP_GUI = "hide";
        }
    }
}

// ––– Embedding the SystemTrayIcon ––––––––––––––––––––––––––
void BORG_BackUP_GUI::SystemTrayIcon(QString a){
    if(run_once_TrayMenu==0){
        QObject *SystemTray = 0;
        QIcon icon(PATH+a);
        if (QSystemTrayIcon::isSystemTrayAvailable()){
            QAction *TrayIcon_Menu_Mount = new QAction(QObject::tr("&Mount"), SystemTray);
            SystemTray->connect(TrayIcon_Menu_Mount, SIGNAL(triggered()), this, SLOT(on_Mount_clicked()));
            QAction *TrayIcon_Menu_Unmount = new QAction(QObject::tr("&Unmount"), SystemTray);
            SystemTray->connect(TrayIcon_Menu_Unmount, SIGNAL(triggered()), this, SLOT(on_Unmount_clicked()));
            QAction *TrayIcon_Menu_HIDE_SHOW = new QAction(QObject::tr("&HIDE or SHOW"), SystemTray);
            SystemTray->connect(TrayIcon_Menu_HIDE_SHOW, SIGNAL(triggered()), this, SLOT(Show_Hide()));
            QAction *TrayIcon_Menu_BackUP = new QAction(QObject::tr("Create a new &Snapshot"), SystemTray);
            SystemTray->connect(TrayIcon_Menu_BackUP, SIGNAL(triggered()), this, SLOT(on_BackUP_NOW_clicked()));
            QAction *TrayIcon_Menu_Quit = new QAction(QObject::tr("&Quit"), SystemTray);
            SystemTray->connect(TrayIcon_Menu_Quit, SIGNAL(triggered()), this, SLOT(on_Exit_triggered()));
            QMenu *TrayIconMenu = new QMenu();
                   TrayIconMenu->addAction(TrayIcon_Menu_Mount);
                   TrayIconMenu->addAction(TrayIcon_Menu_Unmount);
                   TrayIconMenu->addSeparator();
                   TrayIconMenu->addAction(TrayIcon_Menu_HIDE_SHOW);
                   TrayIconMenu->addAction(TrayIcon_Menu_BackUP);
                   TrayIconMenu->addSeparator();
                   TrayIconMenu->addAction(TrayIcon_Menu_Quit);
            QSystemTrayIcon *TrayIcon = new QSystemTrayIcon(SystemTray);
                             TrayIcon->setContextMenu(TrayIconMenu);
                             TrayIcon->setIcon(icon);
                             TrayIcon->setToolTip("BORG BackUP GUI");
                             TrayIcon->show();
                     connect(TrayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(Show_Hide_Icon(QSystemTrayIcon::ActivationReason)));
        }
    }
    ++run_once_TrayMenu;
}

// File Managers Check
void BORG_BackUP_GUI::check_File_Managers(QString a){
    ui->avaiable_File_Managers->clear();
    int b = a.count(QLatin1Char(',')),
        i = 0;
    while (i < b+1){
        QString c = a.section(',',i,i);
        QFile   d                  (c.toLower()),
                e          ("/bin/"+c.toLower()),
                f      ("/usr/bin/"+c.toLower()),
                g("/usr/local/bin/"+c.toLower());
        if(d.exists() || e.exists() || f.exists() || g.exists()){
            ui->avaiable_File_Managers->addItem(c);
            if(run_once_File_Managers_in_System==0){
                File_Managers_in_System = c + "," + File_Managers_in_System;
            }
        }
    ++i;
    }
    ++run_once_File_Managers_in_System;
}

// Call the core functions, both for single and multiple execution.
void BORG_BackUP_GUI::Main_Window(){
    QPixmap   Borg_Icon(PATH+"/images/logo.svg"),
              HTML_Icon(PATH+"/images/html.png"),
              Open_Icon(PATH+"/images/open.png"),
              Plus_Icon(PATH+"/images/plus.png"),
             Minus_Icon(PATH+"/images/minus.png"),
              Lck1_Icon(PATH+"/images/locked.png"),
              Lck2_Icon(PATH+"/images/unlocked.png"),
             Trash_Icon(PATH+"/images/trash.png");
    QIcon    Icon_Borg(Borg_Icon),
             Icon_HTML(HTML_Icon),
             Icon_Open(Open_Icon),
             Icon_Plus(Plus_Icon),
            Icon_Minus(Minus_Icon),
             Icon_Lck1(Lck1_Icon),
             Icon_Lck2(Lck2_Icon),
            Icon_Trash(Trash_Icon),
         setWindowIcon(Borg_Icon);
                       ui->logo->setPixmap(Borg_Icon);
          ui->Open_Mount_Folder->setIcon(Icon_Open);
          ui->Open_Mount_Folder->setIconSize(Open_Icon.rect().size());
          ui->Open_Mount_Folder->setIconSize(QSize(32, 32));
          ui->Open_Mount_Folder->setStyleSheet("padding: 2 0 0 0;");
                     ui->Change->setIcon(Icon_Lck1);
                     ui->Change->setIconSize(Lck1_Icon.rect().size());
                     ui->Change->setIconSize(QSize(32, 32));
                     ui->Change->setStyleSheet("padding: 2 0 0 0;");
                     ui->Change->setStyleSheet("background:#770000; color:#FFFFFF;");
                   ui->Change_2->setIcon(Icon_Lck1);
                   ui->Change_2->setIconSize(Lck1_Icon.rect().size());
                   ui->Change_2->setIconSize(QSize(32, 32));
                   ui->Change_2->setStyleSheet("padding: 2 0 0 0;");
                   ui->Change_2->setStyleSheet("background:#770000; color:#FFFFFF;");
                   ui->Change_3->setIcon(Icon_Lck1);
                   ui->Change_3->setIconSize(Lck1_Icon.rect().size());
                   ui->Change_3->setIconSize(QSize(32, 32));
                   ui->Change_3->setStyleSheet("padding: 2 0 0 0;");
                   ui->Change_3->setStyleSheet("background:#770000; color:#FFFFFF;");
          ui->Unlocked_Selecton->setIcon(Icon_Lck1);
          ui->Unlocked_Selecton->setIconSize(Lck1_Icon.rect().size());
          ui->Unlocked_Selecton->setIconSize(QSize(64, 64));
          ui->Unlocked_Selecton->setStyleSheet("padding: 2 0 0 0;");
          ui->Unlocked_Selecton->setStyleSheet("background:#999999;");
                 ui->New_Archive->setIcon(Icon_Lck1);
                 ui->New_Archive->setIconSize(Lck1_Icon.rect().size());
                 ui->New_Archive->setIconSize(QSize(32, 32));
                 ui->New_Archive->setStyleSheet("padding: 2 0 0 0;");
                 ui->New_Archive->setStyleSheet("background:#770000; color:#FFFFFF;");
                  ui->Remove_IN->setIcon(Icon_Trash);
                  ui->Remove_IN->setIconSize(Trash_Icon.rect().size());
                  ui->Remove_IN->setIconSize(QSize(32, 32));
                  ui->Remove_IN->setStyleSheet("padding: 2 0 0 0;");
                 ui->Remove_OUT->setIcon(Icon_Trash);
                 ui->Remove_OUT->setIconSize(Trash_Icon.rect().size());
                 ui->Remove_OUT->setIconSize(QSize(32, 32));
                 ui->Remove_OUT->setStyleSheet("padding: 2 0 0 0;");
             ui->add_NEW_BackUP->setIcon(Icon_Plus);
             ui->add_NEW_BackUP->setIconSize(Plus_Icon.rect().size());
             ui->add_NEW_BackUP->setIconSize(QSize(32, 32));
             ui->add_NEW_BackUP->setStyleSheet("background: #03224c; border: 2px solid #000000; padding: 0px; text-align: center; border-radius: 5px; color: rgb(255,255,255); background: qlineargradient(x1: 0, y1: 0.1, x2: 1, y2: 0.5, stop: 0 #00c1ff, stop: 1 #0f448c);");
              ui->remove_BackUP->setIcon(Icon_Minus);
              ui->remove_BackUP->setIconSize(Minus_Icon.rect().size());
              ui->remove_BackUP->setIconSize(QSize(32, 32));
              ui->remove_BackUP->setStyleSheet("background: #03224c; border: 2px solid #000000; padding: 0px; text-align: center; border-radius: 5px; color: rgb(255,255,255); background: qlineargradient(x1: 0, y1: 0.1, x2: 1, y2: 0.5, stop: 0 #ff0000, stop: 1 #880000);");
              ui->remove_BackUP->hide();
                  ui->BackUP_NOW->setStyleSheet("color:#FFFFFF; background:#007700;");
                    ui->Unlocked->setGeometry(QRect(-20, 0, 1020, 630));
    QString searchA("BackUP_Path="),
            searchB("BackUP_Name="),
            searchC("BackUP_Mount_Path="),
            searchD("BackUP_Parameters="),
            searchE("BackUP_DATA="),
            searchF("File_Manager="),
            searchG("BackUP_IGNORE="),
            searchH("--exclude-caches"),
            searchI("--exclude '/home/*/.cache/*/'");
    if(QFileInfo(PATH + "/profiles/" + BackUP_Name.replace("\"","") + ".sh").exists()){
        QFile fileA(PATH + "/profiles/" + BackUP_Name.replace("\"","") + ".sh");
        if (!fileA.open(QIODevice::ReadOnly | QIODevice::Text))
            return;
        QTextStream inA(&fileA);
        QString lineA;
        do{
            lineA = inA.readLine();
            if (lineA.contains(searchA, Qt::CaseSensitive)){
                lineA.replace("BackUP_Path=","");
                if(lineA=="\"\""){
                    //ERROR("Configuration file needs the\nBackUP PATH");
                }
                else{
                    BackUP_Path = lineA;
                }
            }
            if (lineA.contains(searchB, Qt::CaseSensitive)){
                lineA.replace("BackUP_Name=","");
                if(lineA=="\"\""){
                    //ERROR("Configuration file needs the\nBackUP NAME");
                }
                else{
                    if(BackUP_Name.length()<1){
                        BackUP_Name = lineA;
                    }
                }
            }
            if (lineA.contains(searchC, Qt::CaseSensitive)){
                lineA.replace("BackUP_Mount_Path=","");
                if(lineA=="\"\""){
                    //ERROR("Configuration file needs the\nMOUNT PATH");
                }
                else{
                    BackUP_Mount_Path = lineA;
                }
            }
            if (lineA.contains(searchD, Qt::CaseSensitive)){
                lineA.replace("BackUP_Parameters=","");
                if(lineA=="\"\""){
                    ERROR("Configuration file needs the\nBackUP PARAMETERS");
                }
                lineA.replace("\"","");
                BackUP_Parameters = lineA;
            }
            if (lineA.contains(searchE, Qt::CaseSensitive)){
                lineA.replace("BackUP_DATA=","");
                if(lineA=="\"\""){
                    //ERROR("Configuration file needs the\nBackUP FILE(S) and / or FOLDER(S)");
                }
                else{
                    lineA.replace("\"","");
                    BackUP_DATA = lineA;
                }
            }
            if (lineA.contains(searchF, Qt::CaseSensitive)){
                lineA.replace("File_Manager=","");
                if(lineA=="\"\""){
                    //ERROR("Configuration file needs a\nFile Manager");
                }
                lineA.replace("\"","");
                File_Manager = lineA;
            }
            if (lineA.contains(searchG, Qt::CaseSensitive)){
                lineA.replace("BackUP_IGNORE=","");
                lineA.replace("\"","");
                BackUP_IGNORE = lineA;
            }
            if (lineA.contains(searchH, Qt::CaseSensitive)){
                exclude_Caches = 1;
            }
            if (lineA.contains(searchI, Qt::CaseSensitive)){
                exclude_System = 1;
            }
        }
        while (!lineA.isNull());
    }
    QString Home_Path_pathInfo         = Home_Path,
            BackUP_Path_pathInfo       = BackUP_Path,
            BackUP_Name_pathInfo       = BackUP_Name,
            BackUP_Mount_Path_pathInfo = BackUP_Mount_Path;
            Home_Path_pathInfo.replace("\"","");
          BackUP_Path_pathInfo.replace("\"","");
          BackUP_Name_pathInfo.replace("\"","");
    BackUP_Mount_Path_pathInfo.replace("\"","");
                ui->pathInfo_2->setText(BackUP_Path_pathInfo);
                ui->pathInfo_3->setText(BackUP_Name_pathInfo);
                ui->pathInfo_4->setText(BackUP_Mount_Path_pathInfo);
               ui->pathInfo_11->setText(BackUP_Parameters);
    ui->avaiable_File_Managers->setCurrentIndex(ui->avaiable_File_Managers->findText(File_Manager));
    Info_List();
              ui->Info->setAttribute(Qt::WA_TranslucentBackground);
             ui->label->setAttribute(Qt::WA_TranslucentBackground);
            ui->Info_2->setAttribute(Qt::WA_TranslucentBackground);
            ui->Info_3->setAttribute(Qt::WA_TranslucentBackground);
            ui->Info_4->setAttribute(Qt::WA_TranslucentBackground);
            ui->Info_5->setAttribute(Qt::WA_TranslucentBackground);
            ui->Info_6->setAttribute(Qt::WA_TranslucentBackground);
            ui->Info_7->setAttribute(Qt::WA_TranslucentBackground);
            ui->Info_8->setAttribute(Qt::WA_TranslucentBackground);
           ui->label_9->setAttribute(Qt::WA_TranslucentBackground);
           ui->label_2->setAttribute(Qt::WA_TranslucentBackground);
           ui->label_3->setAttribute(Qt::WA_TranslucentBackground);
          ui->label_10->setAttribute(Qt::WA_TranslucentBackground);
          ui->label_11->setAttribute(Qt::WA_TranslucentBackground);
          ui->label_12->setAttribute(Qt::WA_TranslucentBackground);
          ui->label_13->setAttribute(Qt::WA_TranslucentBackground);
          ui->label_28->setAttribute(Qt::WA_TranslucentBackground);
          ui->label_29->setAttribute(Qt::WA_TranslucentBackground);
     ui->textBrowser_5->setAttribute(Qt::WA_TranslucentBackground);
     ui->textBrowser_6->setAttribute(Qt::WA_TranslucentBackground);
     ui->textBrowser_7->setAttribute(Qt::WA_TranslucentBackground);
     ui->textBrowser_8->setAttribute(Qt::WA_TranslucentBackground);
     ui->textBrowser_9->setAttribute(Qt::WA_TranslucentBackground);
    ui->textBrowser_10->setAttribute(Qt::WA_TranslucentBackground);
    ui->textBrowser_11->setAttribute(Qt::WA_TranslucentBackground);
    ui->textBrowser_12->setAttribute(Qt::WA_TranslucentBackground);
    ui->textBrowser_13->setAttribute(Qt::WA_TranslucentBackground);
    ui->textBrowser_14->setAttribute(Qt::WA_TranslucentBackground);
    ui->textBrowser_15->setAttribute(Qt::WA_TranslucentBackground);
     ui->textBrowser_5->setAttribute(Qt::WA_TranslucentBackground);
    ui->textBrowser_12->setAttribute(Qt::WA_TranslucentBackground);
    run_Mount_checker();
    if(Mount_ERROR == ""){
        QTextStream inA(&Mount_OK);
        QString lineA;
        do{
            lineA = inA.readLine();
            if (lineA.contains("borg", Qt::CaseSensitive)){
                    ui->tabWidget->setTabEnabled(1,false);
                    ui->tabWidget->setTabEnabled(2,false);
                    ui->tabWidget->setTabEnabled(3,false);
                    ui->tabWidget->setTabEnabled(4,false);
                    ui->tabWidget->setTabEnabled(5,false);
                   ui->BackUP_NOW->setEnabled(false);
                   ui->BackUP_NOW->setStyleSheet("background:#CCCCCC; color:#AAAAAA;");
                  ui->progressBar->setEnabled(false);
                ui->progressBar_2->setEnabled(false);
                ui->progressBar_3->setEnabled(false);
                  ui->Delete_List->setEnabled(false);
                       ui->Delete->setEnabled(false);
                        ui->Mount->setEnabled(false);
                      ui->Unmount->setEnabled(true);
                      ui->Unmount->setStyleSheet("background:#AA0000; color:#FFFFFF;");
                        ui->Mount->setGeometry(QRect(10, -220, 220, 40));
                    ui->openMount->setGeometry(QRect(10, 230, 220, 40));
                   ui->Mount_Info->setGeometry(QRect(-20, 0, 1020, 280));
            }
        }
        while (!lineA.isNull());
    }
    run_Crontab_Values();
    on_AddChange("only_Check");
    Read_BORG_json_LIST_Array();
// Cron Job: keep Add button disabled at first start.
    if(Cron_Change_state == "original"){
        ui->AddChange->setEnabled(false);
               ui->HH->setEnabled(false);
               ui->mm->setEnabled(false);
        Cron_Change_state = "changed";
// Saves original Crontab entries with date in export folder.
        if(Crontab_OK!=""){
            QString Date_Time = timestamp_Date_Time();
            QFile file(PATH + "/export/Crontab/Crontab-" + Date_Time + ".backup");
                  file.open(QIODevice::WriteOnly | QIODevice::Text);
            QTextStream out(&file);
            out << Crontab_OK;
            file.close();
        }
    }
    read_Dir_File(BackUP_DATA,BackUP_IGNORE);
    if(run_once_File_Managers_Main_Window==0){
        check_File_Managers(Search_File_Managers);
        if(Search_File_Managers!=""){
            QString a;
            int c = Search_File_Managers.count(",");
            for (int i = 0; i < c+1; ++i) {
                a = Search_File_Managers.section(',',i,i);
                if(a==File_Manager){
                    ui->avaiable_File_Managers->setCurrentIndex(i);
                }
            }
        }
        run_once_File_Managers_Main_Window = 1;
    }
    int     Parameters_A = BackUP_Parameters.count("-v -s -p"),
            Parameters_B = BackUP_Parameters.count("-C"),
            Parameters_C = BackUP_Parameters.count("auto"),
            Parameters_D = BackUP_Parameters.count("lz4"),
            Parameters_E = BackUP_Parameters.count("zstd"),
            Parameters_F = BackUP_Parameters.count("zlib"),
            Parameters_G = BackUP_Parameters.count("lzmb");
    if(Parameters_A == 1){
        ui->Status->setCurrentIndex(1);
    }
    if(Parameters_B == 1){
        if(Parameters_D == 1){
            ui->Compression_Type->setCurrentIndex(1);
        }
        else{
            if(Parameters_E == 1){
                ui->Compression_Type->setCurrentIndex(2);
                int     c = BackUP_Parameters.count(",");
                QString a = BackUP_Parameters.section(',',c,c);
                Compression_Type_Value_remove_Items();
                ui->Compression_Type_Value->setDisabled(false);
                QStringList list=(QStringList()<<"1"<<"2"<<"3"<<"4"<<"5"<<"6"<<"7"<<"8"<<"9"<<"10"<<"11"<<"12"<<"13"<<"14"<<"15"<<"16"<<"17"<<"18"<<"19"<<"20"<<"21"<<"22");
                ui->Compression_Type_Value->addItems(list);
                ui->Compression_Type_Value->setCurrentIndex(a.toInt()-1);
            }
            if(Parameters_F == 1){
                ui->Compression_Type->setCurrentIndex(3);
                int     c = BackUP_Parameters.count(",");
                QString a = BackUP_Parameters.section(',',c,c);

                Compression_Type_Value_remove_Items();

                ui->Compression_Type_Value->setDisabled(false);
                QStringList list=(QStringList()<<"0"<<"1"<<"2"<<"3"<<"4"<<"5"<<"6"<<"7"<<"8"<<"9");
                ui->Compression_Type_Value->addItems(list);
                ui->Compression_Type_Value->setCurrentIndex(a.toInt());
            }
            if(Parameters_G == 1){
                ui->Compression_Type->setCurrentIndex(4);
                int     c = BackUP_Parameters.count(",");
                QString a = BackUP_Parameters.section(',',c,c);
                Compression_Type_Value_remove_Items();
                ui->Compression_Type_Value->setDisabled(false);
                QStringList list=(QStringList()<<"0"<<"1"<<"2"<<"3"<<"4"<<"5"<<"6"<<"7"<<"8"<<"9");
                ui->Compression_Type_Value->addItems(list);
                ui->Compression_Type_Value->setCurrentIndex(a.toInt());
            }
        }
    }
    if(Parameters_C == 1){
        ui->Compression_none_auto->setCurrentIndex(1);
    }
    ui->Compression_Type_Value->setDisabled(true);
               ui->progressBar->setValue(100);
    QString read_all_BackUPs;
    QDir directory(PATH+"/profiles");
    QStringList sh = directory.entryList(QStringList() << "*.PASSPHRASE",QDir::Files);
    int i = 0;
    foreach(QString filename, sh) {
        read_all_BackUPs = read_all_BackUPs + qPrintable(sh[i].replace(".PASSPHRASE",","));
        ++i;
    }
    if(run_once_Cron_all_BackUPs_OUT == 0){
        Cron_all_BackUPs = read_all_BackUPs;
        Cron_Job_BackUPs = "";
        set_Cron_Jobs_in_GUI();
        ++run_once_Cron_all_BackUPs_OUT;
    }
// Removes the password query field if a password query was already successful, e.g. via "export".
    if(html_Encryption!=""){
        ui->frame_login_info->setGeometry(QRect(20, -100, 410, 60));
                 ui->loading->setGeometry(QRect(-10, -230, 940, 180));
             ui->frame_login->setGeometry(QRect(-10, -560, 980, 440));
           ui->frame_login_2->setGeometry(QRect(-10, -560, 980, 440));
          ui->login_black_BG->setGeometry(QRect(-20, -940, 1040, 910));
               ui->tabWidget->setEnabled(true);
                    ui->pass->setText("");
        SystemTrayIcon("/images/logo.svg");
    }
    ui->Unmount_Menu->setDisabled(true);
    QMovie *movie = new QMovie(PATH + "/images/loading.gif");
    ui->loading_GIF->setMovie(movie);
    ui->loading_GIF->setGeometry(400,-300,200,200);
    ui->loading_GIF->show();
    ui->progressBar->setValue(100);
    movie->start();
}

// Reads the BackUPs and puts them into an in and out list.
void BORG_BackUP_GUI::set_Cron_Jobs_in_GUI(){
    ui->all_BackUPs->clear();
    QPixmap cron_IN_Icon(PATH+"/images/in.png"),
            cron_OUT_Icon(PATH+"/images/out.png");
    QIcon   cron_IN(cron_IN_Icon),
            cron_OUT(cron_OUT_Icon);
    QTextStream inA(&Crontab_with_Borg);
    QString lineA,
            final_IN;
    do{
        lineA = inA.readLine();
        if (lineA.contains(".PASSPHRASE", Qt::CaseSensitive)){
            if(lineA!=""){
                if(Crontab_with_Borg!=""){
                    int c  = lineA.count(QLatin1Char('/'));
                    final_IN = final_IN + "," + lineA.section("/",c,c);
                    ui->all_BackUPs_cron_job->addItem(new QListWidgetItem(QIcon(cron_IN),lineA.section("/",c,c).replace("\\"," ").replace(".PASSPHRASE","")));
                }
            }
        }
    }
    while (!lineA.isNull());
    int cc  = final_IN.count(QLatin1Char(','));
    for (int i = 0; i < cc+1; ++i){
        if(final_IN.section(",",i,i)!=""){
            QString a = "," + final_IN.section(",",i,i);
            all_Profiles.replace(a,"");
        }
    }
    QString final_END = all_Profiles;
    int Cron_Job_BackUPs_count  = all_Profiles.count(QLatin1Char(','));
    for (int i = 0; i < Cron_Job_BackUPs_count+1; ++i){
        QString a = final_END.section(',',i,i),
                b = a.replace("\"","");
        int c = b.count();
        if(c > 1){
            ui->all_BackUPs->addItem(new QListWidgetItem(QIcon(cron_OUT),a.replace("\\"," ").replace(".PASSPHRASE","")));
        }
    }
   ui->all_BackUPs->sortItems();
}

// Read all archive profiles
void BORG_BackUP_GUI::read_all_Profiles(){
    ui->all_Profiles->clear();
    QPixmap Icon(PATH+"/images/all.png");
    QIcon   Icon_All(Icon);
    QDir directory(PATH+"/profiles");
    QStringList sh = directory.entryList(QStringList() << "*.PASSPHRASE",QDir::Files);
    int i = 0;
    foreach(QString filename, sh) {
        all_Profiles = all_Profiles + "," + sh[i];
        ui->all_Profiles->addItem(new QListWidgetItem(QIcon(Icon_All),qPrintable(sh[i].replace(".PASSPHRASE",""))));       
        ++i;
    }
    int BackUPs = ui->all_Profiles->count();
    if(BackUPs==0){
             ui->tabWidget->setEnabled(true);
             ui->tabWidget->setTabEnabled(0,false);
             ui->tabWidget->setTabEnabled(1,false);
             ui->tabWidget->setTabEnabled(2,false);
             ui->tabWidget->setTabEnabled(3,false);
             ui->tabWidget->setTabEnabled(4,false);
             ui->tabWidget->setCurrentIndex(5);
        ui->login_black_BG->hide();
          ui->all_Profiles->hide();
           ui->frame_login->hide();
               ui->Unlocked->hide();
    }
}

// ––– Initializing the UI of BORG BackUP GUI ––––––––––––––––
BORG_BackUP_GUI::BORG_BackUP_GUI(QWidget *parent) : QMainWindow(parent),ui(new Ui::BORG_BackUP_GUI){
    PATH = QCoreApplication::applicationDirPath();
      ui->setupUi(this);
    this->setFixedSize(1000, 620);
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    this->setWindowTitle("BORG BackUP GUI");
       ui->frame_login->setGeometry(QRect(230, 110, 540, 80));
         ui->tabWidget->setEnabled(false);
        ui->label_pass->setAttribute(Qt::WA_TranslucentBackground);
    ui->login_black_BG->setGeometry(QRect(-20, 0, 1040, 910));
              ui->pass->setFocus();
    read_all_Profiles();
// If the BORG PASSPHRASE was not set, the PASSPHRASE query is executed.
    if(get_env!=""){
        qputenv("BORG_PASSPHRASE", qPrintable(get_env));
    }
        on_pass_OK_clicked();
}

// ––– Create the deletion list using a JSON Borg query. –––––
void BORG_BackUP_GUI::Build_Delete_List(){  
    QPixmap Icon(PATH+"/images/all.png");
    QIcon Icon_All(Icon);
    ui->Delete_List->clear();
    QString       a = Borg_List_OK,
                  b;
    QStringList   c;
    QJsonDocument d = QJsonDocument::fromJson(a.toUtf8());
    QJsonObject   e = d.object();
    QJsonArray    f = e["archives"].toArray();
    int i = 0;
    json_LIST = "";
    foreach (const QJsonValue & g, f){
        QJsonObject h = g.toObject();
                        c.append(h["name"].toString());
                    b = c.last();
        ui->Delete_List->addItem(new QListWidgetItem(QIcon(Icon_All),b));
        ++i;
    }
}

// Change action options in GUI if mount is selected.
void BORG_BackUP_GUI::Mount_setEnabled_GUI_Parts(){
        ui->tabWidget->setTabEnabled(1,false);
        ui->tabWidget->setTabEnabled(2,false);
        ui->tabWidget->setTabEnabled(3,false);
        ui->tabWidget->setTabEnabled(4,false);
        ui->tabWidget->setTabEnabled(5,false);
            ui->Mount->setEnabled(false);
          ui->Unmount->setEnabled(true);
          ui->Unmount->setStyleSheet("background:#AA0000; color:#FFFFFF;");
       ui->BackUP_NOW->setStyleSheet("");
       ui->BackUP_NOW->setEnabled(false);
      ui->progressBar->setEnabled(false);
    ui->progressBar_2->setEnabled(false);
    ui->progressBar_3->setEnabled(false);
      ui->Delete_List->setEnabled(false);
           ui->Delete->setEnabled(false);
            ui->Mount->setGeometry(QRect(10, -220, 220, 40));
        ui->openMount->setGeometry(QRect(10, 230, 220, 40));
       ui->Mount_Info->setGeometry(QRect(-20, 0, 1020, 280));
}

// Change action options in GUI if unmount is selected.
void BORG_BackUP_GUI::Unmount_setEnabled_GUI_Parts(){
        ui->tabWidget->setTabEnabled(1,true);
        ui->tabWidget->setTabEnabled(2,true);
        ui->tabWidget->setTabEnabled(3,true);
        ui->tabWidget->setTabEnabled(4,true);
        ui->tabWidget->setTabEnabled(5,true);
            ui->Mount->setEnabled(true);
          ui->Unmount->setEnabled(false);
          ui->Unmount->setStyleSheet("");
       ui->BackUP_NOW->setStyleSheet("background:#006600; color:#FFFFFF;");
       ui->BackUP_NOW->setEnabled(true);
      ui->progressBar->setEnabled(true);
    ui->progressBar_2->setEnabled(true);
    ui->progressBar_3->setEnabled(true);
      ui->Delete_List->setEnabled(true);
           ui->Delete->setEnabled(true);
            ui->Mount->setGeometry(QRect(10, 230, 220, 40));
        ui->openMount->setGeometry(QRect(10, -220, 220, 40));
       ui->Mount_Info->setGeometry(QRect(150, -150, 840, 50));
}

// Checks the mount folder as well as the file manager and mounts the BackUP.
void BORG_BackUP_GUI::on_Mount_clicked(){
    if(ui->avaiable_File_Managers->currentIndex()==-1 || ui->pathInfo_4->text()==""){
        ERROR("To mount a BackUP, you must first select a <b>File Manager</b> and a <b>Mount Folder</b> in the Config area.");
        ui->tabWidget->setCurrentIndex(4);
    }
    else{
        QString a(BackUP_Mount_Path);
                a.replace("\"","");
        QDir    b(a);
        if(b.exists()){
            system(qPrintable(BORG + " mount " + BackUP_Path + BackUP_Name.replace("\"","") + " " + BackUP_Mount_Path));
            Mount_setEnabled_GUI_Parts();
        }
        else{
            setDisabled(true);
            QPixmap     c(PATH+"/images/logo.svg");
            QMessageBox a;
                        a.setWindowTitle("MOUNT - ERROR");
                        a.setIconPixmap(c);
                        a.setStandardButtons(QMessageBox::Help | QMessageBox::Ok);
                        a.setText("It is not possible to mount the BackUP!\n\nDoes the mount folder exist or is the path correct?");
            QSpacerItem* horizontalSpacer = new QSpacerItem(800, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
            QGridLayout* layout = (QGridLayout*)a.layout();
            layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
            int     b = a.exec();
            switch (b){
              case QMessageBox::Ok:
                  setDisabled(false);
                  break;
              case QMessageBox::Help:
                  QDesktopServices::openUrl(QUrl(QString("https://github.com/MTrage/Borg-BackUP-GUI/wiki/Short-instruction#backup-area")));
                  setDisabled(false);
                  break;
            }
            setDisabled(false);
        }
    }
}

// The BackUP is unmounted and the GUI action options are adjusted.
void BORG_BackUP_GUI::on_Unmount_clicked(){
    system(qPrintable(BORG + " umount " + BackUP_Mount_Path));
    Unmount_setEnabled_GUI_Parts();
}

// read_Borg_Detail_Info_OK("Borg_Detail_Info_OK","ABC","123");
QString read_Borg_Detail_Info_OK(QString x, QString y, QString z){
    QString       a = x,
                  b;
    QStringList   c;
    QJsonDocument d = QJsonDocument::fromJson(a.toUtf8());
    QJsonObject   e = d.object();
    QJsonArray    f = e[y].toArray();
    int i = 0;
    foreach (const QJsonValue & g, f){
        QJsonObject h = g.toObject();
                        c.append(h[z].toString());
                    b = c.last();
        ++i;
    }
    return b;
}

// If a selection is made in "Delete_Info_Details",
// snapshot information is displayed and a delete control number is displayed in the GUI.
void BORG_BackUP_GUI::on_Delete_List_currentRowChanged(int currentRow){
    if(currentRow > -1){
        QFont font_Side("Monospace", 16);
        ui->Delete_Info_Details->setFont(font_Side);
        ui->Delete_Info_Details->setText("<BR><BR><BR>&nbsp;&nbsp;&nbsp;&nbsp;<b>Loading Data please wait...</b>");
        qApp->processEvents();
        const QString& a = ui->Delete_List->item(currentRow)->text();
        QString        b = a.section(' ',0,0);
        Control_question();
        Delete_Selcet_Point = b;
        ui->DELETE->setEnabled(false);
        ui->DELETE->setStyleSheet("");
        QString c = ui->Delete_List->item(currentRow)->text();
        run_Detail_JSON_Info(c);
        QString out = FM(20,"b")        + "Name: "          + FM(0,"end")       + FM(20,"n") + read_Borg_Detail_Info_OK(Borg_Detail_Info_OK,"archives","name")                                         + FM(0,"end") + hr + tB +
                      trB  + FM(18,"b") + "Host: "          + FM(0,"end") + trM + FM(18,"n") + read_Borg_Detail_Info_OK(Borg_Detail_Info_OK,"archives","hostname")                                     + FM(0,"end") + trE +
                      trB  + FM(18,"b") + "User: "          + FM(0,"end") + trM + FM(18,"n") + read_Borg_Detail_Info_OK(Borg_Detail_Info_OK,"archives","username")                                     + FM(0,"end") + trE +
                      trB  + FM(18,"b") + "Comment: "       + FM(0,"end") + trM + FM(18,"n") + read_Borg_Detail_Info_OK(Borg_Detail_Info_OK,"archives","comment")                                      + FM(0,"end") + trE + tE +
                             FM(12,"b")  + "ID: "            + FM(0,"end")       + FM(12,"n")  + read_Borg_Detail_Info_OK(Borg_Detail_Info_OK,"archives","id")                                           + FM(0,"end") + hr + tB +
                      trB  + FM(18,"b") + "Start: "         + FM(0,"end") + trM + FM(18,"n") + read_Borg_Detail_Info_OK(Borg_Detail_Info_OK,"archives","start").replace(".000000","").replace("T"," ") + FM(0,"end") + trE +
                      trB  + FM(18,"b") + "End: "           + FM(0,"end") + trM + FM(18,"n") + read_Borg_Detail_Info_OK(Borg_Detail_Info_OK,"archives","end").replace(".000000","").replace("T"," ")   + FM(0,"end") + trE +
                      trB  + FM(18,"b") + "Last modified: " + FM(0,"end") + trM + FM(18,"n") + read_json_Snapshot_LIST("\"last_modified\":").replace(".000000","").replace("\"","").replace("T"," ")   + FM(0,"end") + trE + tE + hr + tB +
                      trB  + FM(16,"b") + "Original size: "                                                        + FM(0,"end")       + trM  + FM(16,"b") + "Compressed size: "                                                        + FM(0,"end")       + trM  + FM(16,"b") + "Deduplicated size: "                                                        + FM(0,"end")       + trE +
                      trBr + FM(16,"n") + build_json_Snapshot_value(read_json_Snapshot_LIST("\"original_size\":")) + FM(0,"end") + " " + trMr + FM(16,"n") + build_json_Snapshot_value(read_json_Snapshot_LIST("\"compressed_size\":")) + FM(0,"end") + " " + trMr + FM(16,"n") + build_json_Snapshot_value(read_json_Snapshot_LIST("\"deduplicated_size\":")) + FM(0,"end") + " " + trE + tE;
        ui->Delete_Info_Details->setText(qPrintable(out));
        qApp->processEvents();
    }
}

// Checks whether the delete control number in the GUI and the entered number are identical and deletes the snapshot if desired.
void BORG_BackUP_GUI::on_DELETE_clicked(){
    ui->tabWidget->setEnabled(false);
         ui->wait->setGeometry(QRect(-30, 0, 1040, 640));
    qApp->processEvents();
    Loadbar = 1;
    qApp->processEvents();
    LOADING();
    QString a = BORG + " delete " + BackUP_Path+BackUP_Name.replace("\"","") + " " + Delete_Selcet_Point;
    system(qPrintable(a));
    Info_List();
    ui->tabWidget->setEnabled(true);
         ui->wait->setGeometry(QRect(-30, -640, 1040, 640));
}

// ––– ERROR Messages ––––––––––––––––––––––––––––––––––––––––
void BORG_BackUP_GUI::ERROR(QString c){
    QPixmap d(PATH+"/images/logo.svg");
    QMessageBox a;
                a.setWindowTitle("ERROR");
                a.setIconPixmap(d);
                a.setStandardButtons(QMessageBox::Help | QMessageBox::Ok);
                a.setText("<b>BORG BackUP GUI</b><BR>Configuration ERROR<BR><BR>" + c);
                QSpacerItem* horizontalSpacer = new QSpacerItem(800, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
                QGridLayout* layout = (QGridLayout*)a.layout();
                layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
    int     b = a.exec();
    switch (b){
      case QMessageBox::Ok:
          break;
      case QMessageBox::Help:
          QDesktopServices::openUrl(QUrl(QString("https://github.com/MTrage/Borg-BackUP-GUI/wiki/Short-instruction")));
          break;
      default:
          break;
    }
}

// ––– INFO Messages ––––––––––––––––––––––––––––––––––––––––
void BORG_BackUP_GUI::INFO(QString c){
    setDisabled(true);
    QPixmap d(PATH+"/images/logo.svg");
    QMessageBox a;
                a.setWindowTitle("Information");
                a.setIconPixmap(d);
                a.setStandardButtons(QMessageBox::Help | QMessageBox::Ok);
                a.setText(c);
                QSpacerItem* horizontalSpacer = new QSpacerItem(800, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
                QGridLayout* layout = (QGridLayout*)a.layout();
                layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
    int     b = a.exec();
    switch (b){
      case QMessageBox::Ok:
          setDisabled(false);
          break;
      case QMessageBox::Help:
          QDesktopServices::openUrl(QUrl(QString("https://github.com/MTrage/Borg-BackUP-GUI/wiki/Short-instruction")));
          setDisabled(false);
          break;
      default:
          break;
    }
}

// CRON JOB
void BORG_BackUP_GUI::on_AddChange(QString z){
    QPixmap  cron_IN_Icon(PATH+"/images/in.png"),
            cron_OUT_Icon(PATH+"/images/out.png");
    QIcon         cron_IN(cron_IN_Icon),
                 cron_OUT(cron_OUT_Icon);
/*
// In the current program structure, an additional entry of the BackUPs is not required !!!
// For users who want to imply this feature or other excerpts in their project !!!
    if (Crontab_OK.contains("/profiles/", Qt::CaseSensitive)){
        QDir directory(PATH+"/profiles");
        QStringList sh = directory.entryList(QStringList() << "*.PASSPHRASE",QDir::Files);
        int i = 0;
        foreach(QString filename, sh){
            if(Crontab_OK.contains(qPrintable(sh[i].replace(".PASSPHRASE","")), Qt::CaseSensitive))
            {
                if(cron_List_in == 0){
                    ui->all_BackUPs_cron_job->addItem(new QListWidgetItem(QIcon(cron_IN),qPrintable(sh[i].replace(".PASSPHRASE",""))));
                }
            }
            ++i;
        }
        ++cron_List_in;
    }
*/
    Crontab_with_Borg    = "";
    Crontab_without_Borg = "";
    if(Crontab_ERROR==""){
        if(Crontab_OK!=""){
            QString searchA("/profiles/");
                QTextStream inA(&Crontab_OK);
                QString lineA;
                do{
                    lineA = inA.readLine();
                    if (lineA.contains(searchA, Qt::CaseSensitive)){
                        if(lineA!=""){
                            if(Crontab_with_Borg!=""){
                                Crontab_with_Borg = Crontab_with_Borg + "\n" + lineA;
                            }
                            else{
                                Crontab_with_Borg = lineA;
                            }
                        }
                    }
                    else{
                        if(lineA!=""){
                            Crontab_without_Borg = Crontab_without_Borg + "\n" + lineA;
                        }
                    }
                }
            while (!lineA.isNull());
        }
    }
    if(Crontab_without_Borg!=""){
        Crontab_final_List = Crontab_without_Borg + "\n";
    }
    if(z=="only_Check")
    {
// in out backups
        QTextStream in(&Crontab_with_Borg);
        QString line = in.readLine();
        while (!line.isNull()){
            if(line.contains(".PASSPHRASE")){
                int week_Day = line.section(' ',4,4).toInt();
                if(week_Day == 1){ui->WD1->setChecked(true);}
                if(week_Day == 2){ui->WD2->setChecked(true);}
                if(week_Day == 3){ui->WD3->setChecked(true);}
                if(week_Day == 4){ui->WD4->setChecked(true);}
                if(week_Day == 5){ui->WD5->setChecked(true);}
                if(week_Day == 6){ui->WD6->setChecked(true);}
                if(week_Day == 0){ui->WD7->setChecked(true);}
                int HH = line.section(' ',1,1).toInt(),
                    mm = line.section(' ',0,0).toInt();
                ui->HH->setTime(QTime(HH,mm));
                ui->mm->setTime(QTime(HH,mm));
            }
            line = in.readLine();
        }
    }
    else{
        if(z=="Remove"){
            QFile file("/tmp/Crontab.final");
                  file.open(QIODevice::WriteOnly | QIODevice::Text);

            QTextStream out(&file);
                        out << Crontab_final_List;
            file.close();
            save_Crontab();
        }
        else{
            QString a,
                    cron;
            const int H = ui->HH->time().hour();
            const int M = ui->mm->time().minute();
            QString   b = QString::number(H),
                      c = QString::number(M);
                   cron = c + " " + b;
            QString WD1,WD2,WD3,WD4,WD5,WD6,WD7,WEEK,
                    WDE = " " + SH + " " + PATH + "/profiles/";
            if(ui->WD1->isChecked()){
                a = " * * 1";
                int all_BackUPs = ui->all_BackUPs_cron_job->count();
                if(all_BackUPs>0){
                    for (int i = 0; i < all_BackUPs; ++i) {
                        WD1 = WD1 + cron + a + WDE + ui->all_BackUPs_cron_job->item(i)->text()+".PASSPHRASE\n";
                    }
                }
            }
            if(ui->WD2->isChecked()){
                a = " * * 2";
                int all_BackUPs = ui->all_BackUPs_cron_job->count();
                if(all_BackUPs>0){
                    for (int i = 0; i < all_BackUPs; ++i) {
                        WD2 = WD2 + cron + a + WDE + ui->all_BackUPs_cron_job->item(i)->text()+".PASSPHRASE\n";
                    }
                }
            }
            if(ui->WD3->isChecked()){
                a = " * * 3";
                int all_BackUPs = ui->all_BackUPs_cron_job->count();
                if(all_BackUPs>0){
                    for (int i = 0; i < all_BackUPs; ++i) {
                        WD3 = WD3 + cron + a + WDE + ui->all_BackUPs_cron_job->item(i)->text()+".PASSPHRASE\n";
                    }
                }
            }
            if(ui->WD4->isChecked()){
                a = " * * 4";
                int all_BackUPs = ui->all_BackUPs_cron_job->count();
                if(all_BackUPs>0){
                    for (int i = 0; i < all_BackUPs; ++i) {
                        WD4 = WD4 + cron + a + WDE + ui->all_BackUPs_cron_job->item(i)->text()+".PASSPHRASE\n";
                    }
                }
            }
            if(ui->WD5->isChecked()){
                a = " * * 5";
                int all_BackUPs = ui->all_BackUPs_cron_job->count();
                if(all_BackUPs>0){
                    for (int i = 0; i < all_BackUPs; ++i) {
                        WD5 = WD5 + cron + a + WDE + ui->all_BackUPs_cron_job->item(i)->text()+".PASSPHRASE\n";
                    }
                }
            }
            if(ui->WD6->isChecked()){
                a = " * * 6";
                int all_BackUPs = ui->all_BackUPs_cron_job->count();
                if(all_BackUPs>0){
                    for (int i = 0; i < all_BackUPs; ++i) {
                        WD6 = WD6 + cron + a + WDE + ui->all_BackUPs_cron_job->item(i)->text()+".PASSPHRASE\n";
                    }
                }
            }
            if(ui->WD7->isChecked()){
                a = " * * 0";
                int all_BackUPs = ui->all_BackUPs_cron_job->count();
                if(all_BackUPs>0){
                    for (int i = 0; i < all_BackUPs; ++i) {
                        WD7 = WD7 + cron + a + WDE + ui->all_BackUPs_cron_job->item(i)->text()+".PASSPHRASE\n";
                    }
                }
            }
            WEEK = WD1 + WD2 + WD3 + WD4 + WD5 + WD6 + WD7;
            if(WEEK!=""){
                if(Crontab_final_List!=""){
                    QFile file("/tmp/Crontab.final");
                          file.open(QIODevice::WriteOnly | QIODevice::Text);
                    QTextStream out(&file);
                                Crontab_final_List = Crontab_final_List + WEEK;
                                out << Crontab_final_List;
                    file.close();
                    save_Crontab();
                }
                else{
                    QFile file("/tmp/Crontab.final");
                          file.open(QIODevice::WriteOnly | QIODevice::Text);
                    QTextStream out(&file);
                                out << WEEK;
                    file.close();
                    save_Crontab();
                }
            }
        }
    }
// BEG New creation of the Cron Job IN OUT list
    if(cron_List_in == 2){
        QString all_BackUPs_cron_job_IN,
                all_BackUPs_IN_OUT,
                cron_Ready = all_BackUPs_IN_OUT;
        int count1 = ui->all_BackUPs_cron_job->count(),
            count2 = ui->all_BackUPs->count();
        for(int i = 0; i < count1; i++){
//all_BackUPs_cron_job_IN = all_BackUPs_cron_job_IN + " " + ui->all_BackUPs_cron_job->item(i)->text();
        }
        for(int i = 0; i < count2; i++){
            all_BackUPs_IN_OUT = all_BackUPs_IN_OUT + " " + ui->all_BackUPs->item(i)->text();
        }
        int count_Cron_IN     = all_BackUPs_cron_job_IN.count(QLatin1Char(' '));
        for(int i =0; i < count_Cron_IN+1; i++){
            if(all_BackUPs_cron_job_IN.section(" ",i,i) != ""){
                ui->all_BackUPs->clear();
                cron_Ready = all_BackUPs_IN_OUT.replace(all_BackUPs_cron_job_IN.section(" ",i,i),"");
            }
        }
        cron_Ready.replace("   "," ");
        int count_Cron_Ready = cron_Ready.count(QLatin1Char(' '));
        for(int i =0; i < count_Cron_Ready+1; i++){
            if(cron_Ready.section(" ",i,i) != ""){
                        ui->all_BackUPs->addItem(new QListWidgetItem(QIcon(cron_OUT),qPrintable(cron_Ready.section(" ",i,i))));
                        ui->all_BackUPs->sortItems();
               ui->all_BackUPs_cron_job->sortItems();
            }
        }
    }
// END
}

// Cronjob (crontab) remove Action
void BORG_BackUP_GUI::on_Remove_clicked(){
    on_AddChange("Remove");
    on_AddChange("only_Check");
                      ui->HH->setTime(QTime(00,00));
                      ui->mm->setTime(QTime(00,00));
                      ui->HH->setEnabled(false);
                      ui->mm->setEnabled(false);
                     ui->WD1->setChecked(false);
                     ui->WD2->setChecked(false);
                     ui->WD3->setChecked(false);
                     ui->WD4->setChecked(false);
                     ui->WD5->setChecked(false);
                     ui->WD6->setChecked(false);
                     ui->WD7->setChecked(false);
                  ui->Remove->setEnabled(false);
               ui->AddChange->setEnabled(false);
             ui->all_BackUPs->setEnabled(false);
    ui->all_BackUPs_cron_job->setEnabled(false);
    set_Cron_Jobs_in_GUI();
    ui->all_BackUPs_cron_job->clear();
    qApp->processEvents();
}

// Creating a Web Info Page
void BORG_BackUP_GUI::write_html_Page(){
    Read_BORG_json_LIST_Array();
    QString BackUP_Name_RE = BackUP_Name.replace("\"","");
    html_Info_Page = "<html>\n"
                     "<head>\n"
                     "<meta charset=\"utf-8\">\n"
                     "<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n"
                     "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n"
                     "<title>BORG BackUP GUI</title>\n"
                     "<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/css/bootstrap.min.css\">\n"
                     "<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css\">\n"
                     "<link rel=\"stylesheet\" href=\"css/material-design-iconic-font.min.css\">\n"
                     "<link rel=\"stylesheet\" href=\"css/jquery.circliful.css\">\n"
                     "<!--[if lt IE 9]>\n"
                     "<script src=\"https://oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js\"></script>\n"
                     "<script src=\"https://oss.maxcdn.com/respond/1.4.2/respond.min.js\"></script>\n"
                     "<![endif]-->\n"
                     "<link rel=\"https://fonts.googleapis.com/css?family=Space+Mono\">\n"
                     "<style>\nbody {\nfont-family: 'Space', Mono;\nfont-size: 12px;\n}\n.t {border-collapse:collapse;border-spacing:0;border-color:#999;}\n.t td{padding:8px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:#999;color:#444;background-color:#F7FDFA;}\n.t th{padding:8px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:#999;color:#fff;background-color:#26ADE4;}\n.t .ta{font-weight:bold;text-align:left;vertical-align:top}\n.t .tb{text-align:center;vertical-align:top}\n.t .tc{text-align:right;vertical-align:top}\n.t .td{font-weight:bold;text-align:right;vertical-align:top}\n.t .te{font-weight:bold;text-align:center;vertical-align:top}\n.t .tf{text-align:left;vertical-align:top}\n.t tr:hover td {background-color: #888888;color:#fff;}\n</style>\n"
                     "</head\n>"
                     "<body>\n"
                     "<center><div style=\"width:100%;\">\n"
                     "<div style=\"width:100%;\">"
                     "<table class=\"t\" style=\"width:100%;\"><tr><th class=\"te\"><B>" + BackUP_Name_RE + "</h1></th></tr></table>"
                     "<table style=\"width:100%;\"><tr>"
                     "<th><center><BR>Original Size</center><div style=\"width:192px;\" id=\"1\"></div></th>"
                     "<th><center><BR>Compressed Size</center><div style=\"width:192px;\" id=\"2\"></div></th>"
                     "<th><center><BR>Deduplicated Size</center><div style=\"width:192px;\" id=\"3\"></div></th>"
                     "</tr></table></div>"
                     "<script src=\"https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js\"></script>\n"
                     "<script src=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/js/bootstrap.min.js\"></script>\n"
                     "<script src=\"js/jquery.circliful.js\"></script>\n"
                     "<script>\n"
                     "$( document ).ready(function() {\n"
                     "$(\"#1\").circliful({\n"
                     "animationStep: 1,\n"
                     "foregroundBorderWidth: 5,\n"
                     "backgroundBorderWidth: 15,\n"
                     "percent: 100,\n"
                     "icon: 'f0a0',\n"
                     "iconPosition: 'middle',\n"
                     "text: '" + Read_BORG_json_Array_stats("total_size","",Borg_Info_OK) + "',\n"
                     "textBelow: true\n"
                     "});\n$(\"#2\").circliful({\n"
                     "animationStep: 2,\n"
                     "foregroundBorderWidth: 5,\n"
                     "backgroundBorderWidth: 15,\n"
                     "percent: "
                     + QString::number(Compression_values_Compressed) + ",\n"
                     "icon: 'f0a0',\n"
                     "iconPosition: 'middle',\n"
                     "text: '" + Read_BORG_json_Array_stats("total_csize","",Borg_Info_OK) + "',\n"
                     "textBelow: true\n"
                     "});"
                     "$(\"#3\").circliful({\n"
                     "animationStep: 1,\n"
                     "foregroundBorderWidth: 5,\n"
                     "backgroundBorderWidth: 15,\n"
                     "percent: "
                     + QString::number(Compression_values_Deduplicated) + ",\n"
                     "icon: 'f0a0',\n"
                     "iconPosition: 'middle',\n"
                     "text: '" + Read_BORG_json_Array_stats("unique_csize","",Borg_Info_OK) + "',\n"
                     "textBelow: true\n});\n});\n"
                     "</script>\n"
                     "<table style=\"width:100%;\" class=\"t\">\n<tr><th class=\"td\">Nr.</th><th class=\"te\">Name</th><th class=\"ta\">ID</th></tr>\n"
                     "<BR>\n" + json_LIST_html + "<BR>"
                     "</table>"
                     "<table style=\"width:100%;\" class=\"t\">\n"
                     "<tr><td>Location:</td><td>" + html_Location + "</td></tr>"
                     "<tr><td>Last Snapshot:</td><td>" + html_Last_modified + "</td></tr>"
                     "<tr><td>Encryption:</td><td>" + html_Encryption + "</td></tr>"
                     "<tr><td>Path:</td><td>" + html_Path + "</td></tr>"
                     "<tr><td>ID:</td><td>" + html_ID + "</td></tr>"
                     "</table>\n<BR>"
                     "</div></center>\n"
                     "</body>\n"
                     "</html>";
    QString export_HTML = PATH + "/export/html/" + BackUP_Name_RE + "-" + timestamp_Date_Time() + ".html";
    QFile a(export_HTML);
          a.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&a);
                out << html_Info_Page;
    a.close();
    QString link = export_HTML;
    QDesktopServices::openUrl(QUrl(link));
}

// Run an independent Borg Task so that the loading GIF can be played continuously.
void Worker::process(){
    if(Loadloop==1){
    system(qPrintable(SH + " " + PATH + "/profiles/" + BackUP_Name.replace("\"","") + ".PASSPHRASE"));
    Loadloop = 2;
    process();
    }
    emit finished();
}

// Loop function that checks whether Borg is finished with his work and refreshes the loading-GIF cycle.
void BORG_BackUP_GUI::Load_loop(){
    ui->wait->setGeometry(QRect(-30, 0, 1040, 640));
    ui->loading_GIF->setGeometry(400,200,200,200);
    ui->fade_t->setGeometry(-30,-10,1050,270);
    ui->fade_b->setGeometry(-30,350,1050,270);
    qApp->processEvents();
    if(Loadloop==1){
        if(run_once_Worker==0){
            QThread* thread = new QThread;
            Worker*  worker = new Worker();
            worker->moveToThread(thread);
            connect(thread, SIGNAL (started()),  worker, SLOT (process()));
            connect(worker, SIGNAL (finished()), thread, SLOT (quit()));
            connect(worker, SIGNAL (finished()), worker, SLOT (deleteLater()));
            connect(thread, SIGNAL (finished()), thread, SLOT (deleteLater()));
            thread->start();
            run_once_Worker = 1;
        }
        QDelay::msleep(10);
        Load_loop();
    }
    if(Loadloop==2){
               ui->wait->setGeometry(QRect(-30, -640, 1040, 640));
        ui->loading_GIF->setGeometry(400,-300,200,200);
             ui->fade_t->setGeometry(-1200,-10,1050,270);
             ui->fade_b->setGeometry(-1200,350,1050,270);
        Loadloop = 0;
        Info_List();
    }
}

// Run the main function to start a new Snapshot for the selected BackUP.
void BORG_BackUP_GUI::on_BackUP_NOW_clicked(){
    setDisabled(true);
    // Simple query with input field - normal and with confirmation query ask("Title","Text","verify/only_input");
    BackUP_Snapshot_Comment = "";
    BackUP_Snapshot_Comment = ask("BackUP Snapshot Comment","You can add a <b>Comment</b> to your <b>Snapshot</b>.","only_input");
    if(BackUP_Snapshot_Comment!="Cancel"){
        if(BackUP_Snapshot_Comment!=""){
            qputenv("BORG_Snapshot_Comment",qPrintable(BackUP_Snapshot_Comment));
        }
        run_once_Worker = 0;
        int a = ui->listWidget_in->count();
        show();
        if(a==0){
            ui->tabWidget->setCurrentIndex(1);
            INFO("The <b>BackUP List</b> is empty.<BR>"
                 "<BR>"
                 "In the <b>Selection Area</b>, you must make a selection as to which data is to be saved.<BR>"
                 "<BR>"
                 "Please do not forget to <b>Save</b> your data after you have made your selection.");
        }
        else{
            Loadbar  = 1;
            Loadloop = 1;
            Load_loop();
        }
    }
    setDisabled(false);
}

// When the Open Mount button is pressed, the granted file manager opens and displays the currently selected archive.
void BORG_BackUP_GUI::on_openMount_clicked(){
    system(qPrintable(File_Manager.toLower() + " " + BackUP_Mount_Path + " &"));}

// Executes the write_html_Page() function for the HTML info page.
void BORG_BackUP_GUI::on_html_clicked(){
    write_html_Page();}

// Inserts the selected archives and times into the crontab.
void BORG_BackUP_GUI::on_AddChange_clicked(){  
    if(ui->all_BackUPs_cron_job->count()==0){
        on_Remove_clicked();
    }
    else{
        on_AddChange("");
        ui->AddChange->setEnabled(false);
    }
}

// --- BEG --- Integration of a new or existing archive.
void BORG_BackUP_GUI::set_Archive(){
    QString a = ui->pathInfo_2->text(),
            b = QFileDialog::getExistingDirectory(this, tr("Select the BackUP directory"),Home_Path,
        QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    int c = b.length();
    if(c!=0){
        QFile   d(b+"/config");
        int     count                 = b.count(QLatin1Char('/'));
        QString section_Name          = b.section('/',count,count),
                exists_BackUP         = qPrintable(PATH + "/profiles/" + section_Name + ".PASSPHRASE"),
                exists_BackUP_removed = qPrintable(PATH + "/profiles/" + section_Name + ".removed");
        QFile   exists_BackUP_File(exists_BackUP),
                exists_BackUP_File_removed(exists_BackUP_removed);
        if(exists_BackUP_File.exists() || exists_BackUP_File_removed.exists()){
                 ui->Archive_Key->setDisabled(true);
            ui->Archive_Key_File->setDisabled(true);
            if(exists_BackUP_File.exists()){
                ERROR("This BackUP is already in the BORG BackUP GUI maintenance!");
            }
            if(exists_BackUP_File_removed.exists()){
                setDisabled(true);
                show();
                QPixmap logo(PATH+"/images/logo.svg");
                QMessageBox a2;
                            a2.setWindowTitle("Watch your step!");
                            a2.setIconPixmap(logo);
                            a2.setText("This archive has already been managed with<BR>"
                                       "BORG BackUP GUI, there is a *.removed file,<BR>"
                                       "do you want to use it?<BR>"
                                       "<BR>"
                                       "<b>Yes</b> use the old *.removed file.<BR>"
                                       "<BR>"
                                       "<b>No</b> cancel action<BR>"
                                       "<BR>"
                                       "<b>Save</b> create new archive configuration<BR>"
                                       "and delete the old *.removed file.");
                            a2.setStandardButtons(QMessageBox::Yes | QMessageBox::No | QMessageBox::Save);
                            a2.setDefaultButton(QMessageBox::No);
                            QSpacerItem* horizontalSpacer = new QSpacerItem(800, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
                            QGridLayout* layout = (QGridLayout*)a2.layout();
                            layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
                int     b2 = a2.exec();
                switch (b2){
                case QMessageBox::Yes:{
                    QString e = b;
                    int     f = e.count(QLatin1Char('/'));
                    QString g = e.section('/',f,f);
                         ui->pathInfo_3->setText(g);
                    QString h = e.replace(g,"");
                         ui->pathInfo_2->setText(h);
                         ui->Archive_Key->setEnabled(true);
                    ui->Archive_Key_File->setEnabled(true);
                    BackUP_Name = g;
                    QFile::rename(PATH+"/profiles/"+BackUP_Name+".removed", PATH+"/profiles/"+BackUP_Name+".PASSPHRASE");
                    read_all_Profiles();
                      ui->all_Profiles->setEnabled(true);
                    ui->add_NEW_BackUP->setEnabled(true);
                    setEnabled(true);
                }
                    break;
                case QMessageBox::Save:{
                    QString e = b;
                    int     f = e.count(QLatin1Char('/'));
                    QString g = e.section('/',f,f);
                         ui->pathInfo_3->setText(g);
                    QString h = e.replace(g,"");
                         ui->pathInfo_2->setText(h);
                         ui->Archive_Key->setEnabled(true);
                    ui->Archive_Key_File->setEnabled(true);
                    BackUP_Name = g;
                    QFile().remove(qPrintable(PATH+"/profiles/"+g+".removed"));
                       ui->frame_login->setGeometry(QRect(230, 110, 540, 80));
                         ui->tabWidget->setEnabled(false);
                        ui->label_pass->setAttribute(Qt::WA_TranslucentBackground);
                              ui->pass->setGeometry(QRect(30,20,400,42));
                           ui->pass_OK->setGeometry(QRect(450,20,70,40));
                    ui->login_black_BG->setGeometry(QRect(-20, 0, 1040, 910));
                              ui->pass->setFocus();
                    save_BackUP("new");
                    Main_Window();
                    read_all_Profiles();
                      ui->all_Profiles->setEnabled(true);
                    ui->add_NEW_BackUP->setEnabled(true);
                    setEnabled(true);
                }
                    break;
                case QMessageBox::No:
                    setEnabled(true);
                    break;
                default:
                    break;
                }
            }
        }
        else if (!d.exists()){
                ERROR("Not a Borg Archive!");
                     ui->Archive_Key->setDisabled(true);
                ui->Archive_Key_File->setDisabled(true);
        }
        else{
            QString e = b;
            int     f = e.count(QLatin1Char('/'));
            QString g = e.section('/',f,f);
                 ui->pathInfo_3->setText(g);
            QString h = e.replace(g,"");
                 ui->pathInfo_2->setText(h);
                 ui->Archive_Key->setEnabled(true);
            ui->Archive_Key_File->setEnabled(true);
            BackUP_Name = g;
               ui->frame_login->setGeometry(QRect(230, 110, 540, 80));
                 ui->tabWidget->setEnabled(false);
                ui->label_pass->setAttribute(Qt::WA_TranslucentBackground);
                      ui->pass->setGeometry(QRect(30,20,400,42));
                   ui->pass_OK->setGeometry(QRect(450,20,70,40));
            ui->login_black_BG->setGeometry(QRect(-20, 0, 1040, 910));
                      ui->pass->setFocus();
            save_BackUP("new");
            Main_Window();
            read_all_Profiles();
              ui->all_Profiles->setEnabled(true);
            ui->add_NEW_BackUP->setEnabled(true);
        }
    }
}
// --- END

// controls the input in the delete field for the delete control number
void BORG_BackUP_GUI::on_Re_Check_Delete_textChanged(){
    QString a = ui->Check_Delete->text(),
            b = ui->Re_Check_Delete->text();
    if(a == b && b != ""){
        ui->DELETE->setEnabled(true);
        ui->DELETE->setStyleSheet("background:#AA0000; color:#FFFFFF;");}
    else{
        ui->DELETE->setEnabled(false);
        ui->DELETE->setStyleSheet("");
    }
}

// --- BEG --- Cronjob weekday selection control
void BORG_BackUP_GUI::Weekday_Check(){
    int Weekday_Check = 0;
    if(ui->WD1->isChecked()){Weekday_Check = Weekday_Check + 1;}
    if(ui->WD2->isChecked()){Weekday_Check = Weekday_Check + 1;}
    if(ui->WD3->isChecked()){Weekday_Check = Weekday_Check + 1;}
    if(ui->WD4->isChecked()){Weekday_Check = Weekday_Check + 1;}
    if(ui->WD5->isChecked()){Weekday_Check = Weekday_Check + 1;}
    if(ui->WD6->isChecked()){Weekday_Check = Weekday_Check + 1;}
    if(ui->WD7->isChecked()){Weekday_Check = Weekday_Check + 1;}
    if(Weekday_Check > 0){
                          ui->HH->setEnabled(true);
                          ui->mm->setEnabled(true);
                      ui->Remove->setEnabled(true);
                   ui->AddChange->setEnabled(true);
                 ui->all_BackUPs->setEnabled(true);
        ui->all_BackUPs_cron_job->setEnabled(true);
    }
    else{
        ui->AddChange->setEnabled(false);
               ui->HH->setEnabled(false);
               ui->mm->setEnabled(false);
        if(Crontab_OK==""){
                         ui->Remove->setEnabled(false);
                    ui->all_BackUPs->setEnabled(false);
           ui->all_BackUPs_cron_job->setEnabled(false);
        }
    }
}
void BORG_BackUP_GUI::on_WD1_stateChanged(){
    Weekday_Check();}

void BORG_BackUP_GUI::on_WD2_stateChanged(){
    Weekday_Check();}

void BORG_BackUP_GUI::on_WD3_stateChanged(){
    Weekday_Check();}

void BORG_BackUP_GUI::on_WD4_stateChanged(){
    Weekday_Check();}

void BORG_BackUP_GUI::on_WD5_stateChanged(){
    Weekday_Check();}

void BORG_BackUP_GUI::on_WD6_stateChanged(){
    Weekday_Check();}

void BORG_BackUP_GUI::on_WD7_stateChanged(){
    Weekday_Check();}
// --- END

// Allows you to select a folder for mounting the selected BackUP.
void BORG_BackUP_GUI::on_Open_Mount_Folder_clicked(){
    QString a = ui->pathInfo_4->text(),
            b = QFileDialog::getExistingDirectory(this, tr("Select the Mount directory"),
            Home_Path,
            QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    int c = b.length();
    if(c!=0){
    ui->pathInfo_4->setText(b);
    }
}

// BEG Configuration - read - set & save –––––––––––––––––––––––––––––––––––––
// ––– BackUP Name Check
void BORG_BackUP_GUI::on_pathInfo_3_textChanged(){}

// --- Remove all item entries
void BORG_BackUP_GUI::Compression_Type_Value_remove_Items(){
    ui->Compression_Type_Value->clear();
}

// Compression: create a string for the compression.
void BORG_BackUP_GUI::Compression_Build_String(){
    QString a = ui->Status->currentText(),
            b = ui->Compression_none_auto->currentText(),
            c = ui->Compression_Type->currentText(),
            d = ui->Compression_Type_Value->currentText(),
            e,f,g,h;
    if(a=="on"){e = Compression_Status + " ";}
    else{e = "";}
    if(b=="auto"){f = "auto,";}
    else{f = "";}
    if(c=="none"){g = "";}
    else{g = Compression_Compression + " " + f + c;}
    if(d!=""){h = ","+d;}
    else{h = "";}
    ui->test_Pack->setText(e + g + h + " ");
}

// Compression: heuristic off or on
void BORG_BackUP_GUI::on_Compression_none_auto_currentIndexChanged(const QString a){
    QString b = ui->Compression_Type->currentText();
    if(a=="auto"){
        if(b=="none"){
            ui->Compression_Type->setCurrentIndex(1);
        }
    }
    Compression_Build_String();
}
// Compression: create and insert different ratio values
void BORG_BackUP_GUI::on_Compression_Type_currentIndexChanged(const int a){
    if(a==0){
        ui->Compression_none_auto->setCurrentIndex(0);
    }
    switch (a){
    case 0:{
        Compression_Type_Value_remove_Items();
        break;
    }
    case 1:{
        Compression_Type_Value_remove_Items();
        break;
    }
    case 2:{
        Compression_Type_Value_remove_Items();
        ui->Compression_Type_Value->setDisabled(false);
        QStringList list=(QStringList()<<"1"<<"2"<<"3"<<"4"<<"5"<<"6"<<"7"<<"8"<<"9"<<"10"<<"11"<<"12"<<"13"<<"14"<<"15"<<"16"<<"17"<<"18"<<"19"<<"20"<<"21"<<"22");
        ui->Compression_Type_Value->addItems(list);
        ui->Compression_Type_Value->setEnabled(true);
        break;
    }
    case 3:{
        Compression_Type_Value_remove_Items();
        ui->Compression_Type_Value->setDisabled(false);
        QStringList list=(QStringList()<<"0"<<"1"<<"2"<<"3"<<"4"<<"5"<<"6"<<"7"<<"8"<<"9");
        ui->Compression_Type_Value->addItems(list);
        ui->Compression_Type_Value->setEnabled(true);
        break;
    }
    case 4:{
        Compression_Type_Value_remove_Items();
        ui->Compression_Type_Value->setDisabled(false);
        QStringList list=(QStringList()<<"0"<<"1"<<"2"<<"3"<<"4"<<"5"<<"6"<<"7"<<"8"<<"9");
        ui->Compression_Type_Value->addItems(list);
        ui->Compression_Type_Value->setEnabled(true);
        break;
    }
    default:
      break;
    }
    Compression_Build_String();
}

// Compression: create and insert different ratio values
void BORG_BackUP_GUI::on_Compression_Type_Value_currentIndexChanged(QString a){
    a = "";
    Compression_Build_String();
}

// Compression: status on or off
void BORG_BackUP_GUI::on_Status_currentIndexChanged(const QString a){
    QString b = a;
    Compression_Build_String();
}
// END Configuration - read - set & save –––––––––––––––––––––––––––––––––––––

// BEG Build a Keyfile –––––––––––––––––––––––––––––––––––––––––––––––––––––––
void BORG_BackUP_GUI::Random_Key_Base64(int x, int y){
    ui->progressBar_4->setValue(10);
    QString time_a = timestamp_Date_Time();
            time_a.replace(".",",").replace("-",",").replace(":",",").replace("0","");
    int     time_b = time_a.section(',',1,1).toInt(),
            time_c = time_a.section(',',2,2).toInt(),
            time_d = time_a.section(',',3,3).toInt(),
            time_e = time_a.section(',',4,4).toInt(),
            time_f = time_a.section(',',5,5).toInt(),
            time_g = time_a.section(',',6,6).toInt(),
            time_h = time_b+time_c+time_d+time_e+time_f+time_g;
            QDelay::msleep(827);
            ui->progressBar_4->setValue(15);
    int     time_i = time_b+time_c+time_d+time_e+time_f+time_g;
            QDelay::msleep(324);
            ui->progressBar_4->setValue(20);
    int     time_j = time_b+time_c+time_d+time_e+time_f+time_g,
            time_k = time_h+time_i+time_j+time_h+time_i+time_i;
    QDelay::msleep(224);
    ui->progressBar_4->setValue(25);
    QTime time = QTime::currentTime();
    QDelay::msleep(124);
    ui->progressBar_4->setValue(30);
    QString ss = time.toString("ss");
    QDelay::msleep(224);
    ui->progressBar_4->setValue(35);
    int a = ss.toInt()+1,
        b = ss.toInt()+1,
        c = a * b,
        d = 4681 - c + time_k;
    QDelay::msleep(252);
    ui->progressBar_4->setValue(40);
    QString e = QString::number(d);
    int size = x,
        loop = y;
    QDelay::msleep(518);
    ui->progressBar_4->setValue(45);
    QString sf,
            final = "";
    for (int i = 0; i < loop; ++i) {
    QString s;
        for (int i = 0; i < d; ++i){
            static const char alnum[] = "AQgwBRhxCSiyDTjzEU+k0FVl1GWm2HX/n3IYo4JZp5Kaq6Lbr7Mcs8Ndt9OeuPfv";
            for (int i = 0; i < size; ++i) {
                s[i] = alnum[qrand() % (sizeof(alnum) - 1)];
            }
            s[size] = 0;
        }
    sf = sf + s;
    }
    ui->progressBar_4->setValue(50);
    QDelay::msleep(124);
    int lline = 76,
        lines = QString::number(sf.toUtf8().toBase64().length()).toInt()/lline,
        fullL = lline * lines,
        Div_L = QString::number(sf.toUtf8().toBase64().length()).toInt()-fullL,
           cl = 0;
    ui->progressBar_4->setValue(60);
    QDelay::msleep(189);
    ui->progressBar_4->setValue(70);
    for (int i = lline; i < fullL; i = i+lline){
         final = final + sf.toUtf8().toBase64().mid(cl,76)+"\n";
            cl = cl+lline;
    }
    QDelay::msleep(161);
    ui->progressBar_4->setValue(80);
    if(Div_L>0){
        final = final + sf.toUtf8().toBase64().mid(fullL,76)+"\n";
    }
    Random_Key_Base64_final = final;
    QDelay::msleep(159);
    ui->progressBar_4->setValue(90);
    QDelay::msleep(166);
    ui->progressBar_4->setValue(100);
}

// Archive Key: create a key with selected excess length!
void BORG_BackUP_GUI::create_Archive_Key_length(){
    QString a =      ui->Archive_Key->text(),
            b = ui->Archive_Key_File->currentText(),
            c = "",
         Name = ui->new_Archive_Name->text();
    if(a=="" && b!="none"){
        if(b=="1024++"){
            Random_Key_Base64(33,33);
            c = Random_Key_Base64_final;
        }
        if(b=="2048++"){
            Random_Key_Base64(46,46);
            c = Random_Key_Base64_final;
        }
        if(b=="4096++"){
            Random_Key_Base64(65,65);
            c = Random_Key_Base64_final;
        }
        if(b=="8192++"){
            Random_Key_Base64(91,91);
            c = Random_Key_Base64_final;
        }
        if(Name!=""){
            QFile d(PATH + "/profiles/." + Name.replace("\"","") + ".key");
                  d.open(QIODevice::WriteOnly | QIODevice::Text);
            QTextStream out(&d);
                        out << c;
            d.close();
        }
    }
    else{
        c = a + "\n";
        if(Name!=""){
        QFile d(PATH + "/profiles/." + Name.replace("\"","") + ".key");
              d.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream out(&d);
                    out << c;
        d.close();
        }
    }
    QDelay::msleep(324);
      ui->progressBar_4->setValue(0);
    QPixmap Lck1_Icon(PATH+"/images/locked.png");
    QIcon   Icon_Lck1(Lck1_Icon);
         ui->Archive_Key->setEnabled(false);
    ui->Archive_Key_File->setEnabled(false);
}


// Archive Key: activate or deactivate activities of the different options when entering the password.
void BORG_BackUP_GUI::Archive_Key_Changed(){
    QString a =      ui->Archive_Key->text(),
            b = ui->Archive_Key_File->currentText();
    if(a!=""){
        ui->Archive_Key_File->setDisabled(true);
    }
    else{
         ui->Archive_Key_File->setEnabled(true);
    }
    if(b!="none"){
        ui->Archive_Key->setDisabled(true);
    }
    else{
         ui->Archive_Key->setEnabled(true);
    }
    if(a!="" || b!="none"){
        ui->Create->setEnabled(true);
    }
    else{
        ui->Create->setDisabled(true);
    }
}

// Archive Key: call Archive_Key_Changed() for changes in the text field. QString b = a currently unused!
void BORG_BackUP_GUI::on_Archive_Key_textChanged(const QString a){
    QString b = a;
    Archive_Key_Changed();
}

// Archive Key: call Archive_Key_Changed() for changes in the key selection. QString b = a currently unused!
void BORG_BackUP_GUI::on_Archive_Key_File_currentTextChanged(const QString a){
    QString b = a;
    Archive_Key_Changed();
}
// END Build a Keyfile –––––––––––––––––––––––––––––––––––––––––––––––––––––––

// BEG Passphrase query when a password is needed but it was not set via EXPORT before.
void BORG_BackUP_GUI::on_pass_OK_clicked(){
    QString lineABC;
    if(BackUP_Name!=""){
        QFile read_Key(PATH + "/profiles/." + BackUP_Name + ".key");
        if(read_Key.exists()){
            QFile fileA(PATH + "/profiles/." + BackUP_Name + ".key");
            if (!fileA.open(QIODevice::ReadOnly | QIODevice::Text))
                return;
            QTextStream inA(&fileA);
            do{
                lineABC = inA.readLine();
            }
            while (!lineABC.isNull());
        }
        else{
            // LFB
        }
    }
             ui->textINFO->setText("Loading DATA please wait...");
       ui->add_NEW_BackUP->hide();
         ui->all_Profiles->setGeometry(QRect(-20, -940, 1040, 810));
    ui->label_pass_EXPORT->setGeometry(QRect(0, -70, 440, 40));
    Main_Window();
    Build_Dir_File();
    if(PW_count==1){
        ui->frame_login_info->setGeometry(QRect(10, 10, 430, 60));
        qApp->processEvents();
        PW_count = 0;
    }
// Query what is set and how it is needed.
    if(get_env!=""){
        qputenv("BORG_PASSPHRASE", qPrintable(get_env));
                     ui->pass->setGeometry(QRect(0, -100, 100, 100));
               ui->label_pass->setGeometry(QRect(0, -100, 100, 100));
        ui->label_pass_EXPORT->setGeometry(QRect(0, 20, 440, 40));
    }
    else{
        qputenv("BORG_PASSPHRASE", qPrintable(ui->pass->text()));
    }
    Check_Borg_Archive(BackUP_Path.replace("\"","")+BackUP_Name.replace("\"",""));
// Is executed if the archive exists and no error (borg info call) is issued.
    if (check_Archive_OK.contains("Repository ID", Qt::CaseSensitive)){
          ui->add_NEW_BackUP->hide();
            ui->all_Profiles->setGeometry(QRect(-20, -940, 1040, 810));
        ui->frame_login_info->setGeometry(QRect(20, -100, 410, 60));
                 ui->loading->setGeometry(QRect(-10, -230, 940, 180));
             ui->frame_login->setGeometry(QRect(-10, -560, 980, 440));
           ui->frame_login_2->setGeometry(QRect(-10, -560, 980, 440));
          ui->login_black_BG->setGeometry(QRect(-20, -940, 1040, 910));
               ui->tabWidget->setEnabled(true);
                    ui->pass->setText("");
        ERROR_count = 0;
        Main_Window();
    }
// If executed, there should be an error when executing "borg info" for the archive.
    if (check_Archive_ERROR.contains("incorrect", Qt::CaseSensitive) || check_Archive_ERROR.contains("error", Qt::CaseSensitive)){
        ui->add_NEW_BackUP->show();
        ui->login_black_BG->setGeometry(QRect(-20, 0, 1040, 910));
          ui->all_Profiles->setGeometry(QRect(230, 180, 540, 260));
              ui->textINFO->setText("");
                  ui->pass->setText("");
        if(ERROR_count!=0){
            ui->frame_login_2->setGeometry(QRect(230, 72, 270, 40));
                    ui->ERROR->setText("ERROR: #" + QString::number(ERROR_count));
        }
        if(ERROR_count==3){
            ui->ERROR->setText("Last chance!");
        }
        if(ERROR_count==4){
            EXIT();
        }
        ui->pass->setFocus();
        ++ERROR_count;
        ++PW_count;
        Main_Window();
        ui->frame_login_info->setGeometry(QRect(20, -100, 410, 60));
    }
}

// If return was pressed in the passphrase input, the OK header function is executed.
void BORG_BackUP_GUI::on_pass_returnPressed(){
    on_pass_OK_clicked();}
// END Passphrase –––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––

// Check passphrase entry
void BORG_BackUP_GUI::on_pass_textChanged(const QString a){
    if(a!=""){
        ui->label_pass->setGeometry(QRect(20, -50, 380, 40));
           ui->pass_OK->setEnabled(true);
    }
    else{
        ui->label_pass->setGeometry(QRect(30, 20, 380, 40));
           ui->pass_OK->setEnabled(false);
    }
}

// BEG Selection Area – for inserting folders and data for the BackUP list.
// an exclusion list as well as an extended list for excluding data is also available.
void BORG_BackUP_GUI::Build_Dir_File(){
    if(run_later_Build_Dir_File > 1){
        QPixmap Icon1(PATH+"/images/dir.png"),
                Icon2(PATH+"/images/file.png");
        QIcon    Dir(Icon1),
                File(Icon2);
        if(exclude_Caches == 1){
            ui->Exclude_Caches->setChecked(true);
        }
        else{
            ui->Exclude_Caches->setChecked(false);
        }
        if(exclude_System == 1){
            ui->Exclude_System->setChecked(true);
        }
        else{
            ui->Exclude_System->setChecked(false);
        }
         ui->listWidget_in->clear();
        ui->listWidget_out->clear();
        int a =   Selection_IN_Dir.count(QLatin1Char(',')),
            b =  Selection_IN_File.count(QLatin1Char(',')),
            c =  Selection_OUT_Dir.count(QLatin1Char(',')),
            d = Selection_OUT_File.count(QLatin1Char(','));
        for (int i = 0; i < a; ++i){
            QString a = Selection_IN_Dir.section(',',i+1,i+1),
                    b = a.replace("\"","");
            int c = b.count();
            if(c > 1){
                ui->listWidget_in->addItem(new QListWidgetItem(QIcon(Dir),b.replace("\\"," ")));
            }
        }
        for (int i = 0; i < b; ++i){
            QString a = Selection_IN_File.section(',',i+1,i+1),
                    b = a.replace("\"","");
            int c = b.count();
            if(c > 1){
                ui->listWidget_in->addItem(new QListWidgetItem(QIcon(File),b.replace("\\"," ")));
            }
        }
        for (int i = 0; i < c; ++i){
            QString a = Selection_OUT_Dir.section(',',i+1,i+1),
                    b = a.replace("\"","");
            int c = b.count();
            if(c > 1){
                ui->listWidget_out->addItem(new QListWidgetItem(QIcon(Dir),b.replace("\\"," ")));
            }
        }
        for (int i = 0; i < d; ++i){
            QString a = Selection_OUT_File.section(',',i+1,i+1),
                    b = a.replace("\"","");
            int c = b.count();
            if(c > 1){
                ui->listWidget_out->addItem(new QListWidgetItem(QIcon(File),b.replace("\\"," ")));
            }
        }
    }
    ++run_later_Build_Dir_File;
}

// Selection Area: Adds directory to the backup list.
void BORG_BackUP_GUI::on_Add_Dir_IN_clicked(){
    Changes_in_Areas = 1;
    QString a = QFileDialog::getExistingDirectory(this, tr("Select a directory for the BackUP."),Home_Path,QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    int b = a.length();
    if(a.count(QLatin1Char(',')) || a.count(QLatin1Char('"'))){
        INFO("There is a > , < or a > \" < or a > < (comma or apostrophe or space character) in the folder name. Folders with such special characters in the name lead to unwanted errors in BackUP and archiving.");
    }
    else{
        if (Selection_IN_Dir.contains(a, Qt::CaseSensitive) || Selection_OUT_Dir.contains(a, Qt::CaseSensitive)){
            if (Selection_IN_Dir.contains(a, Qt::CaseSensitive) && b!=0){
                INFO("A folder with this name is already in the BackUP list.");
            }
            if (Selection_OUT_Dir.contains(a, Qt::CaseSensitive) && b!=0){
                INFO("A folder with this name is also in the ignore list for the BackUP.");
            }
        }
        else {
            if(b!=0){
                Selection_IN_Dir = Selection_IN_Dir + ",\"" + a.replace(" ","\\") + "/\"";

                Build_Dir_File();
            }
        }
    }
}

// Selection Area: Removes the directory from the backup list.
void BORG_BackUP_GUI::on_Add_Dir_OUT_clicked(){
    Changes_in_Areas = 1;
    QString a = QFileDialog::getExistingDirectory(this, tr("Select a directory for the BackUP."),Home_Path,QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    int b = a.length();
    if(a.count(QLatin1Char(',')) || a.count(QLatin1Char('"'))){
        INFO("There is a > , < or a > \" < or a > <(comma or apostrophe or a space character) in the folder name. Folders with such special characters in the name lead to unwanted errors in BackUP and archiving.");
    }
    else{
        if (Selection_OUT_Dir.contains(a, Qt::CaseSensitive) || Selection_IN_Dir.contains(a, Qt::CaseSensitive)){
            if (Selection_OUT_Dir.contains(a, Qt::CaseSensitive) && b!=0){
                INFO("A folder with this name is already in the BackUP list.");
            }
            if (Selection_IN_Dir.contains(a, Qt::CaseSensitive) && b!=0){
                INFO("A folder with this name is also in the BackUP list.");
            }
        }
        else {
            if(b!=0){
                Selection_OUT_Dir = Selection_OUT_Dir + ",\"" + a.replace(" ","\\") + "/\"";
                Build_Dir_File();
            }
        }
    }
}

// Selection Area: Adds files to the backup list.
void BORG_BackUP_GUI::on_Add_File_IN_clicked(){
    Changes_in_Areas = 1;
    QString a =QFileDialog::getOpenFileName(this,tr("Select a file for the BackUP."),Home_Path);
    int b = a.length();
    if(a.count(QLatin1Char(',')) || a.count(QLatin1Char('"'))){
        INFO("There is a > , < or a > \" < or a > < (comma or apostrophe or space character) in the file name. Data with such special characters in the name leads to unwanted errors in BackUP and archiving.");
    }
    else{
        if (Selection_IN_File.contains(a, Qt::CaseSensitive) || Selection_OUT_File.contains(a, Qt::CaseSensitive)){
            if (Selection_IN_File.contains(a, Qt::CaseSensitive) && b!=0){
                INFO("A file with this name is already in the BackUP list.");
            }
            if (Selection_OUT_File.contains(a, Qt::CaseSensitive) && b!=0){
                INFO("A File with this name is also in the ignore list for the BackUP.");
            }
        }
        else {
            if(b!=0){
                Selection_IN_File = Selection_IN_File + ",\"" + a.replace(" ","\\") + "\"";
                Build_Dir_File();
            }
        }
    }
}

// Selection Area: Removes the files from the backup list.
void BORG_BackUP_GUI::on_Add_File_OUT_clicked(){
    Changes_in_Areas = 1;
    QString a =QFileDialog::getOpenFileName(this,tr("Select a file for the BackUP."),Home_Path);
    int b = a.length();
    if(a.count(QLatin1Char(',')) || a.count(QLatin1Char('"'))){
        INFO("There is a > , < or a > \" < or a > < (comma or apostrophe or space character) in the file name. Data with such special characters in the name leads to unwanted errors in BackUP and archiving.");
    }
    else{
        if (Selection_OUT_File.contains(a, Qt::CaseSensitive) || Selection_IN_File.contains(a, Qt::CaseSensitive)){
            if (Selection_OUT_File.contains(a, Qt::CaseSensitive) && b!=0){
                INFO("A File with this name is also in the ignore list for the BackUP.");
            }
            if (Selection_IN_File.contains(a, Qt::CaseSensitive) && b!=0){
                INFO("A file with this name is already in the BackUP list.");
            }
        }
        else {
            if(b!=0){
                Selection_OUT_File = Selection_OUT_File + ",\"" + a.replace(" ","\\") + "\"";
                Build_Dir_File();
            }
        }
    }
}

// Selection Area: Removing selected data from the BackUP.
void BORG_BackUP_GUI::on_Remove_IN_clicked(){
    Changes_in_Areas = 1;
    int  a = ui->listWidget_in->currentRow();
    if(a!=-1){
        QString b = ui->listWidget_in->item(a)->text();
        if (Selection_IN_Dir.contains(b.replace(" ","\\"), Qt::CaseSensitive)){
            QString c = qPrintable(",\"" + b + "\"");
            Selection_IN_Dir.replace(c, "");
        }
        if (Selection_IN_File.contains(b.replace(" ","\\"), Qt::CaseSensitive)){
            QString c = qPrintable(",\"" + b + "\"");
            Selection_IN_File.replace(c, "");
        }
        Build_Dir_File();
    }
    ui->Remove_IN->setEnabled(false);
    ++Changes_in_Areas;
}

// Selection Area: Remove selected data from BackUP ignore area.
void BORG_BackUP_GUI::on_Remove_OUT_clicked(){
    Changes_in_Areas = 1;
    int  a = ui->listWidget_out->currentRow();
    if(a!=-1){
        QString b = ui->listWidget_out->item(a)->text();
        if (Selection_OUT_Dir.contains(b.replace(" ","\\"), Qt::CaseSensitive)){
            QString c = qPrintable(",\"" + b + "\"");
            Selection_OUT_Dir.replace(c, "");
        }
        if (Selection_OUT_File.contains(b.replace(" ","\\"), Qt::CaseSensitive)){
            QString c = qPrintable(",\"" + b + "\"");
            Selection_OUT_File.replace(c, "");
        }
        Build_Dir_File();
    }
    ui->Remove_OUT->setEnabled(false);
    ++Changes_in_Areas;
}

// Selection Area: Updating the IN list.
void BORG_BackUP_GUI::on_listWidget_in_itemClicked(){
    ui->Remove_IN->setEnabled(true);}

// Selection Area: Updating the OUT list.
void BORG_BackUP_GUI::on_listWidget_out_itemClicked(){
    ui->Remove_OUT->setEnabled(true);}

// Read BackUP Dirs and Files
void BORG_BackUP_GUI::read_Dir_File(QString a, QString ai){
    if(run_once_read_Dir_File!=3){  // Requires 3 loops for end fields
        int b = a.count(QLatin1Char(' '));
        for (int i = -1; i < b; ++i){
            QString c = a.section(' ',i+1,i+1);
            QString d = ",\"" + c + "\"";
            if (d.contains("/\"", Qt::CaseSensitive)){
                Selection_IN_Dir = Selection_IN_Dir + d;
            }
            else{
                Selection_IN_File = Selection_IN_File + d;
            }
        }
        int bi = ai.count(QLatin1Char(' '));
        for (int i = -1; i < bi; ++i){
            QString ci = ai.section(' ',i+1,i+1);
            QString di = ",\"" + ci + "\"";
            if (di.contains("/\"", Qt::CaseSensitive)){
                Selection_OUT_Dir = Selection_OUT_Dir + di;
            }
            else{
                Selection_OUT_File = Selection_OUT_File + di;
            }
        }
        ++run_once_read_Dir_File;
        Build_Dir_File();
        if(QFileInfo(PATH + "/profiles/" + BackUP_Name.replace("\"","") + ".PASSPHRASE").exists()){
            QFile fileA(PATH + "/profiles/" + BackUP_Name.replace("\"","") + ".PASSPHRASE");
            if (!fileA.open(QIODevice::ReadOnly | QIODevice::Text))
                return;
            QTextStream inA(&fileA);
            QString lineA;
            do{
                lineA = inA.readLine();
                if (lineA.contains("--exclude-caches", Qt::CaseSensitive)){
                      ui->Exclude_Caches->setChecked(1);
                    }
                if (lineA.contains("/home/*/.cache/*/ /var/cache/*/ /var/tmp/*/", Qt::CaseSensitive)){
                      ui->Exclude_System->setChecked(1);
                    }
            }
            while (!lineA.isNull());
        }
    }
}

// Selection Area: Save
void BORG_BackUP_GUI::on_Save_clicked(){
    save_BackUP("");
           ui->Unlocked->setGeometry(QRect(-20, 0, 1020, 630));
     ui->listWidget_in->setEnabled(false);
    ui->listWidget_out->setEnabled(false);
        ui->Add_Dir_IN->setEnabled(false);
       ui->Add_Dir_OUT->setEnabled(false);
       ui->Add_File_IN->setEnabled(false);
      ui->Add_File_OUT->setEnabled(false);
         ui->Remove_IN->setEnabled(false);
        ui->Remove_OUT->setEnabled(false);
    ui->Exclude_Caches->setEnabled(false);
    ui->Exclude_System->setEnabled(false);
              ui->Save->setEnabled(false);
}

// Selection Area: Unlock the Selection Area with security prompt.
void BORG_BackUP_GUI::on_Unlocked_Selecton_clicked(){
    setDisabled(true);
    show();
    QPixmap c(PATH+"/images/logo.svg");
    QMessageBox a;
                a.setWindowTitle("Watch your step!");
                a.setIconPixmap(c);
                a.setText("<b>Consider exactly</b><BR>"
                          "which data you want to save or exclude.<BR>"
                          "<BR>"
                          "To think about this in advance can not only spare your nerves but also save a lot of money and trouble. ");
                QSpacerItem* horizontalSpacer = new QSpacerItem(800, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
                QGridLayout* layout = (QGridLayout*)a.layout();
                layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
                a.setStandardButtons(QMessageBox::Ok | QMessageBox::Abort | QMessageBox::Help);
                a.setDefaultButton(QMessageBox::No);
    int     b = a.exec();
    switch (b){
    case QMessageBox::Ok:{
               ui->Unlocked->setGeometry(QRect(-20, -700, 1020, 630));
         ui->listWidget_in->setEnabled(true);
        ui->listWidget_out->setEnabled(true);
            ui->Add_Dir_IN->setEnabled(true);
           ui->Add_Dir_OUT->setEnabled(true);
           ui->Add_File_IN->setEnabled(true);
          ui->Add_File_OUT->setEnabled(true);
        ui->Exclude_Caches->setEnabled(true);
        ui->Exclude_System->setEnabled(true);
                  ui->Save->setEnabled(true);
        setEnabled(true);
    }
        break;
    case QMessageBox::Help:{
        QDesktopServices::openUrl(QUrl(QString("https://github.com/MTrage/Borg-BackUP-GUI/wiki/Short-instruction")));
        setEnabled(true);
    }
        break;
    case QMessageBox::Abort:
        setEnabled(true);
        break;
    default:
        break;
    }
}

// Selection Area: Predefined unwanted system data which should be ignored in BackUP.
void BORG_BackUP_GUI::on_Exclude_System_stateChanged(int a){
    QString b = "/home/*/.cache/*",
            c = "/var/cache/*",
            d = "/var/tmp/*";
    int e = ui->Exclude_Caches->checkState();
// BEG Avoids a double entry by setting the values at the first load and setting the values in the GUI.
    Selection_OUT_Dir = Selection_OUT_Dir.replace(",\"" + b.replace(" ","\\") + "/\"","");
    Selection_OUT_Dir = Selection_OUT_Dir.replace(",\"" + c.replace(" ","\\") + "/\"","");
    Selection_OUT_Dir = Selection_OUT_Dir.replace(",\"" + d.replace(" ","\\") + "/\"","");
// END
    if(a == 2){
        Selection_OUT_Dir = Selection_OUT_Dir + ",\"" + b.replace(" ","\\") + "/\"";
        Selection_OUT_Dir = Selection_OUT_Dir + ",\"" + c.replace(" ","\\") + "/\"";
        Selection_OUT_Dir = Selection_OUT_Dir + ",\"" + d.replace(" ","\\") + "/\"";
        Build_Dir_File();
        ui->Exclude_System->setChecked(true);
    }
    if(a == 0){
        Selection_OUT_Dir = Selection_OUT_Dir.replace(",\"" + b.replace(" ","\\") + "/\"","");
        Selection_OUT_Dir = Selection_OUT_Dir.replace(",\"" + c.replace(" ","\\") + "/\"","");
        Selection_OUT_Dir = Selection_OUT_Dir.replace(",\"" + d.replace(" ","\\") + "/\"","");
        Build_Dir_File();
        ui->Exclude_System->setChecked(false);
    }
    if(e==0){
        ui->Exclude_Caches->setChecked(false);
    }
    else{
        ui->Exclude_Caches->setChecked(true);
    }
}

// !!! Save all sacred values - then also the golden lucky pig laughs again !!!
void BORG_BackUP_GUI::save_BackUP(QString mode){
    QString BackUP_A =      ui->pathInfo_3->text(),
            BackUP_B =      ui->pathInfo_2->text();
    if(mode=="new" || mode=="init"){
            BackUP_A = ui->new_Archive_Name->text();
            BackUP_B = ui->new_Archive_Path->text()+"/";
    }
    QString BackUP = "BackUP_Name=\"" + BackUP_A + "\"\nBackUP_Path=\"" + BackUP_B +"\"\n",
            Compression    = " " + ui->test_Pack->text(),
            Compression_PR =       ui->test_Pack->text(),
            Compression_RE = Compression_PR.replace("\" \"","");
// mode=="new": Default values for new backups that should still be configured by the user!
    if(mode=="new" || mode=="init"){
        Compression_RE = "-C auto,lz4";
    }
    QString BackUP_Parameters = "BackUP_Parameters=\"" + Compression_RE + "\"\n",
            Mount_Path        = "BackUP_Mount_Path=\"" + ui->pathInfo_4->text() + "\"\n",
            File_Managers     = "File_Manager=\"" + ui->avaiable_File_Managers->currentText() + "\"\n";
    if(ui->pathInfo_4->text()==""){
        Mount_Path = "BackUP_Mount_Path=\"" + PATH + "/mount/\"\n";
    }
// BEG Find an existing File Manager in the system and set it as default for opening the mounted BackUP.
    if(ui->avaiable_File_Managers->currentText()==""){
        check_File_Managers(Search_File_Managers);
        if(Search_File_Managers!=""){
            QString a;
            int c = Search_File_Managers.count(",");
            for (int i = 0; i < c+1; ++i) {
                a = Search_File_Managers.section(',',i,i);
                if(a==File_Manager){
                }
            }
        }
        QString first_FM;
        if(File_Managers_in_System!=""){
            QString a;
            static int found_FM = 0;
            int c = File_Managers_in_System.count(",");
            for (int i = 0; i < c+1; ++i) {
                a = File_Managers_in_System.section(',',i,i);
                if     (found_FM==0 && a=="Nemo"){
                    first_FM = a; ++found_FM;
                }
                else if(found_FM==0 && a=="Caja"){
                    first_FM = a; ++found_FM;
                }
                else if(found_FM==0 && a=="Thunar"){
                    first_FM = a; ++found_FM;
                }
                else if(found_FM==0 && a=="Dolphin"){
                    first_FM = a; ++found_FM;
                }
                else if(found_FM==0 && a=="Nautilus"){
                    first_FM = a; ++found_FM;
                }
                else if(found_FM==0 && a=="PCManFM"){
                    first_FM = a; ++found_FM;
                }
                else if(found_FM==0 && a=="SpaceFM"){
                    first_FM = a; ++found_FM;
                }
                else if(found_FM==0 && a=="Krusader"){
                    first_FM = a; ++found_FM;
                }
                else if(found_FM==0 && a=="Konqueror"){
                    first_FM = a; ++found_FM;
                }
            }
        }
        File_Managers     = "File_Manager=\"" + first_FM + "\"\n";
    }
// END -------------------------------------------------------------------------------------------------
    QString Dir_IN   = Selection_IN_Dir,
            File_IN  = Selection_IN_File,
            Data_IN  = Dir_IN + File_IN;
            Data_IN.replace("\",\""," ").replace(",\"","BackUP_DATA=\"");
            Data_IN  = Data_IN + "\n";
    QString Dir_OUT  = Selection_OUT_Dir,
            File_OUT = Selection_OUT_File,
            Data_OUT = Dir_OUT + File_OUT;
            Data_OUT.replace("\",\""," ").replace(",\"","BackUP_IGNORE=\"");
            Data_OUT = Data_OUT + "\n";
// mode=="new": Default values for new backups that should still be configured by the user!
    if(mode=="new" || mode=="init"){
        Data_IN  = "BackUP_DATA=\"\"\n";
        Data_OUT = "BackUP_IGNORE=\"\"\n";
    }
    Data_IN.replace("  "," ").replace("   "," ").replace("  "," ");
    Data_OUT.replace("  "," ").replace("   "," ").replace("  "," ");
    QString a = Selection_IN_Dir;
            a.replace("\\"," ").replace("\",\"","' \\\n'").replace(",\"","'").replace("/\"","/'");
    QString b = Selection_IN_File;
            b.replace("\\"," ").replace(",\"\"","").replace("\",\"","' \\\n'").replace(",\"","'").replace("\"","'");
    QString k = "",
            n = "";
    int count_OUT_Dir  = Selection_OUT_Dir.count(QLatin1Char(',')),
        count_OUT_File = Selection_OUT_File.count(QLatin1Char(','));
    int i1 = 0;
    while (i1 < count_OUT_Dir+1){
        QString out = Selection_OUT_Dir.section(',',i1,i1);
        out.replace("\\"," ").replace("\"/"," \\\n--exclude '/").replace("\"","'");
        n = n + out;
    ++i1;
    }
    int i2 = 0;
    while (i2 < count_OUT_File+1){
        QString out = Selection_OUT_File.section(',',i2,i2);
        out.replace("\\"," ").replace("\"/"," \\\n--exclude '/").replace("\"","'");
        n = n + out;
    ++i2;
    }
    n.replace("'''","'");
    if(ui->Exclude_Caches->checkState()!=0){
        k = " \\\n--exclude-caches";}
    QString o = a + " \\\n" + b + k + n;

// mode=="new": Default values for new backups that should still be configured by the user!
    if(mode=="new" || mode=="init"){
        o = "";
    }
    o.replace("''","").replace("//","/");
    QString INFO_SH_TEXT = "#!/bin/sh\n# BORG BackUP GUI\n# created by Marc-André Tragé\n# \n# This script was created automatically and should not be changed.\n# Direct changes in the script that are not made by Borg BackUP GUI\n# could lead to errors in the function as well as in BackUP!\n#\n# More information and help can be found here:\n# https://github.com/MTrage/Borg-BackUP-GUI\n\n",
            Script       = INFO_SH_TEXT + BackUP + BackUP_Parameters + Data_IN + Data_OUT + Mount_Path + File_Managers + "date=$(date +\"%Y.%m.%d-%H:%M:%S\")\n" + "borg create" + Compression + "--comment \"$BORG_Snapshot_Comment\" " + BackUP_B + BackUP_A + "::$date \\\n" + o;
    QString new_Archive_Name_TEXT = ui->new_Archive_Name->text().replace("\"","");
    if(mode=="init"){
       BackUP_Name = ui->new_Archive_Name->text();
    }
    QFile file(PATH + "/profiles/" + BackUP_Name + ".sh");
          file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << Script;
    file.close();
    Changes_in_Areas = 0;
    QString PASS_KEY = "export BORG_PASSPHRASE='B O R G P A S S P H R A S E'\n\n";
    if(mode=="init"){
       BackUP_Name = ui->new_Archive_Name->text();
       PASS_KEY = "export BORG_PASSCOMMAND=''\nexport BORG_PASSPHRASE='" + ui->Archive_Key->text() + "'\n\n";
       if(ui->Archive_Key->text()==""){
           PASS_KEY = "export BORG_PASSPHRASE=''\nexport BORG_PASSCOMMAND='cat " + PATH + "/profiles/." + BackUP_Name +".key'\n\n";
       }
    }
    QString PASSPHRASE = INFO_SH_TEXT + "\n"
                                        "# The password entered here must be treated confidentially and stored securely.\n"
                                        "# It should only be used by users who know what they are doing.\n"
                                        "\n" + PASS_KEY + "# In an emergency, the following lines should only be changed by experienced users.\n"
                                        "# Failure to do so may result in damage or incomplete BackUPs.\n"
                                        "\n"
                                        "START_PATH=\"`dirname \\\"$0\\\"`\"\n"
                                        "sh $START_PATH/" + BackUP_Name.replace("\"","") + ".sh $1";
    if(mode=="new"){
        QFile fileA(PATH + "/profiles/" + new_Archive_Name_TEXT + ".PASSPHRASE");
              fileA.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream outA(&fileA);
        outA << PASSPHRASE;
        fileA.close();
    }
    if(mode=="init"){
        QFile fileB(PATH + "/profiles/" + new_Archive_Name_TEXT + ".PASSPHRASE");
              fileB.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream outB(&fileB);
        outB << PASSPHRASE;
        fileB.close();
    }
    Changes_in_Areas = 0;
}

// Config Area: Unlock the Compression settings
void BORG_BackUP_GUI::on_Change_clicked(){
           ui->Compression_Type->setEnabled(true);
     ui->Compression_Type_Value->setEnabled(true);
      ui->Compression_none_auto->setEnabled(true);
    ui->Save_Compression_Config->setEnabled(true);
                     ui->Status->setEnabled(true);
    QPixmap Lck2_Icon(PATH+"/images/unlocked.png");
    QIcon   Icon_Lck2(Lck2_Icon);
    ui->Change->setIcon(Icon_Lck2);
    ui->Change->setIconSize(Lck2_Icon.rect().size());
    ui->Change->setIconSize(QSize(32, 32));
    ui->Change->setStyleSheet("padding: 2 0 0 0;");
    ui->Change->setStyleSheet("color:#FFFFFF; background:#000077;");
    ++Changes_in_Areas;
}

// Config Area: Unlock the Mount settings
void BORG_BackUP_GUI::on_Change_2_clicked(){
    QPixmap Lck2_Icon(PATH+"/images/unlocked.png");
    QIcon   Icon_Lck2(Lck2_Icon);
                  ui->Change_2->setIcon(Icon_Lck2);
                  ui->Change_2->setIconSize(Lck2_Icon.rect().size());
                  ui->Change_2->setIconSize(QSize(32, 32));
                  ui->Change_2->setStyleSheet("padding: 2 0 0 0;");
                  ui->Change_2->setStyleSheet("color:#FFFFFF; background:#000077;");
    ui->avaiable_File_Managers->setEnabled(true);
         ui->Open_Mount_Folder->setEnabled(true);
         ui->Save_Mount_Config->setEnabled(true);
    ++Changes_in_Areas;
}

// Cronjob: Integrating a BackUP.
void BORG_BackUP_GUI::on_all_BackUPs_itemClicked(QListWidgetItem *item){
    QPixmap  cron_IN_Icon(PATH+"/images/in.png"),
            cron_OUT_Icon(PATH+"/images/out.png");
    QIcon    cron_IN(cron_IN_Icon),
            cron_OUT(cron_OUT_Icon);
    ui->all_BackUPs_cron_job->addItem(new QListWidgetItem(QIcon(cron_IN),item->text()));
      delete ui->all_BackUPs->takeItem(ui->all_BackUPs->row(item));
    ui->all_BackUPs_cron_job->sortItems();
             ui->all_BackUPs->sortItems();
               ui->AddChange->setEnabled(true);
}

// Cronjob: Remove a BackUP.
void BORG_BackUP_GUI::on_all_BackUPs_cron_job_itemClicked(QListWidgetItem *item){
    QPixmap  cron_IN_Icon(PATH+"/images/in.png"),
            cron_OUT_Icon(PATH+"/images/out.png");
    QIcon    cron_IN(cron_IN_Icon),
            cron_OUT(cron_OUT_Icon);
                    ui->all_BackUPs->addItem(new QListWidgetItem(QIcon(cron_OUT),item->text()));
    delete ui->all_BackUPs_cron_job->takeItem(ui->all_BackUPs_cron_job->row(item));
                    ui->all_BackUPs->sortItems();
           ui->all_BackUPs_cron_job->sortItems();
                      ui->AddChange->setEnabled(true);
}

// Should prevent unwanted preloading of data when switching to the Delete area.
void BORG_BackUP_GUI::on_tabWidget_tabBarClicked(){
    ui->Delete_List->clearSelection();
    ui->Delete_List->clearFocus();
}

// Start profile selection important data values set.
void BORG_BackUP_GUI::on_all_Profiles_currentRowChanged(int currentRow){
    QString BackUP = ui->all_Profiles->item(currentRow)->text();
    BackUP_Name = BackUP;
             ui->pass->setEnabled(true);
             ui->pass->setFocus();
             ui->label_pass->setGeometry(QRect(30, 20, 380, 40));
    ui->remove_BackUP->show();
}

// Allows to add an existing BackUP created with BORG BackUP GUI to the startup selection.
void BORG_BackUP_GUI::on_add_NEW_BackUP_clicked(){
    ui->all_Profiles->setEnabled(false);
    qApp->processEvents();
    set_Archive();
    ui->all_Profiles->setEnabled(true);
}

// Config Area: Saves the Compression Settings and adjusts the layout of the GUI.
void BORG_BackUP_GUI::on_Save_Compression_Config_clicked(){
    QPixmap Lck1_Icon(PATH+"/images/locked.png");
    QIcon   Icon_Lck1(Lck1_Icon);
                     ui->Change->setIcon(Icon_Lck1);
                     ui->Change->setIconSize(Lck1_Icon.rect().size());
                     ui->Change->setIconSize(QSize(32, 32));
                     ui->Change->setStyleSheet("padding: 2 0 0 0;");
                     ui->Change->setStyleSheet("background:#770000; color:#FFFFFF;");
                     ui->Status->setEnabled(false);
           ui->Compression_Type->setEnabled(false);
      ui->Compression_none_auto->setEnabled(false);
     ui->Compression_Type_Value->setEnabled(false);
    ui->Save_Compression_Config->setEnabled(false);
    qApp->processEvents();
    save_BackUP("");
}

// Config Area: Saves the Mount Settings and adjusts the layout of the GUI.
void BORG_BackUP_GUI::on_Save_Mount_Config_clicked(){
    QPixmap Lck1_Icon(PATH+"/images/locked.png");
    QIcon   Icon_Lck1(Lck1_Icon);
                  ui->Change_2->setIcon(Icon_Lck1);
                  ui->Change_2->setIconSize(Lck1_Icon.rect().size());
                  ui->Change_2->setIconSize(QSize(32, 32));
                  ui->Change_2->setStyleSheet("padding: 2 0 0 0;");
                  ui->Change_2->setStyleSheet("background:#770000; color:#FFFFFF;");
         ui->Open_Mount_Folder->setEnabled(false);
         ui->Save_Mount_Config->setEnabled(false);
    ui->avaiable_File_Managers->setEnabled(false);
    qApp->processEvents();
    save_BackUP("");
}

// Removes a BackUP from the administration.
void BORG_BackUP_GUI::on_remove_BackUP_clicked(){
    setDisabled(true);
    show();
    QPixmap c(PATH+"/images/logo.svg");
    QMessageBox a;
                a.setWindowTitle("Watch your step!");
                a.setIconPixmap(c);
                a.setText("Do you really want to remove this BackUP from the configuration of BORG BackUP GUI?\n\nIf you confirm this, there is still a backup copy in the Profiles folder with the name of the archive and the extension NAME.removed!");
                a.setStandardButtons(QMessageBox::Yes | QMessageBox::No | QMessageBox::Help);
                a.setDefaultButton(QMessageBox::No);
                QSpacerItem* horizontalSpacer = new QSpacerItem(800, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
                QGridLayout* layout = (QGridLayout*)a.layout();
                layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
    int     b = a.exec();
    switch (b){
    case QMessageBox::Yes:{
        QFile::rename(PATH+"/profiles/"+BackUP_Name+".PASSPHRASE", PATH+"/profiles/"+BackUP_Name+".removed");
        delete ui->all_Profiles->currentItem();
        setEnabled(true);
    }
        break;
    case QMessageBox::Help:{
        QDesktopServices::openUrl(QUrl(QString("https://github.com/MTrage/Borg-BackUP-GUI/wiki/Short-instruction")));
        setEnabled(true);
    }
        break;
    case QMessageBox::No:
        setEnabled(true);
        break;
    default:
        break;
    }
}

// New Archive Area: Activates the GUI for a new BackUP.
void BORG_BackUP_GUI::on_New_Archive_clicked(){
    QPixmap Lck2_Icon(PATH+"/images/unlocked.png");
    QIcon   Icon_Lck2(Lck2_Icon);
    ui->BackUP_Path->setEnabled(true);
     ui->New_Archive->setEnabled(false);
     ui->New_Archive->setIcon(Icon_Lck2);
     ui->New_Archive->setIconSize(Lck2_Icon.rect().size());
     ui->New_Archive->setIconSize(QSize(32, 32));
     ui->New_Archive->setStyleSheet("padding: 2 0 0 0;");
     ui->New_Archive->setStyleSheet("background:#000077; color:#FFFFFF;");
}

// New Archive Area: If the path was specified, the name entry is enabled in the GUI.
void BORG_BackUP_GUI::on_new_Archive_Path_textChanged(const QString &arg1){
    if(arg1!=""){
        ui->new_Archive_Name->setEnabled(true);
    }
    else{
        ui->new_Archive_Name->setEnabled(false);
    }
}

// New Archive Area: Allows the user to specify the BackUP path.
void BORG_BackUP_GUI::on_BackUP_Path_clicked(){
    QString a = ui->new_Archive_Path->text(),
            b = QFileDialog::getExistingDirectory(this, tr("Select a BackUP directory"),
        Home_Path,
        QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    int c = b.length();
    if(c!=0){
        ui->new_Archive_Path->setText(b);
    }
}

// New Archive Area: If the BackUP name was specified, the KEY functions are released in the GUI.
void BORG_BackUP_GUI::on_new_Archive_Name_textChanged(const QString &arg1){
    if(arg1!=""){
        QString a = ui->new_Archive_Name->text();
        a.replace("\"","-").replace("\\","-").replace(" ","-").replace(",","-").replace(";","-").replace("/","-");
        ui->new_Archive_Name->setText(a);
             ui->Archive_Key->setEnabled(true);
        ui->Archive_Key_File->setEnabled(true);
    }
    else{
             ui->Archive_Key->setEnabled(false);
        ui->Archive_Key_File->setEnabled(false);
                 ui->Create->setEnabled(false);
    }
}

// New Archive Area: Reads all entered data for a new BackUP and creates a new BackUP.
void BORG_BackUP_GUI::on_Create_clicked(){
    QPixmap Lck1_Icon(PATH+"/images/locked.png");
    QIcon   Icon_Lck1(Lck1_Icon);
    ui->New_Archive->setIcon(Icon_Lck1);
    ui->New_Archive->setIconSize(Lck1_Icon.rect().size());
    ui->New_Archive->setIconSize(QSize(32, 32));
    ui->New_Archive->setStyleSheet("padding: 2 0 0 0;");
    ui->New_Archive->setStyleSheet("background:#770000; color:#FFFFFF;");
    QString a = ui->new_Archive_Path->text(),
            b = ui->new_Archive_Name->text(),
            c =      ui->Archive_Key->text();
    setDisabled(true);
    QFile d(PATH + "/profiles/." + b + ".key");
    if(d.exists()){
        INFO("<b>STOP<BR>"
             "Please read carefully to avoid any loss of data.</b><BR>"
             "<BR>"
             "A key file with the name: <b>." + b + ".key</b><BR>"
             "already exists, you should save this file if the BackUP with the name: <b>"+ b + "</b> still exists!<BR>"
             "<BR>"
             "<b>The path to the key is:</b><BR>"+ PATH + "/profiles/." + b + ".key");
    }
    else{
        if(ui->Archive_Key->text()==""){
            create_Archive_Key_length();
        }
    }
    QString e = ui->new_Archive_Path->text() + "/" + ui->new_Archive_Name->text(),
            f = " --encryption=repokey";
    if(ui->Archive_Key->text()==""){
        f = " --encryption=keyfile";
    }
    QString g = BORG + " init " + e + f ;
    save_BackUP("init");
    new_Borg_Archive(g);
    ui->progressBar_4->setEnabled(true);
    if(ui->Archive_Key->text()==""){
        QPixmap ci(PATH+"/images/logo.svg");
        QMessageBox sa;
                    sa.setWindowTitle("Watch your step...");
                    sa.setIconPixmap(ci);
                    sa.setText("You have selected a <b>Keyfile</B> for the encryption,<BR>"
                               "this <b>Keyfile</b> is located in the folder <b>Profiles.</B><BR>"
                               "<b>Path: </b>" + PATH + "/profiles/." + b + ".key<BR>"
                               "You should always have a BackUP copy of your <b>Keyfile</b>,<BR>"
                               "you can back it up now.");
                    sa.setStandardButtons(QMessageBox::Help | QMessageBox::Save);
                    sa.setDefaultButton(QMessageBox::Save);
                    QSpacerItem* horizontalSpacer = new QSpacerItem(800, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
                    QGridLayout* layout = (QGridLayout*)sa.layout();
                    layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
        int     sb = sa.exec();
        switch (sb){
        case QMessageBox::Save:{
            QString save_Key = QFileDialog::getExistingDirectory(this, tr("Select a directory"),Home_Path,
                        QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

            int save_Key_length = save_Key.length();

            if(save_Key_length!=0){
                QFile::copy(PATH + "/profiles/." + b + ".key",save_Key + "/BORG-BackUP-GUI-Key." + b + ".key");
            }
            setDisabled(false);
            break;
        }
        case QMessageBox::Help:
            QDesktopServices::openUrl(QUrl(QString("https://github.com/MTrage/Borg-BackUP-GUI/wiki/Short-instruction#backup-area")));
            break;
        default:
            setDisabled(false);
            break;
        }
    }
    ui->new_Archive_Path->setText("");
    ui->new_Archive_Name->setText("");
    ui->BackUP_Path->setEnabled(false);
        ui->New_Archive->setEnabled(true);
        ui->Archive_Key->setText("");
         ui->Archive_Key_File->setCurrentIndex(0);
         ui->Archive_Key->setDisabled(true);
    ui->Archive_Key_File->setDisabled(true);
}

// Unlocking the Comment Manager
void BORG_BackUP_GUI::on_Change_3_clicked(){
    QPixmap Lck2_Icon(PATH+"/images/unlocked.png");
    QIcon   Icon_Lck2(Lck2_Icon);
    QPixmap Lck1_Icon(PATH+"/images/locked.png");
    QIcon   Icon_Lck1(Lck1_Icon);
    if(on_Change_3_on_off==0){
        ui->Change_3->setIcon(Icon_Lck2);
        ui->Change_3->setIconSize(Lck2_Icon.rect().size());
        ui->Change_3->setIconSize(QSize(32, 32));
        ui->Change_3->setStyleSheet("padding: 2 0 0 0;");
        ui->Change_3->setStyleSheet("color:#FFFFFF; background:#000077;");
        ui->Snapshot_Comments->setEnabled(true);
           ui->Remove_Comment->setEnabled(true);
        on_Change_3_on_off = 1;
    }
    else{
        ui->Change_3->setIcon(Icon_Lck1);
        ui->Change_3->setIconSize(Lck1_Icon.rect().size());
        ui->Change_3->setIconSize(QSize(32, 32));
        ui->Change_3->setStyleSheet("padding: 2 0 0 0;");
        ui->Change_3->setStyleSheet("background:#770000; color:#FFFFFF;");
        ui->Snapshot_Comments->setEnabled(false);
           ui->Remove_Comment->setEnabled(false);
        on_Change_3_on_off = 0;
    }
}

// Save the current selected comment in Snapshot_Comments_current_Row
void BORG_BackUP_GUI::on_Snapshot_Comments_currentRowChanged(int a){
    Snapshot_Comments_current_Row = a;
}

// Ask if you really want to delete the comment, and delete it if you want.
void BORG_BackUP_GUI::on_Remove_Comment_clicked(){
    QString Name_Comment = ui->Snapshot_Comments->currentItem()->text();
    if(ask("Delete a Comment","Do you really want to delete the comment <b>" + Name_Comment + "</b>?","ask")=="OK"){
        delete ui->Snapshot_Comments->takeItem(Snapshot_Comments_current_Row);
        QString item_List;
        int count = ui->Snapshot_Comments->count();
        QString a = "\n";
        for(int i = 0; i < count; i++){
            if(i == count-1){
                a = "";
            }
            if(ui->Snapshot_Comments->item(i)->text()!=""){
                item_List = item_List + ui->Snapshot_Comments->item(i)->text() + a;
            }
        }
        QFile file(PATH + "/profiles/.list-of-comments");
              file.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream out(&file);
        out << item_List;
        file.close();
    }
    Snapshot_Comments_current_Row = ui->Snapshot_Comments->currentRow();
}

// Execute the export function for the profiles
void BORG_BackUP_GUI::on_Export_Config_clicked(){
    run_export_Profiles("-zcvf", PATH+"/export/Profiles_" + timestamp_Date_Time() + ".tar.gz", PATH+"/profiles/");
    INFO("<b>Profile</b> and <b>Config data</b> were successfully exported to:<BR>"
         +PATH+"/export/<BR>"
         "<BR>"
         "Important export files are always timestamped.");
}

// Even beautiful things come to an end.
void BORG_BackUP_GUI::EXIT(){
    if(Changes_in_Areas == 0){
        qApp->quit();
        delete ui;
    }
    else{
        if(close_Event=="YES"){
            qApp->quit();
            delete ui;
        }
        setDisabled(true);
        show();
        QPixmap c(PATH+"/images/logo.svg");
        QMessageBox a;
                    a.setWindowTitle("Watch your step...");
                    a.setIconPixmap(c);
                    a.setText("<b>You have made changes.</b><br>"
                              "Did you want to save the changes?<br>"
                              "<br>"
                              "<b>Yes</b><br>Close without saving the changes.<br><br>"
                              "<b>No</b><br>Cancel closing and continue working.<br><br>"
                              "<b>Save</b><br>Save changes and close program.<br>");
                    a.setStandardButtons(QMessageBox::Yes | QMessageBox::Save | QMessageBox::No);
                    a.setDefaultButton(QMessageBox::No);
                    QSpacerItem* horizontalSpacer = new QSpacerItem(800, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
                    QGridLayout* layout = (QGridLayout*)a.layout();
                    layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
        int     b = a.exec();
        switch (b){
        case QMessageBox::Save:{
            save_BackUP("");
            QDelay::msleep(1000);
            QFile a("/tmp/Crontab.backup");
            if(a.exists()){
                QDir().remove("/tmp/Crontab.backup");
            }
            QFile b("/tmp/Crontab.final");
            if(b.exists()){
                QDir().remove("/tmp/Crontab.final");
            }
            qApp->quit();
            delete ui;
            close_Event="YES";
            break;
        }
        case QMessageBox::Yes:{
            QFile a("/tmp/Crontab.backup");
            if(a.exists()){
                QDir().remove("/tmp/Crontab.backup");
            }
            QFile b("/tmp/Crontab.final");
            if(b.exists()){
                QDir().remove("/tmp/Crontab.final");
            }
            qApp->quit();
            delete ui;
            close_Event="YES";
            break;
        }
        case QMessageBox::No:
            setEnabled(true);
            close_Event="no";
            setDisabled(false);
            break;
        default:
            close_Event="no";
            setDisabled(false);
            break;
        }
    }
}

void BORG_BackUP_GUI::on_Exit_triggered(){
    EXIT();}

BORG_BackUP_GUI::~BORG_BackUP_GUI(){
    EXIT();}
