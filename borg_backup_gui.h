#ifndef BORG_BACKUP_GUI_H
#define BORG_BACKUP_GUI_H
#include <QMainWindow>
#include <QThread>

class QAction;
class QListWidget;
class QListWidgetItem;

class QDelay : public QThread
{
public:
    static void msleep(unsigned long msecs)
    {
        QThread::msleep(msecs);
    }
    static void sleep(unsigned long secs)
    {
        QThread::sleep(secs);
    }
    static void usleep(unsigned long usecs)
    {
        QThread::usleep(usecs);
    }
};

namespace Ui {
class BORG_BackUP_GUI;
}

class BORG_BackUP_GUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit BORG_BackUP_GUI(QWidget *parent = nullptr);
    ~BORG_BackUP_GUI();

private slots:

    void QDarkStylesheet();

    void Info_List();
    void Details();
    void Build_Delete_List();
    void on_BackUP_NOW_clicked();
    void on_Details_clicked();
    void Mount_setEnabled_GUI_Parts();
    void Unmount_setEnabled_GUI_Parts();
    void Control_question();
    void on_Mount_clicked();
    void on_Unmount_clicked();
    void on_Config_File_clicked();
    void on_Re_Check_Delete_editingFinished();
    void on_listWidget_currentRowChanged(int currentRow);
    void on_DELETE_clicked();
    void Compression_values(QString a, QString b, QString c);

    void on_Exit_triggered();
    void on_Create_a_new_BackUP_point_Menu_triggered();
    void on_Mount_Menu_triggered();
    void on_Unmount_Menu_triggered();
    void on_Details_Menu_triggered();
    void on_Configuration_Menu_triggered();

    void on_Delete_Section_Menu_triggered();
    void on_Schedule_Section_Menu_triggered();

    void on_Borg_Homepage_Menu_triggered();
    void on_Tutorial_Menu_triggered();
    void on_About_Menu_triggered();

    void ERROR(QString a);

    void EXIT();

    void on_AddChange_clicked();

    void on_Time24AMPM_currentIndexChanged(int currentRow);


    void on_Remove_clicked();

    void on_openMount_clicked();

    void on_BORG_clicked();

    void LOADING();

private:
    Ui::BORG_BackUP_GUI *ui;
};

#endif // BORG_BACKUP_GUI_H
