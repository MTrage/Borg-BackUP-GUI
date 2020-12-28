#include "borg_backup_gui.h"
#include <QProcessEnvironment>
#include <QDesktopServices>
#include <QApplication>
#include <QMessageBox>
#include <QPushButton>
#include <QSpacerItem>
#include <QGridLayout>
#include <QFile>
#include <QUrl>
#include <QDir>

static int KILLER = 1;
static QString Borg_OK_Task,
               Borg_OK_df,
               Borg_OK_inxi,
               Borg_ERROR_Task,
               Borg_ERROR_df,
               Borg_ERROR_inxi,
               Logo = "     dBBBBb   dBBBBPdBBBBb    dBBBBb   dBBBBb dBBBBb     dBBBBP dBP dBP dBP dBP dBBBBBb    dBBBBb dBP dBP dBBBP\n"
                      "        dBP  dB'.BP    dBP   BB           dBP     BB    dBP    d8P.dBP dBP dBP      dB'   BB     dBP dBP  dBP\n"
                      "    dBBBK'  dB'.BP  dBBBK'  dB BBB    dBBBK'  dBP BB   dBP    dBBBBP  dBP dBP   dBBBP'   dB BBB dBP dBP  dBP\n"
                      "   dB' db  dB'.BP  dBP BB  dB' BB    dB' db  dBP  BB  dBP    dBP BB  dBP dBP   dBP      dB' BB dBP dBP  dBP\n"
                      "  dBBBBP' dBBBBP  dBP dB' dBBBBB    dBBBBP' dBBBBBBB dBBBBP dBP dBP dBBBBBP   dBP      dBBBBB dBBBBBP dBBBP";

void df(){
    QProcess process_df;
    process_df.start("df -HT");
    process_df.waitForFinished(-1);
    QString stdout_df = process_df.readAllStandardOutput();
    QString stderr_df = process_df.readAllStandardError();
    Borg_OK_df     = stdout_df;
    Borg_ERROR_df  = stderr_df;
    QProcess process_inxi;
    process_inxi.start("inxi -dc0");
    process_inxi.waitForFinished(-1);
    QString stdout_inxi = process_inxi.readAllStandardOutput();
    QString stderr_inxi = process_inxi.readAllStandardError();
    Borg_OK_inxi     = stdout_inxi;
    Borg_ERROR_inxi  = stderr_inxi;
    QString drive  = Borg_OK_inxi + "–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
    + Borg_OK_df.replace("%","\%\\\b") + "–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––";
    qInfo(qPrintable(drive));
}


