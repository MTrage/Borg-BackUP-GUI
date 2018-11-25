/********************************************************************************
** Form generated from reading UI file 'borg_backup_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORG_BACKUP_GUI_H
#define UI_BORG_BACKUP_GUI_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BORG_BackUP_GUI
{
public:
    QAction *actionMount;
    QAction *actionUnmount;
    QAction *actionmore_Details;
    QAction *actionBackUP_NOW;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *New;
    QAction *About_Menu;
    QAction *Exit;
    QAction *Create_a_new_BackUP_point_Menu;
    QAction *Mount_Menu;
    QAction *Unmount_Menu;
    QAction *Details_Menu;
    QAction *actionDelete;
    QAction *Schedule_Section_Menu;
    QAction *Delete_Section_Menu;
    QAction *Configuration_Menu;
    QAction *Borg_Homepage_Menu;
    QAction *Tutorial_Menu;
    QAction *actionLoad_Archive;
    QAction *Set_Archive;
    QAction *Open;
    QWidget *Main;
    QTabWidget *tabWidget;
    QWidget *BackUP;
    QProgressBar *progressBar_2;
    QLabel *label_3;
    QLabel *Info;
    QPushButton *BackUP_NOW;
    QLabel *Info_2;
    QLabel *label;
    QProgressBar *progressBar;
    QProgressBar *progressBar_3;
    QLabel *Info_3;
    QLabel *label_2;
    QPushButton *Unmount;
    QPushButton *Mount;
    QPushButton *openMount;
    QLabel *Info_4;
    QLabel *label_9;
    QLabel *Info_5;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *Info_6;
    QLabel *label_12;
    QLabel *Info_8;
    QLabel *Info_7;
    QLabel *label_13;
    QLabel *label_14;
    QTextEdit *textINFO;
    QPushButton *html;
    QLabel *Mount_Info;
    QWidget *Selection;
    QListWidget *listWidget_in;
    QListWidget *listWidget_out;
    QPushButton *Save;
    QPushButton *Remove_OUT;
    QPushButton *Add_File_OUT;
    QPushButton *Add_Dir_OUT;
    QPushButton *Add_File_IN;
    QPushButton *Add_Dir_IN;
    QPushButton *Remove_IN;
    QLabel *pathInfo_7;
    QLabel *pathInfo_18;
    QCheckBox *Exclude_Caches;
    QFrame *Unlocked;
    QPushButton *Unlocked_Selecton;
    QCheckBox *Exclude_System;
    QFrame *line_10;
    QWidget *Delete;
    QListWidget *Delete_List;
    QPushButton *DELETE;
    QLabel *Check_Delete;
    QLineEdit *Re_Check_Delete;
    QLabel *label_4;
    QFrame *frame;
    QTextEdit *Delete_Info_Details;
    QWidget *Schedule;
    QTimeEdit *HH;
    QCheckBox *WD3;
    QCheckBox *WD4;
    QCheckBox *WD7;
    QCheckBox *WD5;
    QCheckBox *WD6;
    QCheckBox *WD2;
    QCheckBox *WD1;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *line_4;
    QPushButton *Remove;
    QPushButton *AddChange;
    QTimeEdit *mm;
    QListWidget *all_BackUPs;
    QListWidget *all_BackUPs_cron_job;
    QLabel *label_15;
    QLabel *label_16;
    QFrame *line_5;
    QTextBrowser *textBrowser_9;
    QWidget *Config;
    QLineEdit *test_Pack;
    QListWidget *Snapshot_Comments;
    QLabel *label_28;
    QPushButton *Remove_Comment;
    QPushButton *Change_3;
    QFrame *frame_IN_set;
    QFrame *frame_IN_set_2;
    QPushButton *Export_Config;
    QLabel *label_29;
    QTextBrowser *textBrowser_16;
    QFrame *frame_IN_set_4;
    QTextBrowser *textBrowser_11;
    QTextBrowser *textBrowser_10;
    QPushButton *Change_2;
    QLabel *label_25;
    QLabel *label_26;
    QComboBox *avaiable_File_Managers;
    QLineEdit *pathInfo_4;
    QPushButton *Open_Mount_Folder;
    QPushButton *Save_Mount_Config;
    QFrame *frame_IN_set_5;
    QPushButton *Change;
    QComboBox *Compression_Type;
    QComboBox *Compression_none_auto;
    QComboBox *Compression_Type_Value;
    QComboBox *Status;
    QPushButton *Save_Compression_Config;
    QLabel *label_24;
    QLabel *label_23;
    QLabel *label_22;
    QLabel *label_21;
    QTextBrowser *textBrowser_12;
    QTextBrowser *textBrowser_5;
    QWidget *NewArchiv;
    QLabel *label_18;
    QLabel *label_17;
    QPushButton *BackUP_Path;
    QComboBox *Archive_Key_File;
    QLineEdit *new_Archive_Name;
    QLineEdit *Archive_Key;
    QLabel *label_19;
    QPushButton *Create;
    QLabel *label_27;
    QLabel *label_20;
    QLineEdit *new_Archive_Path;
    QTextBrowser *textBrowser_6;
    QProgressBar *progressBar_4;
    QPushButton *New_Archive;
    QTextBrowser *textBrowser_7;
    QTextBrowser *textBrowser_8;
    QFrame *line_8;
    QWidget *Help;
    QTextBrowser *textBrowser_13;
    QTextBrowser *textBrowser_14;
    QFrame *line_6;
    QFrame *line_9;
    QTextBrowser *textBrowser_15;
    QLabel *logo;
    QLabel *wait;
    QProgressBar *loadBAR_2;
    QProgressBar *loadBAR;
    QProgressBar *loadBAR_3;
    QLineEdit *pathInfo_11;
    QFrame *frame_login;
    QLineEdit *pass;
    QPushButton *pass_OK;
    QLabel *label_pass;
    QLabel *loading;
    QFrame *frame_login_info;
    QLabel *loading_2;
    QLabel *label_8;
    QLabel *label_pass_EXPORT;
    QFrame *login_black_BG;
    QPushButton *add_NEW_BackUP;
    QPushButton *remove_BackUP;
    QFrame *frame_login_2;
    QLabel *ERROR;
    QListWidget *all_Profiles;
    QLineEdit *pathInfo_2;
    QLineEdit *pathInfo_3;
    QLabel *loading_GIF;
    QLabel *fade_t;
    QLabel *fade_b;

    void setupUi(QMainWindow *BORG_BackUP_GUI)
    {
        if (BORG_BackUP_GUI->objectName().isEmpty())
            BORG_BackUP_GUI->setObjectName(QStringLiteral("BORG_BackUP_GUI"));
        BORG_BackUP_GUI->resize(1000, 620);
        actionMount = new QAction(BORG_BackUP_GUI);
        actionMount->setObjectName(QStringLiteral("actionMount"));
        actionUnmount = new QAction(BORG_BackUP_GUI);
        actionUnmount->setObjectName(QStringLiteral("actionUnmount"));
        actionmore_Details = new QAction(BORG_BackUP_GUI);
        actionmore_Details->setObjectName(QStringLiteral("actionmore_Details"));
        actionBackUP_NOW = new QAction(BORG_BackUP_GUI);
        actionBackUP_NOW->setObjectName(QStringLiteral("actionBackUP_NOW"));
        actionExit = new QAction(BORG_BackUP_GUI);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(BORG_BackUP_GUI);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        New = new QAction(BORG_BackUP_GUI);
        New->setObjectName(QStringLiteral("New"));
        About_Menu = new QAction(BORG_BackUP_GUI);
        About_Menu->setObjectName(QStringLiteral("About_Menu"));
        Exit = new QAction(BORG_BackUP_GUI);
        Exit->setObjectName(QStringLiteral("Exit"));
        Create_a_new_BackUP_point_Menu = new QAction(BORG_BackUP_GUI);
        Create_a_new_BackUP_point_Menu->setObjectName(QStringLiteral("Create_a_new_BackUP_point_Menu"));
        Mount_Menu = new QAction(BORG_BackUP_GUI);
        Mount_Menu->setObjectName(QStringLiteral("Mount_Menu"));
        Unmount_Menu = new QAction(BORG_BackUP_GUI);
        Unmount_Menu->setObjectName(QStringLiteral("Unmount_Menu"));
        Details_Menu = new QAction(BORG_BackUP_GUI);
        Details_Menu->setObjectName(QStringLiteral("Details_Menu"));
        actionDelete = new QAction(BORG_BackUP_GUI);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        Schedule_Section_Menu = new QAction(BORG_BackUP_GUI);
        Schedule_Section_Menu->setObjectName(QStringLiteral("Schedule_Section_Menu"));
        Delete_Section_Menu = new QAction(BORG_BackUP_GUI);
        Delete_Section_Menu->setObjectName(QStringLiteral("Delete_Section_Menu"));
        Configuration_Menu = new QAction(BORG_BackUP_GUI);
        Configuration_Menu->setObjectName(QStringLiteral("Configuration_Menu"));
        Borg_Homepage_Menu = new QAction(BORG_BackUP_GUI);
        Borg_Homepage_Menu->setObjectName(QStringLiteral("Borg_Homepage_Menu"));
        Tutorial_Menu = new QAction(BORG_BackUP_GUI);
        Tutorial_Menu->setObjectName(QStringLiteral("Tutorial_Menu"));
        actionLoad_Archive = new QAction(BORG_BackUP_GUI);
        actionLoad_Archive->setObjectName(QStringLiteral("actionLoad_Archive"));
        Set_Archive = new QAction(BORG_BackUP_GUI);
        Set_Archive->setObjectName(QStringLiteral("Set_Archive"));
        Open = new QAction(BORG_BackUP_GUI);
        Open->setObjectName(QStringLiteral("Open"));
        Main = new QWidget(BORG_BackUP_GUI);
        Main->setObjectName(QStringLiteral("Main"));
        tabWidget = new QTabWidget(Main);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 10, 1000, 610));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        tabWidget->setTabShape(QTabWidget::Rounded);
        BackUP = new QWidget();
        BackUP->setObjectName(QStringLiteral("BackUP"));
        progressBar_2 = new QProgressBar(BackUP);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(10, 55, 980, 50));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        progressBar_2->setFont(font1);
        progressBar_2->setLayoutDirection(Qt::LeftToRight);
        progressBar_2->setStyleSheet(QLatin1String("QProgressBar {\n"
"background: #330000;\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-radius: 5px;\n"
"color: rgb(255,255,255);\n"
"}\n"
"QProgressBar::chunk:horizontal {\n"
"background: qlineargradient( x1:0,y1:0,x2:1,y2:1,stop: 0 #FF0000, stop: 1 #330000);\n"
"border-radius: 3px;\n"
"}"));
        progressBar_2->setValue(0);
        progressBar_2->setAlignment(Qt::AlignCenter);
        progressBar_2->setTextDirection(QProgressBar::TopToBottom);
        label_3 = new QLabel(BackUP);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 104, 190, 50));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        label_3->setLineWidth(0);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Info = new QLabel(BackUP);
        Info->setObjectName(QStringLiteral("Info"));
        Info->setGeometry(QRect(210, 6, 130, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Droid Sans Thai"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        Info->setFont(font2);
        Info->setLayoutDirection(Qt::RightToLeft);
        Info->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        Info->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        BackUP_NOW = new QPushButton(BackUP);
        BackUP_NOW->setObjectName(QStringLiteral("BackUP_NOW"));
        BackUP_NOW->setEnabled(true);
        BackUP_NOW->setGeometry(QRect(700, 230, 290, 40));
        BackUP_NOW->setFont(font);
        BackUP_NOW->setStyleSheet(QStringLiteral("color:#FFFFFF;"));
        Info_2 = new QLabel(BackUP);
        Info_2->setObjectName(QStringLiteral("Info_2"));
        Info_2->setGeometry(QRect(210, 55, 130, 50));
        Info_2->setFont(font2);
        Info_2->setLayoutDirection(Qt::RightToLeft);
        Info_2->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        Info_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(BackUP);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 6, 190, 50));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setKerning(true);
        label->setFont(font3);
        label->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);\n"
""));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(0);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        progressBar = new QProgressBar(BackUP);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 6, 980, 50));
        progressBar->setFont(font1);
        progressBar->setStyleSheet(QLatin1String("QProgressBar {\n"
"background: #003300;\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-radius: 5px;\n"
"color: rgb(255,255,255);\n"
"}\n"
"QProgressBar::chunk:horizontal {\n"
"background: qlineargradient( x1:0,y1:0,x2:1,y2:1,stop: 0 #00FF00, stop: 1 #003300);\n"
"border-radius: 3px;\n"
"}"));
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar_3 = new QProgressBar(BackUP);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setGeometry(QRect(10, 104, 980, 50));
        progressBar_3->setFont(font1);
        progressBar_3->setStyleSheet(QLatin1String("QProgressBar {\n"
"background: #03224c;\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-radius: 5px;\n"
"color: rgb(255,255,255);\n"
"}\n"
"QProgressBar::chunk:horizontal {\n"
"background: qlineargradient(x1: 0, y1: 0.1, x2: 1, y2: 0.5, stop: 0 #00c1ff, stop: 1 #0f448c);\n"
"border-radius: 3px;\n"
"}"));
        progressBar_3->setValue(0);
        progressBar_3->setAlignment(Qt::AlignCenter);
        Info_3 = new QLabel(BackUP);
        Info_3->setObjectName(QStringLiteral("Info_3"));
        Info_3->setGeometry(QRect(210, 104, 130, 50));
        Info_3->setFont(font2);
        Info_3->setLayoutDirection(Qt::RightToLeft);
        Info_3->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        Info_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(BackUP);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 55, 190, 50));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        label_2->setLineWidth(0);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Unmount = new QPushButton(BackUP);
        Unmount->setObjectName(QStringLiteral("Unmount"));
        Unmount->setEnabled(false);
        Unmount->setGeometry(QRect(240, 230, 220, 40));
        Unmount->setFont(font);
        Unmount->setStyleSheet(QStringLiteral(""));
        Mount = new QPushButton(BackUP);
        Mount->setObjectName(QStringLiteral("Mount"));
        Mount->setEnabled(true);
        Mount->setGeometry(QRect(10, 230, 220, 40));
        Mount->setFont(font);
        openMount = new QPushButton(BackUP);
        openMount->setObjectName(QStringLiteral("openMount"));
        openMount->setEnabled(true);
        openMount->setGeometry(QRect(10, -360, 220, 40));
        openMount->setFont(font);
        openMount->setStyleSheet(QStringLiteral("background:#0000AA; color:#FFFFFF;"));
        Info_4 = new QLabel(BackUP);
        Info_4->setObjectName(QStringLiteral("Info_4"));
        Info_4->setGeometry(QRect(840, 55, 120, 50));
        Info_4->setFont(font2);
        Info_4->setLayoutDirection(Qt::RightToLeft);
        Info_4->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        Info_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9 = new QLabel(BackUP);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(660, 55, 170, 50));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        label_9->setLineWidth(0);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Info_5 = new QLabel(BackUP);
        Info_5->setObjectName(QStringLiteral("Info_5"));
        Info_5->setGeometry(QRect(840, 104, 120, 50));
        Info_5->setFont(font2);
        Info_5->setLayoutDirection(Qt::RightToLeft);
        Info_5->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        Info_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(BackUP);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(660, 104, 170, 50));
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        label_10->setLineWidth(0);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_11 = new QLabel(BackUP);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(660, 6, 170, 50));
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        label_11->setLineWidth(0);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Info_6 = new QLabel(BackUP);
        Info_6->setObjectName(QStringLiteral("Info_6"));
        Info_6->setGeometry(QRect(840, 6, 120, 50));
        Info_6->setFont(font2);
        Info_6->setLayoutDirection(Qt::RightToLeft);
        Info_6->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        Info_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_12 = new QLabel(BackUP);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 164, 180, 30));
        label_12->setFont(font);
        label_12->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        label_12->setLineWidth(0);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Info_8 = new QLabel(BackUP);
        Info_8->setObjectName(QStringLiteral("Info_8"));
        Info_8->setGeometry(QRect(210, 164, 740, 30));
        QFont font4;
        font4.setFamily(QStringLiteral("Droid Sans Thai"));
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setWeight(50);
        Info_8->setFont(font4);
        Info_8->setLayoutDirection(Qt::RightToLeft);
        Info_8->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        Info_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Info_7 = new QLabel(BackUP);
        Info_7->setObjectName(QStringLiteral("Info_7"));
        Info_7->setGeometry(QRect(210, 190, 740, 30));
        Info_7->setFont(font4);
        Info_7->setLayoutDirection(Qt::RightToLeft);
        Info_7->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        Info_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_13 = new QLabel(BackUP);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 190, 180, 30));
        label_13->setFont(font);
        label_13->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"background:rgba(0,0,0,0);"));
        label_13->setLineWidth(0);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14 = new QLabel(BackUP);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 161, 980, 62));
        label_14->setStyleSheet(QLatin1String("QLabel {\n"
"background: #03224c;\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"color: rgb(255,255,255);\n"
"background: qlineargradient(x1:0.7, y1:0, x2: 1, y2: 1, stop: 0 #222222, stop: 1 #555555);\n"
"}"));
        textINFO = new QTextEdit(BackUP);
        textINFO->setObjectName(QStringLiteral("textINFO"));
        textINFO->setGeometry(QRect(10, 280, 980, 280));
        QFont font5;
        font5.setFamily(QStringLiteral("Monospace"));
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setWeight(50);
        textINFO->setFont(font5);
        textINFO->setStyleSheet(QStringLiteral(""));
        textINFO->setReadOnly(true);
        html = new QPushButton(BackUP);
        html->setObjectName(QStringLiteral("html"));
        html->setGeometry(QRect(470, 230, 220, 40));
        html->setFont(font);
        Mount_Info = new QLabel(BackUP);
        Mount_Info->setObjectName(QStringLiteral("Mount_Info"));
        Mount_Info->setGeometry(QRect(-20, -300, 1020, 280));
        QFont font6;
        font6.setPointSize(15);
        font6.setBold(true);
        font6.setWeight(75);
        Mount_Info->setFont(font6);
        Mount_Info->setStyleSheet(QLatin1String("QLabel {\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-radius: 5px;\n"
"color: rgb(255,255,255);\n"
"background: qlineargradient(x2:1, y1:1, x1:1, y1:1, stop: 0 rgba(0,0,0,127), stop: 1 rgba(0,0,0,255));\n"
"border-radius: 3px;\n"
"}"));
        Mount_Info->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(BackUP, QString());
        label_14->raise();
        progressBar->raise();
        progressBar_3->raise();
        progressBar_2->raise();
        label_3->raise();
        Info->raise();
        Info_2->raise();
        label->raise();
        Info_3->raise();
        label_2->raise();
        Info_4->raise();
        label_9->raise();
        Info_5->raise();
        label_10->raise();
        label_11->raise();
        Info_6->raise();
        label_12->raise();
        Info_8->raise();
        Info_7->raise();
        label_13->raise();
        textINFO->raise();
        Mount_Info->raise();
        BackUP_NOW->raise();
        Unmount->raise();
        html->raise();
        Mount->raise();
        openMount->raise();
        Selection = new QWidget();
        Selection->setObjectName(QStringLiteral("Selection"));
        listWidget_in = new QListWidget(Selection);
        listWidget_in->setObjectName(QStringLiteral("listWidget_in"));
        listWidget_in->setEnabled(false);
        listWidget_in->setGeometry(QRect(10, 50, 480, 450));
        QFont font7;
        font7.setBold(false);
        font7.setWeight(50);
        listWidget_in->setFont(font7);
        listWidget_out = new QListWidget(Selection);
        listWidget_out->setObjectName(QStringLiteral("listWidget_out"));
        listWidget_out->setEnabled(false);
        listWidget_out->setGeometry(QRect(510, 50, 480, 400));
        listWidget_out->setFont(font7);
        Save = new QPushButton(Selection);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setEnabled(false);
        Save->setGeometry(QRect(840, 510, 150, 40));
        Save->setFont(font);
        Remove_OUT = new QPushButton(Selection);
        Remove_OUT->setObjectName(QStringLiteral("Remove_OUT"));
        Remove_OUT->setEnabled(false);
        Remove_OUT->setGeometry(QRect(840, 460, 150, 40));
        QFont font8;
        font8.setPointSize(16);
        font8.setBold(false);
        font8.setWeight(50);
        Remove_OUT->setFont(font8);
        Add_File_OUT = new QPushButton(Selection);
        Add_File_OUT->setObjectName(QStringLiteral("Add_File_OUT"));
        Add_File_OUT->setEnabled(false);
        Add_File_OUT->setGeometry(QRect(670, 510, 160, 40));
        Add_File_OUT->setFont(font8);
        Add_Dir_OUT = new QPushButton(Selection);
        Add_Dir_OUT->setObjectName(QStringLiteral("Add_Dir_OUT"));
        Add_Dir_OUT->setEnabled(false);
        Add_Dir_OUT->setGeometry(QRect(510, 510, 150, 40));
        Add_Dir_OUT->setFont(font8);
        Add_File_IN = new QPushButton(Selection);
        Add_File_IN->setObjectName(QStringLiteral("Add_File_IN"));
        Add_File_IN->setEnabled(false);
        Add_File_IN->setGeometry(QRect(170, 510, 160, 40));
        Add_File_IN->setFont(font8);
        Add_Dir_IN = new QPushButton(Selection);
        Add_Dir_IN->setObjectName(QStringLiteral("Add_Dir_IN"));
        Add_Dir_IN->setEnabled(false);
        Add_Dir_IN->setGeometry(QRect(10, 510, 150, 40));
        Add_Dir_IN->setFont(font8);
        Remove_IN = new QPushButton(Selection);
        Remove_IN->setObjectName(QStringLiteral("Remove_IN"));
        Remove_IN->setEnabled(false);
        Remove_IN->setGeometry(QRect(340, 510, 150, 40));
        Remove_IN->setFont(font8);
        pathInfo_7 = new QLabel(Selection);
        pathInfo_7->setObjectName(QStringLiteral("pathInfo_7"));
        pathInfo_7->setEnabled(false);
        pathInfo_7->setGeometry(QRect(510, 10, 480, 40));
        pathInfo_7->setFont(font);
        pathInfo_7->setStyleSheet(QLatin1String("QLabel {\n"
"background: #03224c;\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"\n"
"color: rgb(255,255,255);\n"
"background: qlineargradient(x1: 0, y1: 0.1, x2: 1, y2: 0.5, stop: 0 #ff0000, stop: 1 #550000);\n"
"}"));
        pathInfo_18 = new QLabel(Selection);
        pathInfo_18->setObjectName(QStringLiteral("pathInfo_18"));
        pathInfo_18->setEnabled(false);
        pathInfo_18->setGeometry(QRect(10, 10, 480, 40));
        pathInfo_18->setFont(font);
        pathInfo_18->setStyleSheet(QLatin1String("QLabel {\n"
"background: #03224c;\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"color: rgb(255,255,255);\n"
"background: qlineargradient(x1: 0, y1: 0.1, x2: 1, y2: 0.5, stop: 0 #00c1ff, stop: 1 #0f448c);\n"
"}"));
        Exclude_Caches = new QCheckBox(Selection);
        Exclude_Caches->setObjectName(QStringLiteral("Exclude_Caches"));
        Exclude_Caches->setEnabled(false);
        Exclude_Caches->setGeometry(QRect(520, 460, 150, 40));
        Exclude_Caches->setFont(font8);
        Exclude_Caches->setStyleSheet(QStringLiteral(""));
        Unlocked = new QFrame(Selection);
        Unlocked->setObjectName(QStringLiteral("Unlocked"));
        Unlocked->setGeometry(QRect(-20, -700, 1020, 630));
        Unlocked->setStyleSheet(QStringLiteral(""));
        Unlocked->setFrameShape(QFrame::StyledPanel);
        Unlocked->setFrameShadow(QFrame::Raised);
        Unlocked_Selecton = new QPushButton(Unlocked);
        Unlocked_Selecton->setObjectName(QStringLiteral("Unlocked_Selecton"));
        Unlocked_Selecton->setEnabled(true);
        Unlocked_Selecton->setGeometry(QRect(310, 190, 400, 80));
        QFont font9;
        font9.setPointSize(20);
        font9.setBold(false);
        font9.setWeight(50);
        Unlocked_Selecton->setFont(font9);
        Unlocked_Selecton->setStyleSheet(QLatin1String("background:#CCCCCC;\n"
"color:#FFFFFF;"));
        Exclude_System = new QCheckBox(Selection);
        Exclude_System->setObjectName(QStringLiteral("Exclude_System"));
        Exclude_System->setEnabled(false);
        Exclude_System->setGeometry(QRect(680, 460, 140, 40));
        Exclude_System->setFont(font8);
        Exclude_System->setStyleSheet(QStringLiteral(""));
        line_10 = new QFrame(Selection);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(490, 10, 20, 540));
        line_10->setFrameShadow(QFrame::Sunken);
        line_10->setLineWidth(2);
        line_10->setMidLineWidth(2);
        line_10->setFrameShape(QFrame::VLine);
        tabWidget->addTab(Selection, QString());
        Exclude_Caches->raise();
        Exclude_System->raise();
        line_10->raise();
        listWidget_in->raise();
        listWidget_out->raise();
        pathInfo_7->raise();
        pathInfo_18->raise();
        Remove_OUT->raise();
        Unlocked->raise();
        Add_File_OUT->raise();
        Add_Dir_OUT->raise();
        Add_Dir_IN->raise();
        Remove_IN->raise();
        Save->raise();
        Add_File_IN->raise();
        Delete = new QWidget();
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete_List = new QListWidget(Delete);
        Delete_List->setObjectName(QStringLiteral("Delete_List"));
        Delete_List->setGeometry(QRect(10, 10, 300, 540));
        Delete_List->setFont(font5);
        Delete_List->setStyleSheet(QStringLiteral(""));
        Delete_List->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        DELETE = new QPushButton(Delete);
        DELETE->setObjectName(QStringLiteral("DELETE"));
        DELETE->setEnabled(false);
        DELETE->setGeometry(QRect(820, 500, 160, 40));
        DELETE->setFont(font);
        Check_Delete = new QLabel(Delete);
        Check_Delete->setObjectName(QStringLiteral("Check_Delete"));
        Check_Delete->setGeometry(QRect(570, 500, 120, 40));
        Check_Delete->setFont(font);
        Check_Delete->setStyleSheet(QStringLiteral("color:#ffffff;"));
        Check_Delete->setAlignment(Qt::AlignCenter);
        Re_Check_Delete = new QLineEdit(Delete);
        Re_Check_Delete->setObjectName(QStringLiteral("Re_Check_Delete"));
        Re_Check_Delete->setGeometry(QRect(690, 500, 120, 40));
        QFont font10;
        font10.setPointSize(16);
        Re_Check_Delete->setFont(font10);
        Re_Check_Delete->setStyleSheet(QStringLiteral(""));
        Re_Check_Delete->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Delete);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 500, 270, 40));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color:#ffffff;"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        frame = new QFrame(Delete);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(320, 490, 670, 60));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(2);
        Delete_Info_Details = new QTextEdit(Delete);
        Delete_Info_Details->setObjectName(QStringLiteral("Delete_Info_Details"));
        Delete_Info_Details->setGeometry(QRect(320, 10, 670, 470));
        QFont font11;
        font11.setFamily(QStringLiteral("Monospace"));
        font11.setPointSize(10);
        font11.setBold(false);
        font11.setWeight(50);
        Delete_Info_Details->setFont(font11);
        Delete_Info_Details->setStyleSheet(QStringLiteral(""));
        Delete_Info_Details->setReadOnly(true);
        tabWidget->addTab(Delete, QString());
        frame->raise();
        Delete_List->raise();
        DELETE->raise();
        Check_Delete->raise();
        Re_Check_Delete->raise();
        label_4->raise();
        Delete_Info_Details->raise();
        Schedule = new QWidget();
        Schedule->setObjectName(QStringLiteral("Schedule"));
        HH = new QTimeEdit(Schedule);
        HH->setObjectName(QStringLiteral("HH"));
        HH->setEnabled(false);
        HH->setGeometry(QRect(800, 140, 80, 40));
        HH->setAlignment(Qt::AlignCenter);
        HH->setMaximumTime(QTime(23, 59, 59));
        HH->setTime(QTime(0, 0, 0));
        WD3 = new QCheckBox(Schedule);
        WD3->setObjectName(QStringLiteral("WD3"));
        WD3->setGeometry(QRect(230, 140, 80, 30));
        QFont font12;
        font12.setBold(true);
        font12.setWeight(75);
        WD3->setFont(font12);
        WD3->setTristate(false);
        WD4 = new QCheckBox(Schedule);
        WD4->setObjectName(QStringLiteral("WD4"));
        WD4->setGeometry(QRect(340, 140, 80, 30));
        WD4->setFont(font12);
        WD4->setTristate(false);
        WD7 = new QCheckBox(Schedule);
        WD7->setObjectName(QStringLiteral("WD7"));
        WD7->setGeometry(QRect(670, 140, 80, 30));
        WD7->setFont(font12);
        WD7->setTristate(false);
        WD5 = new QCheckBox(Schedule);
        WD5->setObjectName(QStringLiteral("WD5"));
        WD5->setGeometry(QRect(450, 140, 80, 30));
        WD5->setFont(font12);
        WD5->setTristate(false);
        WD6 = new QCheckBox(Schedule);
        WD6->setObjectName(QStringLiteral("WD6"));
        WD6->setGeometry(QRect(560, 140, 80, 30));
        WD6->setFont(font12);
        WD6->setTristate(false);
        WD2 = new QCheckBox(Schedule);
        WD2->setObjectName(QStringLiteral("WD2"));
        WD2->setGeometry(QRect(120, 140, 80, 30));
        WD2->setFont(font12);
        WD2->setTristate(false);
        WD1 = new QCheckBox(Schedule);
        WD1->setObjectName(QStringLiteral("WD1"));
        WD1->setGeometry(QRect(10, 140, 80, 30));
        WD1->setFont(font12);
        WD1->setStyleSheet(QStringLiteral(""));
        WD1->setTristate(false);
        label_5 = new QLabel(Schedule);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 90, 180, 30));
        QFont font13;
        font13.setPointSize(12);
        font13.setBold(true);
        font13.setWeight(75);
        label_5->setFont(font13);
        label_6 = new QLabel(Schedule);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(800, 90, 90, 34));
        label_6->setFont(font13);
        line_4 = new QFrame(Schedule);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(-40, 130, 1030, 4));
        line_4->setFrameShadow(QFrame::Sunken);
        line_4->setLineWidth(2);
        line_4->setMidLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        Remove = new QPushButton(Schedule);
        Remove->setObjectName(QStringLiteral("Remove"));
        Remove->setEnabled(false);
        Remove->setGeometry(QRect(10, 510, 480, 40));
        Remove->setFont(font8);
        AddChange = new QPushButton(Schedule);
        AddChange->setObjectName(QStringLiteral("AddChange"));
        AddChange->setEnabled(false);
        AddChange->setGeometry(QRect(510, 510, 480, 40));
        AddChange->setFont(font8);
        mm = new QTimeEdit(Schedule);
        mm->setObjectName(QStringLiteral("mm"));
        mm->setEnabled(false);
        mm->setGeometry(QRect(890, 140, 80, 40));
        mm->setAlignment(Qt::AlignCenter);
        all_BackUPs = new QListWidget(Schedule);
        all_BackUPs->setObjectName(QStringLiteral("all_BackUPs"));
        all_BackUPs->setEnabled(false);
        all_BackUPs->setGeometry(QRect(10, 210, 480, 290));
        all_BackUPs->setFont(font7);
        all_BackUPs_cron_job = new QListWidget(Schedule);
        all_BackUPs_cron_job->setObjectName(QStringLiteral("all_BackUPs_cron_job"));
        all_BackUPs_cron_job->setEnabled(false);
        all_BackUPs_cron_job->setGeometry(QRect(510, 210, 480, 290));
        all_BackUPs_cron_job->setFont(font7);
        label_15 = new QLabel(Schedule);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 170, 480, 40));
        QFont font14;
        font14.setPointSize(18);
        font14.setBold(true);
        font14.setWeight(75);
        label_15->setFont(font14);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_16 = new QLabel(Schedule);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(510, 170, 480, 40));
        label_16->setFont(font14);
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line_5 = new QFrame(Schedule);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(490, 210, 20, 340));
        line_5->setFrameShadow(QFrame::Sunken);
        line_5->setLineWidth(2);
        line_5->setMidLineWidth(2);
        line_5->setFrameShape(QFrame::VLine);
        textBrowser_9 = new QTextBrowser(Schedule);
        textBrowser_9->setObjectName(QStringLiteral("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(0, 10, 970, 80));
        QFont font15;
        font15.setPointSize(12);
        textBrowser_9->setFont(font15);
        textBrowser_9->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_9->setFrameShape(QFrame::NoFrame);
        textBrowser_9->setFrameShadow(QFrame::Raised);
        textBrowser_9->setLineWidth(0);
        textBrowser_9->setMidLineWidth(0);
        textBrowser_9->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_9->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabWidget->addTab(Schedule, QString());
        WD3->raise();
        WD4->raise();
        HH->raise();
        WD7->raise();
        WD5->raise();
        WD6->raise();
        WD2->raise();
        WD1->raise();
        label_5->raise();
        label_6->raise();
        line_4->raise();
        Remove->raise();
        AddChange->raise();
        mm->raise();
        all_BackUPs->raise();
        all_BackUPs_cron_job->raise();
        label_15->raise();
        label_16->raise();
        line_5->raise();
        textBrowser_9->raise();
        Config = new QWidget();
        Config->setObjectName(QStringLiteral("Config"));
        test_Pack = new QLineEdit(Config);
        test_Pack->setObjectName(QStringLiteral("test_Pack"));
        test_Pack->setEnabled(false);
        test_Pack->setGeometry(QRect(310, -250, 270, 40));
        QFont font16;
        font16.setPointSize(8);
        test_Pack->setFont(font16);
        test_Pack->setStyleSheet(QStringLiteral(""));
        test_Pack->setReadOnly(true);
        Snapshot_Comments = new QListWidget(Config);
        Snapshot_Comments->setObjectName(QStringLiteral("Snapshot_Comments"));
        Snapshot_Comments->setEnabled(false);
        Snapshot_Comments->setGeometry(QRect(690, 100, 290, 240));
        Snapshot_Comments->setFont(font5);
        Snapshot_Comments->setStyleSheet(QStringLiteral(""));
        Snapshot_Comments->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_28 = new QLabel(Config);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(690, 10, 290, 40));
        label_28->setFont(font);
        label_28->setStyleSheet(QStringLiteral(""));
        label_28->setAlignment(Qt::AlignCenter);
        Remove_Comment = new QPushButton(Config);
        Remove_Comment->setObjectName(QStringLiteral("Remove_Comment"));
        Remove_Comment->setEnabled(false);
        Remove_Comment->setGeometry(QRect(690, 350, 290, 40));
        Remove_Comment->setFont(font);
        Remove_Comment->setStyleSheet(QStringLiteral(""));
        Change_3 = new QPushButton(Config);
        Change_3->setObjectName(QStringLiteral("Change_3"));
        Change_3->setEnabled(true);
        Change_3->setGeometry(QRect(690, 50, 290, 40));
        Change_3->setFont(font8);
        Change_3->setStyleSheet(QStringLiteral(""));
        frame_IN_set = new QFrame(Config);
        frame_IN_set->setObjectName(QStringLiteral("frame_IN_set"));
        frame_IN_set->setGeometry(QRect(680, 10, 310, 390));
        frame_IN_set->setStyleSheet(QStringLiteral(""));
        frame_IN_set->setFrameShape(QFrame::StyledPanel);
        frame_IN_set->setFrameShadow(QFrame::Raised);
        frame_IN_set_2 = new QFrame(Config);
        frame_IN_set_2->setObjectName(QStringLiteral("frame_IN_set_2"));
        frame_IN_set_2->setGeometry(QRect(680, 410, 310, 140));
        frame_IN_set_2->setStyleSheet(QStringLiteral(""));
        frame_IN_set_2->setFrameShape(QFrame::StyledPanel);
        frame_IN_set_2->setFrameShadow(QFrame::Raised);
        Export_Config = new QPushButton(frame_IN_set_2);
        Export_Config->setObjectName(QStringLiteral("Export_Config"));
        Export_Config->setEnabled(true);
        Export_Config->setGeometry(QRect(10, 90, 290, 40));
        Export_Config->setFont(font);
        Export_Config->setStyleSheet(QStringLiteral(""));
        label_29 = new QLabel(frame_IN_set_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 0, 290, 40));
        label_29->setFont(font);
        label_29->setStyleSheet(QStringLiteral(""));
        label_29->setAlignment(Qt::AlignCenter);
        textBrowser_16 = new QTextBrowser(frame_IN_set_2);
        textBrowser_16->setObjectName(QStringLiteral("textBrowser_16"));
        textBrowser_16->setGeometry(QRect(10, 30, 290, 60));
        textBrowser_16->setFont(font15);
        textBrowser_16->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_16->setFrameShape(QFrame::NoFrame);
        textBrowser_16->setFrameShadow(QFrame::Raised);
        textBrowser_16->setLineWidth(0);
        textBrowser_16->setMidLineWidth(0);
        textBrowser_16->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_16->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Export_Config->raise();
        textBrowser_16->raise();
        label_29->raise();
        frame_IN_set_4 = new QFrame(Config);
        frame_IN_set_4->setObjectName(QStringLiteral("frame_IN_set_4"));
        frame_IN_set_4->setGeometry(QRect(10, 310, 660, 240));
        frame_IN_set_4->setStyleSheet(QStringLiteral(""));
        frame_IN_set_4->setFrameShape(QFrame::StyledPanel);
        frame_IN_set_4->setFrameShadow(QFrame::Raised);
        textBrowser_11 = new QTextBrowser(frame_IN_set_4);
        textBrowser_11->setObjectName(QStringLiteral("textBrowser_11"));
        textBrowser_11->setGeometry(QRect(350, 10, 300, 120));
        textBrowser_11->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_11->setFrameShape(QFrame::NoFrame);
        textBrowser_11->setFrameShadow(QFrame::Raised);
        textBrowser_11->setLineWidth(0);
        textBrowser_11->setMidLineWidth(0);
        textBrowser_11->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_11->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_10 = new QTextBrowser(frame_IN_set_4);
        textBrowser_10->setObjectName(QStringLiteral("textBrowser_10"));
        textBrowser_10->setGeometry(QRect(10, 10, 350, 120));
        textBrowser_10->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_10->setFrameShape(QFrame::NoFrame);
        textBrowser_10->setFrameShadow(QFrame::Raised);
        textBrowser_10->setLineWidth(0);
        textBrowser_10->setMidLineWidth(0);
        textBrowser_10->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_10->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Change_2 = new QPushButton(frame_IN_set_4);
        Change_2->setObjectName(QStringLiteral("Change_2"));
        Change_2->setEnabled(true);
        Change_2->setGeometry(QRect(10, 190, 150, 40));
        Change_2->setFont(font8);
        Change_2->setStyleSheet(QStringLiteral(""));
        label_25 = new QLabel(frame_IN_set_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(170, 190, 160, 40));
        label_25->setFont(font);
        label_25->setStyleSheet(QStringLiteral(""));
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_26 = new QLabel(frame_IN_set_4);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 140, 150, 40));
        QFont font17;
        font17.setPointSize(11);
        font17.setBold(true);
        font17.setWeight(75);
        label_26->setFont(font17);
        label_26->setStyleSheet(QStringLiteral(""));
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        avaiable_File_Managers = new QComboBox(frame_IN_set_4);
        avaiable_File_Managers->setObjectName(QStringLiteral("avaiable_File_Managers"));
        avaiable_File_Managers->setEnabled(false);
        avaiable_File_Managers->setGeometry(QRect(340, 190, 200, 40));
        avaiable_File_Managers->setStyleSheet(QStringLiteral(""));
        pathInfo_4 = new QLineEdit(frame_IN_set_4);
        pathInfo_4->setObjectName(QStringLiteral("pathInfo_4"));
        pathInfo_4->setEnabled(false);
        pathInfo_4->setGeometry(QRect(170, 140, 370, 40));
        pathInfo_4->setFont(font);
        pathInfo_4->setStyleSheet(QStringLiteral(""));
        pathInfo_4->setReadOnly(true);
        Open_Mount_Folder = new QPushButton(frame_IN_set_4);
        Open_Mount_Folder->setObjectName(QStringLiteral("Open_Mount_Folder"));
        Open_Mount_Folder->setEnabled(false);
        Open_Mount_Folder->setGeometry(QRect(550, 140, 100, 40));
        Open_Mount_Folder->setFont(font8);
        Open_Mount_Folder->setStyleSheet(QStringLiteral(""));
        Save_Mount_Config = new QPushButton(frame_IN_set_4);
        Save_Mount_Config->setObjectName(QStringLiteral("Save_Mount_Config"));
        Save_Mount_Config->setEnabled(false);
        Save_Mount_Config->setGeometry(QRect(550, 190, 100, 40));
        Save_Mount_Config->setFont(font);
        Save_Mount_Config->setStyleSheet(QStringLiteral(""));
        frame_IN_set_5 = new QFrame(Config);
        frame_IN_set_5->setObjectName(QStringLiteral("frame_IN_set_5"));
        frame_IN_set_5->setGeometry(QRect(10, 10, 660, 290));
        frame_IN_set_5->setStyleSheet(QStringLiteral(""));
        frame_IN_set_5->setFrameShape(QFrame::StyledPanel);
        frame_IN_set_5->setFrameShadow(QFrame::Raised);
        Change = new QPushButton(frame_IN_set_5);
        Change->setObjectName(QStringLiteral("Change"));
        Change->setEnabled(true);
        Change->setGeometry(QRect(10, 240, 150, 40));
        Change->setFont(font8);
        Change->setStyleSheet(QStringLiteral(""));
        Compression_Type = new QComboBox(frame_IN_set_5);
        Compression_Type->addItem(QString());
        Compression_Type->addItem(QString());
        Compression_Type->addItem(QString());
        Compression_Type->addItem(QString());
        Compression_Type->addItem(QString());
        Compression_Type->setObjectName(QStringLiteral("Compression_Type"));
        Compression_Type->setEnabled(false);
        Compression_Type->setGeometry(QRect(170, 240, 120, 40));
        Compression_Type->setFont(font10);
        Compression_Type->setStyleSheet(QStringLiteral(""));
        Compression_none_auto = new QComboBox(frame_IN_set_5);
        Compression_none_auto->addItem(QString());
        Compression_none_auto->addItem(QString());
        Compression_none_auto->setObjectName(QStringLiteral("Compression_none_auto"));
        Compression_none_auto->setEnabled(false);
        Compression_none_auto->setGeometry(QRect(300, 240, 90, 40));
        Compression_none_auto->setFont(font10);
        Compression_none_auto->setStyleSheet(QStringLiteral(""));
        Compression_Type_Value = new QComboBox(frame_IN_set_5);
        Compression_Type_Value->setObjectName(QStringLiteral("Compression_Type_Value"));
        Compression_Type_Value->setEnabled(false);
        Compression_Type_Value->setGeometry(QRect(400, 240, 60, 40));
        Compression_Type_Value->setFont(font10);
        Compression_Type_Value->setStyleSheet(QStringLiteral(""));
        Status = new QComboBox(frame_IN_set_5);
        Status->addItem(QString());
        Status->addItem(QString());
        Status->setObjectName(QStringLiteral("Status"));
        Status->setEnabled(false);
        Status->setGeometry(QRect(470, 240, 70, 40));
        Status->setFont(font10);
        Status->setStyleSheet(QStringLiteral(""));
        Save_Compression_Config = new QPushButton(frame_IN_set_5);
        Save_Compression_Config->setObjectName(QStringLiteral("Save_Compression_Config"));
        Save_Compression_Config->setEnabled(false);
        Save_Compression_Config->setGeometry(QRect(550, 240, 100, 40));
        Save_Compression_Config->setFont(font);
        Save_Compression_Config->setStyleSheet(QStringLiteral(""));
        label_24 = new QLabel(frame_IN_set_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(470, 210, 70, 30));
        QFont font18;
        font18.setPointSize(14);
        font18.setBold(true);
        font18.setWeight(75);
        label_24->setFont(font18);
        label_24->setStyleSheet(QStringLiteral(""));
        label_24->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(frame_IN_set_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(400, 210, 60, 30));
        label_23->setFont(font18);
        label_23->setStyleSheet(QStringLiteral(""));
        label_23->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(frame_IN_set_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(290, 210, 110, 30));
        label_22->setFont(font18);
        label_22->setStyleSheet(QStringLiteral(""));
        label_22->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(frame_IN_set_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(160, 210, 140, 30));
        label_21->setFont(font18);
        label_21->setStyleSheet(QStringLiteral(""));
        label_21->setAlignment(Qt::AlignCenter);
        textBrowser_12 = new QTextBrowser(frame_IN_set_5);
        textBrowser_12->setObjectName(QStringLiteral("textBrowser_12"));
        textBrowser_12->setGeometry(QRect(10, 150, 640, 70));
        textBrowser_12->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_12->setFrameShape(QFrame::NoFrame);
        textBrowser_12->setFrameShadow(QFrame::Raised);
        textBrowser_12->setLineWidth(0);
        textBrowser_12->setMidLineWidth(0);
        textBrowser_12->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_12->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_5 = new QTextBrowser(frame_IN_set_5);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(10, 10, 640, 130));
        textBrowser_5->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_5->setFrameShape(QFrame::NoFrame);
        textBrowser_5->setFrameShadow(QFrame::Raised);
        textBrowser_5->setLineWidth(0);
        textBrowser_5->setMidLineWidth(0);
        textBrowser_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_12->raise();
        textBrowser_5->raise();
        Change->raise();
        Compression_Type->raise();
        Compression_none_auto->raise();
        Compression_Type_Value->raise();
        Status->raise();
        Save_Compression_Config->raise();
        label_24->raise();
        label_23->raise();
        label_22->raise();
        label_21->raise();
        tabWidget->addTab(Config, QString());
        frame_IN_set_4->raise();
        frame_IN_set->raise();
        test_Pack->raise();
        Snapshot_Comments->raise();
        label_28->raise();
        Remove_Comment->raise();
        Change_3->raise();
        frame_IN_set_2->raise();
        frame_IN_set_5->raise();
        NewArchiv = new QWidget();
        NewArchiv->setObjectName(QStringLiteral("NewArchiv"));
        label_18 = new QLabel(NewArchiv);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(610, 200, 360, 30));
        label_18->setFont(font18);
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_17 = new QLabel(NewArchiv);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(240, 200, 360, 30));
        label_17->setFont(font18);
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        BackUP_Path = new QPushButton(NewArchiv);
        BackUP_Path->setObjectName(QStringLiteral("BackUP_Path"));
        BackUP_Path->setEnabled(false);
        BackUP_Path->setGeometry(QRect(10, 230, 220, 40));
        BackUP_Path->setFont(font8);
        Archive_Key_File = new QComboBox(NewArchiv);
        Archive_Key_File->addItem(QString());
        Archive_Key_File->addItem(QString());
        Archive_Key_File->addItem(QString());
        Archive_Key_File->addItem(QString());
        Archive_Key_File->addItem(QString());
        Archive_Key_File->setObjectName(QStringLiteral("Archive_Key_File"));
        Archive_Key_File->setEnabled(false);
        Archive_Key_File->setGeometry(QRect(750, 410, 240, 40));
        Archive_Key_File->setStyleSheet(QStringLiteral(""));
        new_Archive_Name = new QLineEdit(NewArchiv);
        new_Archive_Name->setObjectName(QStringLiteral("new_Archive_Name"));
        new_Archive_Name->setEnabled(false);
        new_Archive_Name->setGeometry(QRect(610, 230, 380, 40));
        new_Archive_Name->setFont(font);
        new_Archive_Name->setStyleSheet(QStringLiteral(""));
        new_Archive_Name->setReadOnly(false);
        Archive_Key = new QLineEdit(NewArchiv);
        Archive_Key->setObjectName(QStringLiteral("Archive_Key"));
        Archive_Key->setEnabled(false);
        Archive_Key->setGeometry(QRect(10, 410, 690, 40));
        Archive_Key->setFont(font);
        Archive_Key->setStyleSheet(QStringLiteral(""));
        Archive_Key->setReadOnly(false);
        label_19 = new QLabel(NewArchiv);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setEnabled(true);
        label_19->setGeometry(QRect(10, 380, 600, 30));
        label_19->setFont(font18);
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Create = new QPushButton(NewArchiv);
        Create->setObjectName(QStringLiteral("Create"));
        Create->setEnabled(false);
        Create->setGeometry(QRect(830, 510, 160, 40));
        Create->setFont(font8);
        Create->setStyleSheet(QStringLiteral(""));
        label_27 = new QLabel(NewArchiv);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(700, 410, 50, 40));
        label_27->setFont(font18);
        label_27->setLayoutDirection(Qt::LeftToRight);
        label_27->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(NewArchiv);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(750, 380, 240, 30));
        label_20->setFont(font18);
        label_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        new_Archive_Path = new QLineEdit(NewArchiv);
        new_Archive_Path->setObjectName(QStringLiteral("new_Archive_Path"));
        new_Archive_Path->setEnabled(false);
        new_Archive_Path->setGeometry(QRect(240, 230, 360, 40));
        new_Archive_Path->setFont(font);
        new_Archive_Path->setStyleSheet(QStringLiteral(""));
        new_Archive_Path->setReadOnly(true);
        textBrowser_6 = new QTextBrowser(NewArchiv);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(0, 10, 970, 150));
        textBrowser_6->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_6->setFrameShape(QFrame::NoFrame);
        textBrowser_6->setFrameShadow(QFrame::Raised);
        textBrowser_6->setLineWidth(0);
        textBrowser_6->setMidLineWidth(0);
        textBrowser_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        progressBar_4 = new QProgressBar(NewArchiv);
        progressBar_4->setObjectName(QStringLiteral("progressBar_4"));
        progressBar_4->setEnabled(false);
        progressBar_4->setGeometry(QRect(10, 460, 980, 10));
        QFont font19;
        font19.setPointSize(10);
        font19.setBold(true);
        font19.setWeight(75);
        progressBar_4->setFont(font19);
        progressBar_4->setStyleSheet(QLatin1String("QProgressBar {\n"
"background: #aaaaaa;\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-radius: 5px;\n"
"color: rgb(255,255,255);\n"
"}\n"
"QProgressBar::chunk:horizontal {\n"
"background: qlineargradient( x1:1,y1:1,x2:2,y2:2,stop: 0 #ff0000, stop: 1 #aa0000);\n"
"border-radius: 3px;\n"
"}"));
        progressBar_4->setMaximum(100);
        progressBar_4->setValue(0);
        progressBar_4->setAlignment(Qt::AlignCenter);
        progressBar_4->setOrientation(Qt::Horizontal);
        New_Archive = new QPushButton(NewArchiv);
        New_Archive->setObjectName(QStringLiteral("New_Archive"));
        New_Archive->setEnabled(true);
        New_Archive->setGeometry(QRect(10, 180, 220, 40));
        New_Archive->setFont(font);
        textBrowser_7 = new QTextBrowser(NewArchiv);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(0, 310, 970, 70));
        textBrowser_7->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_7->setFrameShape(QFrame::NoFrame);
        textBrowser_7->setFrameShadow(QFrame::Raised);
        textBrowser_7->setLineWidth(0);
        textBrowser_7->setMidLineWidth(0);
        textBrowser_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_7->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_8 = new QTextBrowser(NewArchiv);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(10, 470, 810, 80));
        textBrowser_8->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_8->setFrameShape(QFrame::NoFrame);
        textBrowser_8->setFrameShadow(QFrame::Raised);
        textBrowser_8->setLineWidth(0);
        textBrowser_8->setMidLineWidth(0);
        textBrowser_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_8->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        line_8 = new QFrame(NewArchiv);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(-20, 290, 1030, 4));
        line_8->setFrameShadow(QFrame::Sunken);
        line_8->setLineWidth(2);
        line_8->setMidLineWidth(2);
        line_8->setFrameShape(QFrame::HLine);
        tabWidget->addTab(NewArchiv, QString());
        textBrowser_7->raise();
        label_18->raise();
        label_17->raise();
        BackUP_Path->raise();
        Archive_Key_File->raise();
        new_Archive_Name->raise();
        Archive_Key->raise();
        label_19->raise();
        Create->raise();
        label_27->raise();
        label_20->raise();
        new_Archive_Path->raise();
        textBrowser_6->raise();
        textBrowser_8->raise();
        line_8->raise();
        progressBar_4->raise();
        New_Archive->raise();
        Help = new QWidget();
        Help->setObjectName(QStringLiteral("Help"));
        textBrowser_13 = new QTextBrowser(Help);
        textBrowser_13->setObjectName(QStringLiteral("textBrowser_13"));
        textBrowser_13->setGeometry(QRect(110, 10, 860, 100));
        textBrowser_13->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_13->setFrameShape(QFrame::NoFrame);
        textBrowser_13->setFrameShadow(QFrame::Raised);
        textBrowser_13->setLineWidth(0);
        textBrowser_13->setMidLineWidth(0);
        textBrowser_13->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_13->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_14 = new QTextBrowser(Help);
        textBrowser_14->setObjectName(QStringLiteral("textBrowser_14"));
        textBrowser_14->setGeometry(QRect(0, 330, 980, 220));
        textBrowser_14->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_14->setFrameShape(QFrame::NoFrame);
        textBrowser_14->setFrameShadow(QFrame::Raised);
        textBrowser_14->setLineWidth(0);
        textBrowser_14->setMidLineWidth(0);
        textBrowser_14->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_14->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        line_6 = new QFrame(Help);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(-30, 120, 1030, 4));
        line_6->setFrameShadow(QFrame::Sunken);
        line_6->setLineWidth(2);
        line_6->setMidLineWidth(2);
        line_6->setFrameShape(QFrame::HLine);
        line_9 = new QFrame(Help);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(-30, 310, 1030, 4));
        line_9->setFrameShadow(QFrame::Sunken);
        line_9->setLineWidth(2);
        line_9->setMidLineWidth(2);
        line_9->setFrameShape(QFrame::HLine);
        textBrowser_15 = new QTextBrowser(Help);
        textBrowser_15->setObjectName(QStringLiteral("textBrowser_15"));
        textBrowser_15->setGeometry(QRect(10, 130, 970, 170));
        textBrowser_15->setStyleSheet(QStringLiteral("background:rgba(0,0,0,0);"));
        textBrowser_15->setFrameShape(QFrame::NoFrame);
        textBrowser_15->setFrameShadow(QFrame::Raised);
        textBrowser_15->setLineWidth(0);
        textBrowser_15->setMidLineWidth(0);
        textBrowser_15->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_15->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        logo = new QLabel(Help);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(20, 20, 80, 80));
        logo->setFont(font19);
        logo->setStyleSheet(QStringLiteral(""));
        logo->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(Help, QString());
        wait = new QLabel(Main);
        wait->setObjectName(QStringLiteral("wait"));
        wait->setGeometry(QRect(-30, -640, 1040, 640));
        QFont font20;
        font20.setPointSize(24);
        font20.setBold(true);
        font20.setWeight(75);
        wait->setFont(font20);
        wait->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 200);\n"
"color:#FFFFFF;"));
        wait->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        wait->setAlignment(Qt::AlignCenter);
        loadBAR_2 = new QProgressBar(Main);
        loadBAR_2->setObjectName(QStringLiteral("loadBAR_2"));
        loadBAR_2->setGeometry(QRect(-10, -150, 1040, 20));
        loadBAR_2->setLayoutDirection(Qt::LeftToRight);
        loadBAR_2->setValue(50);
        loadBAR = new QProgressBar(Main);
        loadBAR->setObjectName(QStringLiteral("loadBAR"));
        loadBAR->setGeometry(QRect(-10, -160, 1040, 10));
        loadBAR->setLayoutDirection(Qt::LeftToRight);
        loadBAR->setValue(50);
        loadBAR_3 = new QProgressBar(Main);
        loadBAR_3->setObjectName(QStringLiteral("loadBAR_3"));
        loadBAR_3->setGeometry(QRect(-10, -130, 1040, 10));
        loadBAR_3->setLayoutDirection(Qt::LeftToRight);
        loadBAR_3->setValue(50);
        pathInfo_11 = new QLineEdit(Main);
        pathInfo_11->setObjectName(QStringLiteral("pathInfo_11"));
        pathInfo_11->setGeometry(QRect(30, -290, 280, 40));
        pathInfo_11->setFont(font16);
        pathInfo_11->setStyleSheet(QStringLiteral("background:#555; color:#FFFFFF; margin-top: -2px;"));
        pathInfo_11->setReadOnly(true);
        frame_login = new QFrame(Main);
        frame_login->setObjectName(QStringLiteral("frame_login"));
        frame_login->setGeometry(QRect(210, -270, 540, 80));
        frame_login->setStyleSheet(QLatin1String("QFrame {\n"
"background: #03224c;\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"color: rgb(255,255,255);\n"
"background: qlineargradient(x1:0.7, y1:0, x2: 1, y2: 1, stop: 0 #222222, stop: 1 #555555);\n"
"}"));
        frame_login->setFrameShape(QFrame::StyledPanel);
        frame_login->setFrameShadow(QFrame::Raised);
        pass = new QLineEdit(frame_login);
        pass->setObjectName(QStringLiteral("pass"));
        pass->setGeometry(QRect(30, 20, 400, 42));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pass->sizePolicy().hasHeightForWidth());
        pass->setSizePolicy(sizePolicy);
        pass->setFont(font10);
        pass->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0,63);\n"
"border-top: 1px solid #000000;\n"
"border-left: 1px solid #000000;\n"
"border-bottom: 1px solid #ffffff;\n"
"border-right: 1px solid #ffffff;\n"
"color:#ffffff;"));
        pass->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pass->setEchoMode(QLineEdit::Password);
        pass->setReadOnly(false);
        pass_OK = new QPushButton(frame_login);
        pass_OK->setObjectName(QStringLiteral("pass_OK"));
        pass_OK->setEnabled(false);
        pass_OK->setGeometry(QRect(440, 20, 90, 40));
        pass_OK->setFont(font);
        pass_OK->setStyleSheet(QStringLiteral(""));
        pass_OK->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_pass = new QLabel(frame_login);
        label_pass->setObjectName(QStringLiteral("label_pass"));
        label_pass->setGeometry(QRect(30, 20, 380, 40));
        label_pass->setFont(font8);
        label_pass->setStyleSheet(QLatin1String("color:#FFFFFF;\n"
"border:0px;\n"
"background:rgba(0,0,0,0);"));
        label_pass->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_pass->setAlignment(Qt::AlignCenter);
        loading = new QLabel(frame_login);
        loading->setObjectName(QStringLiteral("loading"));
        loading->setGeometry(QRect(-100, -110, 710, 110));
        loading->setFont(font18);
        loading->setStyleSheet(QLatin1String("background:rgba(0,0,0,0);\n"
"color:rgba(255,255,255,31);"));
        loading->setAlignment(Qt::AlignCenter);
        frame_login_info = new QFrame(frame_login);
        frame_login_info->setObjectName(QStringLiteral("frame_login_info"));
        frame_login_info->setGeometry(QRect(20, -70, 410, 60));
        frame_login_info->setFont(font10);
        frame_login_info->setStyleSheet(QLatin1String("QFrame {\n"
"background: #03224c;\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"color: rgb(0,0,0);\n"
"background: qlineargradient(x1:0.7, y1:0, x2: 1, y2: 1, stop: 0 #CCCCCC, stop: 1 #FFFFFF);\n"
"}"));
        frame_login_info->setFrameShape(QFrame::StyledPanel);
        frame_login_info->setFrameShadow(QFrame::Raised);
        loading_2 = new QLabel(frame_login_info);
        loading_2->setObjectName(QStringLiteral("loading_2"));
        loading_2->setGeometry(QRect(-100, -110, 710, 110));
        loading_2->setFont(font18);
        loading_2->setStyleSheet(QLatin1String("background:rgba(0,0,0,0);\n"
"color:rgba(255,255,255,31);"));
        loading_2->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(frame_login_info);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 10, 410, 40));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("border:0px;\n"
"background:rgba(0,0,0,0);"));
        label_pass_EXPORT = new QLabel(frame_login);
        label_pass_EXPORT->setObjectName(QStringLiteral("label_pass_EXPORT"));
        label_pass_EXPORT->setGeometry(QRect(30, -70, 380, 40));
        QFont font21;
        font21.setPointSize(9);
        font21.setBold(true);
        font21.setWeight(75);
        label_pass_EXPORT->setFont(font21);
        label_pass_EXPORT->setStyleSheet(QLatin1String("color:#FFFFFF;\n"
"border:0px;\n"
"background:rgba(0,0,0,0);"));
        label_pass_EXPORT->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_pass_EXPORT->setAlignment(Qt::AlignCenter);
        label_pass_EXPORT->raise();
        label_pass->raise();
        pass_OK->raise();
        pass->raise();
        frame_login_info->raise();
        loading->raise();
        login_black_BG = new QFrame(Main);
        login_black_BG->setObjectName(QStringLiteral("login_black_BG"));
        login_black_BG->setGeometry(QRect(-20, -940, 1040, 910));
        login_black_BG->setStyleSheet(QStringLiteral("background:rgba(0,0,0,230);"));
        login_black_BG->setFrameShape(QFrame::StyledPanel);
        login_black_BG->setFrameShadow(QFrame::Raised);
        add_NEW_BackUP = new QPushButton(login_black_BG);
        add_NEW_BackUP->setObjectName(QStringLiteral("add_NEW_BackUP"));
        add_NEW_BackUP->setEnabled(true);
        add_NEW_BackUP->setGeometry(QRect(250, 438, 540, 50));
        add_NEW_BackUP->setFont(font);
        add_NEW_BackUP->setStyleSheet(QStringLiteral(""));
        remove_BackUP = new QPushButton(login_black_BG);
        remove_BackUP->setObjectName(QStringLiteral("remove_BackUP"));
        remove_BackUP->setEnabled(true);
        remove_BackUP->setGeometry(QRect(250, 488, 540, 50));
        remove_BackUP->setFont(font);
        remove_BackUP->setStyleSheet(QStringLiteral(""));
        frame_login_2 = new QFrame(Main);
        frame_login_2->setObjectName(QStringLiteral("frame_login_2"));
        frame_login_2->setGeometry(QRect(260, -390, 540, 40));
        frame_login_2->setStyleSheet(QLatin1String("QFrame {\n"
"background: #03224c;\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"color: rgb(255,255,255);\n"
"background: qlineargradient(x1:0.7, y1:0, x2: 1, y2: 1, stop: 0 #550000, stop: 1 #aa0000);\n"
"}"));
        frame_login_2->setFrameShape(QFrame::StyledPanel);
        frame_login_2->setFrameShadow(QFrame::Raised);
        ERROR = new QLabel(frame_login_2);
        ERROR->setObjectName(QStringLiteral("ERROR"));
        ERROR->setGeometry(QRect(10, 0, 520, 40));
        ERROR->setFont(font);
        ERROR->setStyleSheet(QLatin1String("border:0px;\n"
"background:rgba(0,0,0,0);"));
        ERROR->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        all_Profiles = new QListWidget(Main);
        all_Profiles->setObjectName(QStringLiteral("all_Profiles"));
        all_Profiles->setEnabled(true);
        all_Profiles->setGeometry(QRect(230, -350, 540, 260));
        all_Profiles->setFont(font8);
        all_Profiles->setStyleSheet(QLatin1String("QListWidget {\n"
"background: #03224c;\n"
"padding: 2px;\n"
"text-align: center;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"color: rgb(255,255,255);\n"
"background: qlineargradient(x1:0.7, y1:0, x2: 1, y2: 1, stop: 0 #333333, stop: 1 #444444);\n"
"}"));
        pathInfo_2 = new QLineEdit(Main);
        pathInfo_2->setObjectName(QStringLiteral("pathInfo_2"));
        pathInfo_2->setEnabled(false);
        pathInfo_2->setGeometry(QRect(-400, 90, 280, 40));
        pathInfo_2->setFont(font16);
        pathInfo_2->setStyleSheet(QStringLiteral(""));
        pathInfo_2->setReadOnly(true);
        pathInfo_3 = new QLineEdit(Main);
        pathInfo_3->setObjectName(QStringLiteral("pathInfo_3"));
        pathInfo_3->setEnabled(false);
        pathInfo_3->setGeometry(QRect(-400, 140, 280, 40));
        pathInfo_3->setFont(font16);
        pathInfo_3->setStyleSheet(QStringLiteral(""));
        pathInfo_3->setReadOnly(true);
        loading_GIF = new QLabel(Main);
        loading_GIF->setObjectName(QStringLiteral("loading_GIF"));
        loading_GIF->setGeometry(QRect(400, -210, 200, 200));
        fade_t = new QLabel(Main);
        fade_t->setObjectName(QStringLiteral("fade_t"));
        fade_t->setEnabled(true);
        fade_t->setGeometry(QRect(-1200, -10, 1050, 270));
        fade_t->setStyleSheet(QLatin1String("QLabel {\n"
"border-width: 0px;\n"
"background: qlineargradient(x2:1, y1:1, x1:1, y1:1, stop: 0 rgba(0,0,31,0), stop: 1 rgba(0,0,63,255));\n"
"}"));
        fade_b = new QLabel(Main);
        fade_b->setObjectName(QStringLiteral("fade_b"));
        fade_b->setGeometry(QRect(-1200, 350, 1050, 270));
        fade_b->setStyleSheet(QLatin1String("QLabel {\n"
"border-width: 0px;\n"
"background: qlineargradient(x2:1, y1:1, x1:1, y1:1, stop: 0 rgba(120,200,255,255), stop: 1 rgba(0,0,0,0));\n"
"}"));
        BORG_BackUP_GUI->setCentralWidget(Main);
        tabWidget->raise();
        pathInfo_11->raise();
        login_black_BG->raise();
        frame_login->raise();
        frame_login_2->raise();
        all_Profiles->raise();
        pathInfo_2->raise();
        pathInfo_3->raise();
        fade_t->raise();
        fade_b->raise();
        wait->raise();
        loading_GIF->raise();
        loadBAR->raise();
        loadBAR_2->raise();
        loadBAR_3->raise();

        retranslateUi(BORG_BackUP_GUI);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BORG_BackUP_GUI);
    } // setupUi

    void retranslateUi(QMainWindow *BORG_BackUP_GUI)
    {
        BORG_BackUP_GUI->setWindowTitle(QApplication::translate("BORG_BackUP_GUI", "BORG_BackUP_GUI", nullptr));
        actionMount->setText(QApplication::translate("BORG_BackUP_GUI", "&Mount", nullptr));
        actionUnmount->setText(QApplication::translate("BORG_BackUP_GUI", "&Unmount", nullptr));
        actionmore_Details->setText(QApplication::translate("BORG_BackUP_GUI", "more &Details", nullptr));
        actionBackUP_NOW->setText(QApplication::translate("BORG_BackUP_GUI", "&BackUP NOW", nullptr));
        actionExit->setText(QApplication::translate("BORG_BackUP_GUI", "&Exit", nullptr));
        actionAbout->setText(QApplication::translate("BORG_BackUP_GUI", "&About", nullptr));
        New->setText(QApplication::translate("BORG_BackUP_GUI", "&New", nullptr));
        About_Menu->setText(QApplication::translate("BORG_BackUP_GUI", "&About", nullptr));
        Exit->setText(QApplication::translate("BORG_BackUP_GUI", "&Exit", nullptr));
        Create_a_new_BackUP_point_Menu->setText(QApplication::translate("BORG_BackUP_GUI", "&Save a Snapshot", nullptr));
        Mount_Menu->setText(QApplication::translate("BORG_BackUP_GUI", "&Mount", nullptr));
        Unmount_Menu->setText(QApplication::translate("BORG_BackUP_GUI", "&Unmount", nullptr));
        Details_Menu->setText(QApplication::translate("BORG_BackUP_GUI", "&Details", nullptr));
        actionDelete->setText(QApplication::translate("BORG_BackUP_GUI", "Delete Section", nullptr));
        Schedule_Section_Menu->setText(QApplication::translate("BORG_BackUP_GUI", "&Schedule Section", nullptr));
        Delete_Section_Menu->setText(QApplication::translate("BORG_BackUP_GUI", "&Delete Section", nullptr));
        Configuration_Menu->setText(QApplication::translate("BORG_BackUP_GUI", "C&onfiguration", nullptr));
        Borg_Homepage_Menu->setText(QApplication::translate("BORG_BackUP_GUI", "&Borg Homepage", nullptr));
        Tutorial_Menu->setText(QApplication::translate("BORG_BackUP_GUI", "&Tutorial", nullptr));
        actionLoad_Archive->setText(QApplication::translate("BORG_BackUP_GUI", "Load Archive", nullptr));
        Set_Archive->setText(QApplication::translate("BORG_BackUP_GUI", "&Select a BackUP", nullptr));
        Open->setText(QApplication::translate("BORG_BackUP_GUI", "&Open", nullptr));
        progressBar_2->setFormat(QApplication::translate("BORG_BackUP_GUI", "%p%", nullptr));
        label_3->setText(QApplication::translate("BORG_BackUP_GUI", "Deduplicated size", nullptr));
        Info->setText(QString());
        BackUP_NOW->setText(QApplication::translate("BORG_BackUP_GUI", "Snapshot", nullptr));
        Info_2->setText(QString());
        label->setText(QApplication::translate("BORG_BackUP_GUI", "Original size", nullptr));
        progressBar->setFormat(QApplication::translate("BORG_BackUP_GUI", "%p%", nullptr));
        progressBar_3->setFormat(QApplication::translate("BORG_BackUP_GUI", "%p%", nullptr));
        Info_3->setText(QString());
        label_2->setText(QApplication::translate("BORG_BackUP_GUI", "Compressed size", nullptr));
        Unmount->setText(QApplication::translate("BORG_BackUP_GUI", "Unmount", nullptr));
        Mount->setText(QApplication::translate("BORG_BackUP_GUI", "Mount", nullptr));
        openMount->setText(QApplication::translate("BORG_BackUP_GUI", "Open Mount", nullptr));
        Info_4->setText(QString());
        label_9->setText(QApplication::translate("BORG_BackUP_GUI", "Total chunks", nullptr));
        Info_5->setText(QString());
        label_10->setText(QApplication::translate("BORG_BackUP_GUI", "Unique chunks", nullptr));
        label_11->setText(QApplication::translate("BORG_BackUP_GUI", "Encryption", nullptr));
        Info_6->setText(QString());
        label_12->setText(QApplication::translate("BORG_BackUP_GUI", "Location:", nullptr));
        Info_8->setText(QString());
        Info_7->setText(QString());
        label_13->setText(QApplication::translate("BORG_BackUP_GUI", "Last Snapshot:", nullptr));
        label_14->setText(QString());
        textINFO->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monospace'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p></body></html>", nullptr));
        html->setText(QApplication::translate("BORG_BackUP_GUI", "Details", nullptr));
        Mount_Info->setText(QApplication::translate("BORG_BackUP_GUI", "Advanced features are not available as long as BackUP is mounted!", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(BackUP), QApplication::translate("BORG_BackUP_GUI", "&BackUP", nullptr));
        Save->setText(QApplication::translate("BORG_BackUP_GUI", "Save", nullptr));
        Remove_OUT->setText(QApplication::translate("BORG_BackUP_GUI", "Remove", nullptr));
        Add_File_OUT->setText(QApplication::translate("BORG_BackUP_GUI", "Add File", nullptr));
        Add_Dir_OUT->setText(QApplication::translate("BORG_BackUP_GUI", "Add Dir", nullptr));
        Add_File_IN->setText(QApplication::translate("BORG_BackUP_GUI", "Add File", nullptr));
        Add_Dir_IN->setText(QApplication::translate("BORG_BackUP_GUI", "Add Dir", nullptr));
        Remove_IN->setText(QApplication::translate("BORG_BackUP_GUI", "Remove", nullptr));
        pathInfo_7->setText(QApplication::translate("BORG_BackUP_GUI", "Ignore List", nullptr));
        pathInfo_18->setText(QApplication::translate("BORG_BackUP_GUI", "BackUP List", nullptr));
        Exclude_Caches->setText(QApplication::translate("BORG_BackUP_GUI", "Ex Caches", nullptr));
#ifndef QT_NO_TOOLTIP
        Unlocked_Selecton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Unlocked_Selecton->setText(QApplication::translate("BORG_BackUP_GUI", "Unlock", nullptr));
        Exclude_System->setText(QApplication::translate("BORG_BackUP_GUI", "Ex Sys +", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Selection), QApplication::translate("BORG_BackUP_GUI", "&Selection", nullptr));
        DELETE->setText(QApplication::translate("BORG_BackUP_GUI", "DELETE", nullptr));
        Check_Delete->setText(QString());
        label_4->setText(QApplication::translate("BORG_BackUP_GUI", "Confirmation code #", nullptr));
        Delete_Info_Details->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Monospace'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Delete), QApplication::translate("BORG_BackUP_GUI", "&Delete", nullptr));
        HH->setDisplayFormat(QApplication::translate("BORG_BackUP_GUI", "HH", nullptr));
        WD3->setText(QApplication::translate("BORG_BackUP_GUI", "We", nullptr));
        WD4->setText(QApplication::translate("BORG_BackUP_GUI", "Th", nullptr));
        WD7->setText(QApplication::translate("BORG_BackUP_GUI", "Su", nullptr));
        WD5->setText(QApplication::translate("BORG_BackUP_GUI", "Fr", nullptr));
        WD6->setText(QApplication::translate("BORG_BackUP_GUI", "Sa", nullptr));
        WD2->setText(QApplication::translate("BORG_BackUP_GUI", "Tu", nullptr));
        WD1->setText(QApplication::translate("BORG_BackUP_GUI", "Mo", nullptr));
        label_5->setText(QApplication::translate("BORG_BackUP_GUI", "Weekdays", nullptr));
        label_6->setText(QApplication::translate("BORG_BackUP_GUI", "Time", nullptr));
        Remove->setText(QApplication::translate("BORG_BackUP_GUI", "Remove all Cron Jobs", nullptr));
        AddChange->setText(QApplication::translate("BORG_BackUP_GUI", "Add this Cron Jobs", nullptr));
        mm->setDisplayFormat(QApplication::translate("BORG_BackUP_GUI", "mm", nullptr));
        label_15->setText(QApplication::translate("BORG_BackUP_GUI", "All available BackUP", nullptr));
        label_16->setText(QApplication::translate("BORG_BackUP_GUI", "Selected BackUP", nullptr));
        textBrowser_9->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:600;\">Create a schedule for an automatic Snapshot.<br /></span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">Select automatic BackUPs at certain times of the da</span><span style=\" font-family:'Droid Sans Thai';\">y.</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Schedule), QApplication::translate("BORG_BackUP_GUI", "&Timer", nullptr));
        label_28->setText(QApplication::translate("BORG_BackUP_GUI", "Snapshot Comments", nullptr));
        Remove_Comment->setText(QApplication::translate("BORG_BackUP_GUI", "Remove", nullptr));
#ifndef QT_NO_TOOLTIP
        Change_3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Change_3->setText(QApplication::translate("BORG_BackUP_GUI", "Change", nullptr));
        Export_Config->setText(QApplication::translate("BORG_BackUP_GUI", "Export", nullptr));
        label_29->setText(QApplication::translate("BORG_BackUP_GUI", "Export Profiles and Config", nullptr));
        textBrowser_16->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">All profiles and configurations can be exported.</span></p></body></html>", nullptr));
        textBrowser_11->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:16pt;\">Mount Folder<br /></span><span style=\" font-family:'Droid Sans Thai'; font-size:16pt; font-weight:400;\">To be able to mount a BackUP, a mount folder must be selected.</span></p></body></html>", nullptr));
        textBrowser_10->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:16pt;\">File Manager<br /></span><span style=\" font-family:'Droid Sans Thai'; font-size:16pt; font-weight:400;\">Your system has been searched for the most common file managers, please select one.</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        Change_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Change_2->setText(QApplication::translate("BORG_BackUP_GUI", "Change", nullptr));
        label_25->setText(QApplication::translate("BORG_BackUP_GUI", "File Managers", nullptr));
        label_26->setText(QApplication::translate("BORG_BackUP_GUI", "Mount Folder", nullptr));
#ifndef QT_NO_TOOLTIP
        avaiable_File_Managers->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pathInfo_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        Open_Mount_Folder->setToolTip(QApplication::translate("BORG_BackUP_GUI", "<html><head/><body><p>Select a folder.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        Open_Mount_Folder->setText(QApplication::translate("BORG_BackUP_GUI", "Open", nullptr));
        Save_Mount_Config->setText(QApplication::translate("BORG_BackUP_GUI", "Save", nullptr));
#ifndef QT_NO_TOOLTIP
        Change->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Change->setText(QApplication::translate("BORG_BackUP_GUI", "Change", nullptr));
        Compression_Type->setItemText(0, QApplication::translate("BORG_BackUP_GUI", "none", nullptr));
        Compression_Type->setItemText(1, QApplication::translate("BORG_BackUP_GUI", "lz4", nullptr));
        Compression_Type->setItemText(2, QApplication::translate("BORG_BackUP_GUI", "zstd", nullptr));
        Compression_Type->setItemText(3, QApplication::translate("BORG_BackUP_GUI", "zlib", nullptr));
        Compression_Type->setItemText(4, QApplication::translate("BORG_BackUP_GUI", "lzmb", nullptr));

#ifndef QT_NO_TOOLTIP
        Compression_Type->setToolTip(QApplication::translate("BORG_BackUP_GUI", "<html><head/><body><p><span style=\" font-family:'Inconsolata,monospace'; font-size:10pt; color:#000000;\">Compression Options</span></p><p><span style=\" font-family:'Inconsolata,monospace'; font-weight:400; color:#000000;\">Compression is lz4 by default. If you want something else, you have to specify what you want.</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        Compression_none_auto->setItemText(0, QApplication::translate("BORG_BackUP_GUI", "none", nullptr));
        Compression_none_auto->setItemText(1, QApplication::translate("BORG_BackUP_GUI", "auto", nullptr));

#ifndef QT_NO_TOOLTIP
        Compression_none_auto->setToolTip(QApplication::translate("BORG_BackUP_GUI", "<html><head/><body><p><span style=\" font-family:'Inconsolata,monospace'; font-size:10pt; color:#000000;\">Heuristic Mode</span></p><p><span style=\" font-family:'Inconsolata,monospace'; font-weight:400; color:#000000;\">Use a built-in heuristic to decide per chunk whether to compress or not. The heuristic tries with lz4 whether the data is compressible. For incompressible data, it will not use compression (uses &quot;none&quot;).</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Compression_Type_Value->setToolTip(QApplication::translate("BORG_BackUP_GUI", "<html><head/><body><p><span style=\" font-family:'Inconsolata,monospace'; font-size:10pt; color:#000000;\">Compression is lz4 by default. If you want something else, you have to specify what you want.</span></p><p><span style=\" font-family:'Inconsolata,monospace'; color:#000000; vertical-align:top;\">none = </span><span style=\" font-family:'Inconsolata,monospace'; font-weight:400; color:#000000; vertical-align:top;\">Do not compress.</span></p><p><span style=\" font-family:'Inconsolata,monospace'; color:#000000; vertical-align:top;\">lz4 = </span><span style=\" font-family:'Inconsolata,monospace'; font-weight:400; color:#000000; vertical-align:top;\">Use lz4 compression. Very high speed, very low compression. (default)</span></p><p><span style=\" font-family:'Inconsolata,monospace'; color:#000000; vertical-align:top;\">zstd[,L] = </span><span style=\" font-family:'Inconsolata,monospace'; font-weight:400; color:#000000; vertical-align:top;\">Use zstd (&quot;zstandard&quot;) compression, a modern wide-range al"
                        "gorithm. If you do not explicitely give the compression level L (ranging from 1 to 22), it will use level 3. Archives compressed with zstd are not compatible with borg &lt; 1.1.4.</span></p><p><span style=\" font-family:'Inconsolata,monospace'; color:#000000; vertical-align:top;\">zlib[,L] = </span><span style=\" font-family:'Inconsolata,monospace'; font-weight:400; color:#000000; vertical-align:top;\">Use zlib (&quot;gz&quot;) compression. Medium speed, medium compression. If you do not explicitely give the compression level L (ranging from 0 to 9), it will use level 6. Giving level 0 (means &quot;no compression&quot;, but still has zlib protocol overhead) is usually pointless, you better use &quot;none&quot; compression.</span></p><p><span style=\" font-family:'Inconsolata,monospace'; color:#000000; vertical-align:top;\">lzma[,L] = </span><span style=\" font-family:'Inconsolata,monospace'; font-weight:400; color:#000000; vertical-align:top;\">Use lzma (&quot;xz&quot;) compression. Low speed, high compression"
                        ". If you do not explicitely give the compression level L (ranging from 0 to 9), it will use level 6. Giving levels above 6 is pointless and counterproductive because it does not compress better due to the buffer size used by borg - but it wastes lots of CPU cycles and RAM.</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        Status->setItemText(0, QApplication::translate("BORG_BackUP_GUI", "off", nullptr));
        Status->setItemText(1, QApplication::translate("BORG_BackUP_GUI", "on", nullptr));

#ifndef QT_NO_TOOLTIP
        Status->setToolTip(QApplication::translate("BORG_BackUP_GUI", "<html><head/><body><p><span style=\" font-family:'Inconsolata,monospace'; font-size:10pt; color:#000000;\">Extended status information</span></p><p><span style=\" font-family:'Inconsolata,monospace'; color:#000000; vertical-align:top;\">on = </span><span style=\" font-family:'Inconsolata,monospace'; font-weight:400; color:#000000; vertical-align:top;\">Display complete status information from BackUP when BORG BackUP GUI is started from the command line.</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        Save_Compression_Config->setText(QApplication::translate("BORG_BackUP_GUI", "Save", nullptr));
        label_24->setText(QApplication::translate("BORG_BackUP_GUI", "Status", nullptr));
        label_23->setText(QApplication::translate("BORG_BackUP_GUI", "Ratio", nullptr));
        label_22->setText(QApplication::translate("BORG_BackUP_GUI", "Heuristic", nullptr));
        label_21->setText(QApplication::translate("BORG_BackUP_GUI", "Compression", nullptr));
        textBrowser_12->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:16pt; font-weight:400;\">Compression: [</span><span style=\" font-family:'Droid Sans Thai'; font-size:16pt;\">lz4</span><span style=\" font-family:'Droid Sans Thai'; font-size:16pt; font-weight:400;\">]</span><span style=\" font-family:'Droid Sans Thai'; font-size:16pt;\">   </span><span style=\" font-family:'Droid Sans Thai'; font-size:16pt; font-weight:400;\">Heuristic: [</span><span style=\" font-family:'Droid Sans Thai'; font-size:16pt;\">auto</span><span style=\" font-family:'Droid S"
                        "ans Thai'; font-size:16pt; font-weight:400;\">]   Status: [</span><span style=\" font-family:'Droid Sans Thai'; font-size:16pt;\">off</span><span style=\" font-family:'Droid Sans Thai'; font-size:16pt; font-weight:400;\">]<br /></span><span style=\" font-family:'Droid Sans Thai'; font-size:16pt; font-weight:400; font-style:italic;\">You can also change compressions for your snapshots afterwards.</span></p></body></html>", nullptr));
        textBrowser_5->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">Compression</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:16pt; font-weight:400;\">Different compressions can be selected, which is best for your backup as well as the backup medium and the respective connection to it, can vary greatly. </span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Config), QApplication::translate("BORG_BackUP_GUI", "&Config", nullptr));
        label_18->setText(QApplication::translate("BORG_BackUP_GUI", "BackUP Name", nullptr));
        label_17->setText(QApplication::translate("BORG_BackUP_GUI", "BackUP Storage Path", nullptr));
#ifndef QT_NO_TOOLTIP
        BackUP_Path->setToolTip(QApplication::translate("BORG_BackUP_GUI", "<html><head/><body><p>Select a folder.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        BackUP_Path->setText(QApplication::translate("BORG_BackUP_GUI", "BackUP Path", nullptr));
        Archive_Key_File->setItemText(0, QApplication::translate("BORG_BackUP_GUI", "none", nullptr));
        Archive_Key_File->setItemText(1, QApplication::translate("BORG_BackUP_GUI", "1024++", nullptr));
        Archive_Key_File->setItemText(2, QApplication::translate("BORG_BackUP_GUI", "2048++", nullptr));
        Archive_Key_File->setItemText(3, QApplication::translate("BORG_BackUP_GUI", "4096++", nullptr));
        Archive_Key_File->setItemText(4, QApplication::translate("BORG_BackUP_GUI", "8192++", nullptr));

        new_Archive_Name->setText(QString());
        label_19->setText(QApplication::translate("BORG_BackUP_GUI", "Passphrase", nullptr));
#ifndef QT_NO_TOOLTIP
        Create->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Create->setText(QApplication::translate("BORG_BackUP_GUI", "Create", nullptr));
        label_27->setText(QApplication::translate("BORG_BackUP_GUI", "or", nullptr));
        label_20->setText(QApplication::translate("BORG_BackUP_GUI", "Passphrase Key", nullptr));
        textBrowser_6->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">Create a new Borg BackUP archive.<br /></span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\">For a new BackUP archive please choose the button </span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">NEW Archive</span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\">.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; t"
                        "ext-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\">Then select a path in which the archive should be created under </span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">BackUP Path</span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\">.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\">At </span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">BackUP Name</span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\"> enter the name of the backup you want to create.</span></p></body></html>", nullptr));
        progressBar_4->setFormat(QString());
#ifndef QT_NO_TOOLTIP
        New_Archive->setToolTip(QApplication::translate("BORG_BackUP_GUI", "<html><head/><body><p>Select a folder.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        New_Archive->setText(QApplication::translate("BORG_BackUP_GUI", "New Archive", nullptr));
        textBrowser_7->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\">Now you should enter a long password in the input field </span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">Passphrase</span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\"> or choose a key (</span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">Passphrase Key</span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\">) and its desired length.</span></p></body></html>", nullptr));
        textBrowser_8->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\">Then you can press</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">Create</span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\"> and a new empty Borg BackUP will be created for you. </span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(NewArchiv), QApplication::translate("BORG_BackUP_GUI", "&New Archive", nullptr));
        textBrowser_13->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">BORG BackUP GUI V 0.8</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\">This GUI is not foolproof, the user is forced to read the manual. </span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; t"
                        "ext-indent:0px; font-size:18pt; font-weight:400;\"><br /></p></body></html>", nullptr));
        textBrowser_14->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">Qt</span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\"> (Tools) and this program is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px; font-family:'Droid Sans Thai'; font-size:18pt; font-weig"
                        "ht:400;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">BORG BackUP GUI on GitHub:</span><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\"> </span><a href=\"https://github.com/MTrage/Borg-BackUP-GUI/\"><span style=\" font-size:18pt; font-weight:400; text-decoration: underline; color:#007af4;\">https://github.com/MTrage/Borg-BackUP-GUI/</span></a></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:5px; margin-left:5px; margin-right:5px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt;\">More about Borg BackUP under: </span><a href=\"https://www.borgbackup.org/\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400; text-decoration: underline; color:#007af4;\">https://www.borgbackup.org/</span></a></p></body></html>", nullptr));
        textBrowser_15->setHtml(QApplication::translate("BORG_BackUP_GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">This GUI should allow the user a simple and clear handling of Borg BackUP. </span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:400;\">It should also serve as motivation to give other Qt developers the opportunity to get started quickly and easily, both on Borg projects and when implementing new ideas.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px;"
                        " margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:400;\"><br /></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans Thai'; font-size:18pt; font-weight:400;\">I wish you lots of fun, Marc-Andr\303\251 Trag\303\251</span></p></body></html>", nullptr));
        logo->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Help), QApplication::translate("BORG_BackUP_GUI", "Help", nullptr));
        wait->setText(QApplication::translate("BORG_BackUP_GUI", "Mission is in progress, please wait!\n"
"\n"
"\n"
"\n"
"", nullptr));
        loadBAR_2->setFormat(QString());
        loadBAR->setFormat(QString());
        loadBAR_3->setFormat(QString());
#ifndef QT_NO_TOOLTIP
        pass_OK->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pass_OK->setText(QApplication::translate("BORG_BackUP_GUI", "OK", nullptr));
        label_pass->setText(QApplication::translate("BORG_BackUP_GUI", "Enter your PASSPHRASE", nullptr));
        loading->setText(QApplication::translate("BORG_BackUP_GUI", "Loading...", nullptr));
        loading_2->setText(QApplication::translate("BORG_BackUP_GUI", "Loading...", nullptr));
        label_8->setText(QApplication::translate("BORG_BackUP_GUI", " Check input \342\200\223 please wait...", nullptr));
        label_pass_EXPORT->setText(QApplication::translate("BORG_BackUP_GUI", "EXPORT PASSPHRASE MODUS", nullptr));
        add_NEW_BackUP->setText(QApplication::translate("BORG_BackUP_GUI", "Select a new BackUP", nullptr));
        remove_BackUP->setText(QApplication::translate("BORG_BackUP_GUI", "Remove BackUP from configuration", nullptr));
        ERROR->setText(QString());
        loading_GIF->setText(QString());
        fade_t->setText(QString());
        fade_b->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BORG_BackUP_GUI: public Ui_BORG_BackUP_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORG_BACKUP_GUI_H
