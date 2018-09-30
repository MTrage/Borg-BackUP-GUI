#include "borg_backup_gui.h"
#include <QApplication>
#include <QFile>
#include <QMessageBox>
#include <QApplication>
#include <QProcessEnvironment>
#include <QDesktopServices>
#include <QUrl>

static int KILLER = 1;

int main(int argc, char *argv[])
{

    // BEG double BORG-BackUP-GUI check and close
    system(qPrintable("/usr/bin/pidof BORG-BackUP-GUI > /tmp/Borg_Task"));
    QFile task("/tmp/Borg_Task");
    if (task.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString task_READ = task.readAll();
        QString task_READ_length = QString::number(task_READ.count());
        QString task_READ_kill = task_READ.section(' ', 0, 0);
        if(task_READ_length.toInt() > 6)
        {
            KILLER = 0;
        }
    }
    // END

    QApplication a(argc, argv);
    QString b,c;

    if(KILLER==1)
    {
        QFile c("/tmp/BORG-BackUP-GUI");
        if(c.exists())
        {
            system("/usr/bin/rm -r /tmp/BORG-BackUP-GUI");
        }
            system("/usr/bin/mkdir /tmp/BORG-BackUP-GUI");
    }
    else
    {
        system(qPrintable("/usr/bin/touch /tmp/Borg_ERROR"));
    }

    b = argv[1];

    if(b=="--help" || b=="-h")
    {
        qInfo("\n"
              "––– BORG BackUP GUI –––––––––––––––––[V0.1]–––\n"
              "    -h, --help      this Help Message\n"
              "    -v, --version   Version Information\n"
              "    -d, --dark      start with DarkStyle\n"
              "    -o, --online    open the online Manuel\n");
        return 0;
    }

    if(b=="-v" || b=="--version")
    {
        qInfo("\n––– BORG BackUP GUI – Version 0.1\n" );
        return 0;
    }

    if(b=="-d" || b=="--dark")
    {
        c = "1";
    }
    else
    {
        c = "";
    }

    if(b=="-o" || b=="--online")
    {
        QString link = "https://github.com/MTrage/Borg-BackUP-GUI";
        QDesktopServices::openUrl(QUrl(link));
        return 0;
    }


    system(qPrintable("/usr/bin/echo " + c + " > /tmp/BORG-BackUP-GUI/Theme"));
    BORG_BackUP_GUI d;
    d.show();
    return a.exec();
}