int main(int argc, char *argv[]){
// BEG double BORG-BackUP-GUI check and close
    QApplication a(argc, argv);
    QString b,c;

    QString ba          ("/bin/borg"),
            bb      ("/usr/bin/borg"),
            bc("/usr/local/bin/borg");

    QFile   bfa(ba),
            bfb(bb),
            bfc(bc);

    if(bfa.exists() || bfb.exists() || bfc.exists()){

    }
    else{
        QPixmap e("/home/mjw/Qt-Prj/BORG-BackUP-GUI/src/images/logo.svg");
        QMessageBox d;
        d.setIconPixmap(e);
        d.setWindowTitle("ERROR: Borg BackUP must be installed!");
        d.setInformativeText("If you want to use <b>BORG BackUP GUI</b>,<BR>"
                             "<b>Borg BackUP</b> must also be installed.<BR>"
                             "<BR>""If you click on the Help button, you will receive specific information on how to install <b>Borg BackUP</b>.");
        d.setStandardButtons(QMessageBox::Ok | QMessageBox::Help);
        d.setDefaultButton(QMessageBox::Ok);
        QSpacerItem* horizontalSpacer = new QSpacerItem(600, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
        QGridLayout* layout = (QGridLayout*)d.layout();
        layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
        int reply = d.exec();
        if (reply == QMessageBox::Ok) {

        }
        if (reply == QMessageBox::Help) {
            QDesktopServices::openUrl(QUrl(QString("https://borgbackup.readthedocs.io/en/stable/installation.html")));
        }
        return 0;
    }
    QProcess process;
    process.start("pidof BORG-BackUP-GUI");
    process.waitForFinished(-1);
    QString stdout  = process.readAllStandardOutput();
    QString stderr  = process.readAllStandardError();
    Borg_OK_Task    = stdout;
    Borg_ERROR_Task = stderr;
    if(Borg_ERROR_Task == ""){
        QString task_READ_length = QString::number(Borg_OK_Task.count());
        int task_length = task_READ_length.toInt();
        if(task_length > 6){
            KILLER = 0;
        }
    }
// END
  
  /* Deactivation of the control whether the programme has already been started! 
    if(KILLER==1){
        // For future expansion.
    }
    else{
        qInfo("\n---> BORG BackUP GUI is allready running! <---");
        QPixmap e("/home/mjw/Qt-Prj/BORG-BackUP-GUI/src/images/logo.svg");
        QMessageBox d;
        d.setWindowTitle("ERROR");
        d.setInformativeText("<b>BORG BackUP GUI</b> should never be run multiple times. In the case of particularly large data volumes (usually in connection with an initial setup),<BR>""<BR>""<b>BORG BackUP GUI</b> may crash as a result of connection interruptions. However, <b>Borg BackUP</b> processes its tasks separately in the background.<BR>""<BR>""You should be aware of this,<BR>""if this message should be completely unexpected for you.");
        d.setIconPixmap(e);
        QSpacerItem* horizontalSpacer = new QSpacerItem(800, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
        QGridLayout* layout = (QGridLayout*)d.layout();
        layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
        int reply = d.exec();
        if (reply == QMessageBox::Ok) {
            qInfo("The double task of BORG BackUP GUI could be successfully closed.\n");
        }
        return 0;
    }
    */
    b = argv[1];
    if(b=="--help" || b=="-h"){
        qInfo(qPrintable("\n"+Logo));
        qInfo("–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
              "    -h, --help       --> this Help Message\n"
              "    -v, --version    --> Version Information\n"
              "    -o, --online     --> open the online Manuel\n"
              "    -p, --philosophy --> Philosophy and intention of the builder\n"
              "    -a, --available  --> calls \"df -HT\" and \"inxi -dc0\" in the system\n"
              "                         to display an overview of the available Drives.\n"
              "    -l, --list       --> List all Configuration Profiles\n"
              "–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n");
        return 0;
    }
    if(b=="-v" || b=="--version"){
        qInfo(qPrintable("\n"+Logo));
        qInfo("–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
              "    Copyright (C) 1.8.2018 - ∞ by Marc-André Tragé <mt@7vm.de>"
              "\n");
        return 0;
    }
    if(b=="-o" || b=="--online"){
        QString link = "https://github.com/MTrage/Borg-BackUP-GUI";
        QDesktopServices::openUrl(QUrl(link));
        return 0;
    }
    if(b=="-a" || b=="--available"){
        qInfo(qPrintable("\n"+Logo));
        qInfo("–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n");
        df();
        return 0;
    }
    if(b=="-l" || b=="--list"){
        QString read_all_BackUPs;
        QDir directory("/home/mjw/Qt-Prj/BORG-BackUP-GUI/src/profiles/");

        QStringList sh   = directory.entryList(QStringList() << "*.PASSPHRASE",QDir::Files);
        QStringList sh_r = directory.entryList(QStringList() << "*.removed",QDir::Files);
        int i = 0;

        foreach(QString filename, sh) {
            QString a = "";
            if(read_all_BackUPs!=""){a = "\n";}
            read_all_BackUPs = read_all_BackUPs + a + qPrintable("        NR." + QString::number(i+1) + " --> " + sh[i].replace(".PASSPHRASE",""));
            ++i;
        }
        qInfo(qPrintable("\n"+Logo));
        qInfo("–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
              "    BackUPs that can be managed directly:");
        qInfo(qPrintable(read_all_BackUPs));
        read_all_BackUPs = "";
        i = 0;
        foreach(QString filename, sh_r) {
            QString a = "";
            if(read_all_BackUPs!=""){a = "\n";}
            read_all_BackUPs = read_all_BackUPs + a + qPrintable("        NR." + QString::number(i+1) + " --> " + sh_r[i].replace(".removed",""));
            ++i;
        }
        qInfo("\n–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––");
        qInfo(qPrintable("    Configuration profiles of BackUPs that have been removed:"));
        qInfo(qPrintable(read_all_BackUPs));
        qInfo("\n–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––");
        qInfo("    If a BackUP which has already been managed is removed and added again, it is possible to use the saved\n"
              "    configuration when re-importing it. This means that settings once made are not lost.\n");
        return 0;
    }

    if(b=="-p" || b=="--philosophy"){
        qInfo(qPrintable("\n"+Logo));
        qInfo("–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
              "    The first versions of BORG BackUP GUI were designed to meet my needs.\n"
              "    The following versions (like this one) should make it as easy as possible for the user to use an all in\n"
              "    one solution. So not only the execution of snapshots and the retrieval of information is possible,\n"
              "    but also the creation of new backups and the configuration.\n"
              "\n"
              "    Furthermore,\n"
              "    small useful functions are included to prevent unnecessary errors, for example it is possible to import\n"
              "    BackUPs that have been deleted from the configuration and automatically take over the old configuration.\n"
              "    Export reports are saved, there are comment options for the snapshot with a selection of already used\n"
              "    comments and many other functions to make it easier for the user to use Borg Backup.\n"
              "–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n");
        return 0;
    }

    BORG_BackUP_GUI d;
    d.show();
    return a.exec();
}
