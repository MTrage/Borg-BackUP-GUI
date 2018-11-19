#ifndef BORG_BACKUP_GUI_H
#define BORG_BACKUP_GUI_H

#include <QSystemTrayIcon>
#include <QMainWindow>
#include <QThread>

class QAction;
class QListWidget;
class QListWidgetItem;

class QDelay : public QThread{
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

class BORG_BackUP_GUI : public QMainWindow{
    Q_OBJECT

public:
    explicit BORG_BackUP_GUI(QWidget *parent = nullptr);
    ~BORG_BackUP_GUI();


private slots:
    QString ask(QString x,QString y,QString z);

    void Main_Window();
    void QDarkStylesheet();
    void SystemTrayIcon(QString a);
    void EXIT();

    void Info_List();
    void Build_Delete_List();
    void Mount_setEnabled_GUI_Parts();
    void Unmount_setEnabled_GUI_Parts();
    void Control_question();
    void Compression_values(QString a, QString b, QString c);

    void Show_Hide_Icon(QSystemTrayIcon::ActivationReason a);
    void Random_Key_Base64(int x, int y);
    void closeEvent (QCloseEvent *event);
    void Read_BORG_json_LIST_Array();
    void Load_loop();
    void LOADING();

    void ERROR(QString c);
    void INFO(QString c);
    void Show_Hide();

    void Check_Borg_Archiv(QString a);
    void new_Borg_Archiv(QString a);
    void write_html_Page();

    void run_JSON_Info();
    void run_JSON_List();
    void run_Mount_checker();
    void run_Crontab_Values();
    void run_Detail_JSON_Info(QString a);
    void run_export_Profiles(QString x, QString y, QString z);

    void save_Crontab();
    void check_File_Managers(QString a);
    void Archiv_Key_Changed();
    void Compression_Type_Value_remove_Items();
    void Weekday_Check();
    void Compression_Build_String();
    void save_BackUP(QString mode);
    void set_Cron_Jobs_in_GUI();
    void read_all_Profiles();
    void Build_Dir_File();
    void read_Dir_File(QString a, QString ai);
    void create_Archiv_Key_length();
    void set_Archiv();

    void on_BackUP_NOW_clicked();
    void on_Mount_clicked();
    void on_Unmount_clicked();
    void on_Re_Check_Delete_textChanged();
    void on_Delete_List_currentRowChanged(int currentRow);
    void on_DELETE_clicked();
    void on_Exit_triggered();
    void on_AddChange(QString z);
    void on_AddChange_clicked();
    void on_Remove_clicked();
    void on_openMount_clicked();
    void on_html_clicked();
    void on_WD1_stateChanged();
    void on_WD2_stateChanged();
    void on_WD3_stateChanged();
    void on_WD4_stateChanged();
    void on_WD5_stateChanged();
    void on_WD6_stateChanged();
    void on_WD7_stateChanged();
    void on_Open_Mount_Folder_clicked();
    void on_pathInfo_3_textChanged();
    void on_Compression_Type_currentIndexChanged(const int a);
    void on_Compression_none_auto_currentIndexChanged(const QString a);
    void on_Compression_Type_Value_currentIndexChanged(QString a);
    void on_Status_currentIndexChanged(const QString a);
    void on_Archiv_Key_textChanged(const QString a);
    void on_Archiv_Key_File_currentTextChanged(const QString a);
    void on_pass_OK_clicked();
    void on_pass_returnPressed();
    void on_pass_textChanged(const QString a);
    void on_Add_Dir_IN_clicked();
    void on_Add_File_IN_clicked();
    void on_Add_Dir_OUT_clicked();
    void on_Add_File_OUT_clicked();
    void on_listWidget_in_itemClicked();
    void on_listWidget_out_itemClicked();
    void on_Remove_IN_clicked();
    void on_Remove_OUT_clicked();
    void on_Save_clicked();
    void on_Unlocked_Selecton_clicked();
    void on_Change_clicked();
    void on_Change_2_clicked();
    void on_Exclude_System_stateChanged(int a);
    void on_all_BackUPs_itemClicked(QListWidgetItem *item);
    void on_all_BackUPs_cron_job_itemClicked(QListWidgetItem *item);
    void on_tabWidget_tabBarClicked();
    void on_all_Profiles_currentRowChanged(int currentRow);
    void on_add_NEW_BackUP_clicked();
    void on_Save_Compression_Config_clicked();
    void on_Save_Mount_Config_clicked();
    void on_remove_BackUP_clicked();
    void on_New_Archiv_clicked();
    void on_Create_clicked();
    void on_BackUP_Path_clicked();
    void on_new_Archiv_Path_textChanged(const QString &arg1);
    void on_new_Archiv_Name_textChanged(const QString &arg1);

    void on_Change_3_clicked();

    void on_Remove_Comment_clicked();

    void on_Snapshot_Comments_currentRowChanged(int a);

    void on_Export_Config_clicked();

private:
    Ui::BORG_BackUP_GUI *ui;
};

class Worker : public QObject {
    Q_OBJECT
public:
public slots:
    void process();
signals:
    void finished();
private:
};

#endif // BORG_BACKUP_GUI_H
