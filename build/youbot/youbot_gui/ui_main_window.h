/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *lewa;
    QVBoxLayout *Program;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLabel *program_label;
    QPushButton *edit;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *execute;
    QPushButton *pause;
    QPushButton *stop;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *previous;
    QPushButton *next;
    QPushButton *home;
    QLabel *logs_label;
    QListView *view_logging;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *run_driver;
    QPushButton *connect_master;
    QVBoxLayout *srodek;
    QVBoxLayout *punkty;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *points_label;
    QListView *points_list;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *save;
    QPushButton *edit_list;
    QPushButton *load_list;
    QVBoxLayout *xyz;
    QLabel *var_cord_label;
    QHBoxLayout *horizontalLayout_16;
    QLCDNumber *lcd_x;
    QLCDNumber *lcd_y;
    QLCDNumber *lcd_z;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *x_plus;
    QPushButton *y_plus;
    QPushButton *z_plus;
    QHBoxLayout *horizontalLayout_5;
    QLabel *x_label;
    QLabel *y_label;
    QLabel *z_label;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *x_minus;
    QPushButton *y_minus;
    QPushButton *z_minus;
    QVBoxLayout *rpy;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLCDNumber *lcd_roll;
    QLCDNumber *lcd_pitch;
    QLCDNumber *lcd_yaw;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *roll_plus;
    QPushButton *pitch_plus;
    QPushButton *yaw_plus;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *roll_minus;
    QPushButton *pitch_minus;
    QPushButton *yaw_minus;
    QVBoxLayout *joints;
    QLabel *var_q_label;
    QHBoxLayout *horizontalLayout_13;
    QLCDNumber *lcd_q1;
    QLCDNumber *lcd_q2;
    QLCDNumber *lcd_q3;
    QLCDNumber *lcd_q4;
    QLCDNumber *lcd_q5;
    QHBoxLayout *horizontalLayout;
    QPushButton *q1_plus;
    QPushButton *q2_plus;
    QPushButton *q3_plus;
    QPushButton *q4_plus;
    QPushButton *q5_plus;
    QHBoxLayout *horizontalLayout_3;
    QLabel *q1_label;
    QLabel *q2_label;
    QLabel *q3_label;
    QLabel *q4_label;
    QLabel *q5_label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *q1_minus;
    QPushButton *q2_minus;
    QPushButton *q3_minus;
    QPushButton *q4_minus;
    QPushButton *q5_minus;
    QVBoxLayout *prawa;
    QVBoxLayout *chwytak;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *gripper_open;
    QPushButton *gripper_close;
    QVBoxLayout *ustawienia;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_19;
    QRadioButton *elbow_up;
    QRadioButton *elbow_down;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_8;
    QLCDNumber *lcd_xyz_step;
    QSlider *krok_xyz;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_9;
    QLCDNumber *lcd_joints_step;
    QSlider *krok_zlacza;
    QVBoxLayout *inne;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QStringLiteral("MainWindowDesign"));
        MainWindowDesign->resize(1366, 704);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::Polish, QLocale::Poland));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QStringLiteral("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_17 = new QHBoxLayout(centralwidget);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        lewa = new QVBoxLayout();
        lewa->setObjectName(QStringLiteral("lewa"));
        Program = new QVBoxLayout();
        Program->setObjectName(QStringLiteral("Program"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_9->addWidget(label_5);

        program_label = new QLabel(centralwidget);
        program_label->setObjectName(QStringLiteral("program_label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        program_label->setFont(font);
        program_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(program_label);

        edit = new QPushButton(centralwidget);
        edit->setObjectName(QStringLiteral("edit"));

        horizontalLayout_9->addWidget(edit);


        Program->addLayout(horizontalLayout_9);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        execute = new QPushButton(centralwidget);
        execute->setObjectName(QStringLiteral("execute"));

        horizontalLayout_18->addWidget(execute);

        pause = new QPushButton(centralwidget);
        pause->setObjectName(QStringLiteral("pause"));

        horizontalLayout_18->addWidget(pause);

        stop = new QPushButton(centralwidget);
        stop->setObjectName(QStringLiteral("stop"));

        horizontalLayout_18->addWidget(stop);


        Program->addLayout(horizontalLayout_18);


        lewa->addLayout(Program);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        previous = new QPushButton(centralwidget);
        previous->setObjectName(QStringLiteral("previous"));

        horizontalLayout_7->addWidget(previous);

        next = new QPushButton(centralwidget);
        next->setObjectName(QStringLiteral("next"));

        horizontalLayout_7->addWidget(next);

        home = new QPushButton(centralwidget);
        home->setObjectName(QStringLiteral("home"));

        horizontalLayout_7->addWidget(home);


        verticalLayout_5->addLayout(horizontalLayout_7);


        lewa->addLayout(verticalLayout_5);

        logs_label = new QLabel(centralwidget);
        logs_label->setObjectName(QStringLiteral("logs_label"));
        logs_label->setFont(font);
        logs_label->setAlignment(Qt::AlignCenter);

        lewa->addWidget(logs_label);

        view_logging = new QListView(centralwidget);
        view_logging->setObjectName(QStringLiteral("view_logging"));

        lewa->addWidget(view_logging);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        run_driver = new QPushButton(centralwidget);
        run_driver->setObjectName(QStringLiteral("run_driver"));

        horizontalLayout_10->addWidget(run_driver);

        connect_master = new QPushButton(centralwidget);
        connect_master->setObjectName(QStringLiteral("connect_master"));

        horizontalLayout_10->addWidget(connect_master);


        lewa->addLayout(horizontalLayout_10);


        horizontalLayout_17->addLayout(lewa);

        srodek = new QVBoxLayout();
        srodek->setObjectName(QStringLiteral("srodek"));
        punkty = new QVBoxLayout();
        punkty->setObjectName(QStringLiteral("punkty"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        points_label = new QLabel(centralwidget);
        points_label->setObjectName(QStringLiteral("points_label"));
        points_label->setFont(font);
        points_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(points_label);


        verticalLayout_4->addLayout(horizontalLayout_11);

        points_list = new QListView(centralwidget);
        points_list->setObjectName(QStringLiteral("points_list"));

        verticalLayout_4->addWidget(points_list);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        save = new QPushButton(centralwidget);
        save->setObjectName(QStringLiteral("save"));

        horizontalLayout_12->addWidget(save);

        edit_list = new QPushButton(centralwidget);
        edit_list->setObjectName(QStringLiteral("edit_list"));

        horizontalLayout_12->addWidget(edit_list);

        load_list = new QPushButton(centralwidget);
        load_list->setObjectName(QStringLiteral("load_list"));

        horizontalLayout_12->addWidget(load_list);


        verticalLayout_4->addLayout(horizontalLayout_12);


        punkty->addLayout(verticalLayout_4);


        srodek->addLayout(punkty);

        xyz = new QVBoxLayout();
        xyz->setObjectName(QStringLiteral("xyz"));
        var_cord_label = new QLabel(centralwidget);
        var_cord_label->setObjectName(QStringLiteral("var_cord_label"));
        var_cord_label->setFont(font);
        var_cord_label->setAlignment(Qt::AlignCenter);

        xyz->addWidget(var_cord_label);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        lcd_x = new QLCDNumber(centralwidget);
        lcd_x->setObjectName(QStringLiteral("lcd_x"));
        lcd_x->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_16->addWidget(lcd_x);

        lcd_y = new QLCDNumber(centralwidget);
        lcd_y->setObjectName(QStringLiteral("lcd_y"));
        lcd_y->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_16->addWidget(lcd_y);

        lcd_z = new QLCDNumber(centralwidget);
        lcd_z->setObjectName(QStringLiteral("lcd_z"));
        lcd_z->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_16->addWidget(lcd_z);


        xyz->addLayout(horizontalLayout_16);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        x_plus = new QPushButton(centralwidget);
        x_plus->setObjectName(QStringLiteral("x_plus"));

        horizontalLayout_4->addWidget(x_plus);

        y_plus = new QPushButton(centralwidget);
        y_plus->setObjectName(QStringLiteral("y_plus"));

        horizontalLayout_4->addWidget(y_plus);

        z_plus = new QPushButton(centralwidget);
        z_plus->setObjectName(QStringLiteral("z_plus"));

        horizontalLayout_4->addWidget(z_plus);


        xyz->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        x_label = new QLabel(centralwidget);
        x_label->setObjectName(QStringLiteral("x_label"));
        x_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(x_label);

        y_label = new QLabel(centralwidget);
        y_label->setObjectName(QStringLiteral("y_label"));
        y_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(y_label);

        z_label = new QLabel(centralwidget);
        z_label->setObjectName(QStringLiteral("z_label"));
        z_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(z_label);


        xyz->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        x_minus = new QPushButton(centralwidget);
        x_minus->setObjectName(QStringLiteral("x_minus"));

        horizontalLayout_6->addWidget(x_minus);

        y_minus = new QPushButton(centralwidget);
        y_minus->setObjectName(QStringLiteral("y_minus"));

        horizontalLayout_6->addWidget(y_minus);

        z_minus = new QPushButton(centralwidget);
        z_minus->setObjectName(QStringLiteral("z_minus"));

        horizontalLayout_6->addWidget(z_minus);


        xyz->addLayout(horizontalLayout_6);


        srodek->addLayout(xyz);

        rpy = new QVBoxLayout();
        rpy->setObjectName(QStringLiteral("rpy"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lcd_roll = new QLCDNumber(centralwidget);
        lcd_roll->setObjectName(QStringLiteral("lcd_roll"));
        lcd_roll->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_8->addWidget(lcd_roll);

        lcd_pitch = new QLCDNumber(centralwidget);
        lcd_pitch->setObjectName(QStringLiteral("lcd_pitch"));
        lcd_pitch->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_8->addWidget(lcd_pitch);

        lcd_yaw = new QLCDNumber(centralwidget);
        lcd_yaw->setObjectName(QStringLiteral("lcd_yaw"));
        lcd_yaw->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_8->addWidget(lcd_yaw);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        roll_plus = new QPushButton(centralwidget);
        roll_plus->setObjectName(QStringLiteral("roll_plus"));

        horizontalLayout_14->addWidget(roll_plus);

        pitch_plus = new QPushButton(centralwidget);
        pitch_plus->setObjectName(QStringLiteral("pitch_plus"));

        horizontalLayout_14->addWidget(pitch_plus);

        yaw_plus = new QPushButton(centralwidget);
        yaw_plus->setObjectName(QStringLiteral("yaw_plus"));

        horizontalLayout_14->addWidget(yaw_plus);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_4);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        roll_minus = new QPushButton(centralwidget);
        roll_minus->setObjectName(QStringLiteral("roll_minus"));

        horizontalLayout_20->addWidget(roll_minus);

        pitch_minus = new QPushButton(centralwidget);
        pitch_minus->setObjectName(QStringLiteral("pitch_minus"));

        horizontalLayout_20->addWidget(pitch_minus);

        yaw_minus = new QPushButton(centralwidget);
        yaw_minus->setObjectName(QStringLiteral("yaw_minus"));

        horizontalLayout_20->addWidget(yaw_minus);


        verticalLayout_2->addLayout(horizontalLayout_20);


        verticalLayout_3->addLayout(verticalLayout_2);


        rpy->addLayout(verticalLayout_3);


        srodek->addLayout(rpy);

        joints = new QVBoxLayout();
        joints->setObjectName(QStringLiteral("joints"));
        var_q_label = new QLabel(centralwidget);
        var_q_label->setObjectName(QStringLiteral("var_q_label"));
        var_q_label->setFont(font);
        var_q_label->setAlignment(Qt::AlignCenter);

        joints->addWidget(var_q_label);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        lcd_q1 = new QLCDNumber(centralwidget);
        lcd_q1->setObjectName(QStringLiteral("lcd_q1"));
        lcd_q1->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_13->addWidget(lcd_q1);

        lcd_q2 = new QLCDNumber(centralwidget);
        lcd_q2->setObjectName(QStringLiteral("lcd_q2"));
        lcd_q2->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_13->addWidget(lcd_q2);

        lcd_q3 = new QLCDNumber(centralwidget);
        lcd_q3->setObjectName(QStringLiteral("lcd_q3"));
        lcd_q3->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_13->addWidget(lcd_q3);

        lcd_q4 = new QLCDNumber(centralwidget);
        lcd_q4->setObjectName(QStringLiteral("lcd_q4"));
        lcd_q4->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_13->addWidget(lcd_q4);

        lcd_q5 = new QLCDNumber(centralwidget);
        lcd_q5->setObjectName(QStringLiteral("lcd_q5"));
        lcd_q5->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_13->addWidget(lcd_q5);


        joints->addLayout(horizontalLayout_13);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        q1_plus = new QPushButton(centralwidget);
        q1_plus->setObjectName(QStringLiteral("q1_plus"));

        horizontalLayout->addWidget(q1_plus);

        q2_plus = new QPushButton(centralwidget);
        q2_plus->setObjectName(QStringLiteral("q2_plus"));

        horizontalLayout->addWidget(q2_plus);

        q3_plus = new QPushButton(centralwidget);
        q3_plus->setObjectName(QStringLiteral("q3_plus"));

        horizontalLayout->addWidget(q3_plus);

        q4_plus = new QPushButton(centralwidget);
        q4_plus->setObjectName(QStringLiteral("q4_plus"));

        horizontalLayout->addWidget(q4_plus);

        q5_plus = new QPushButton(centralwidget);
        q5_plus->setObjectName(QStringLiteral("q5_plus"));

        horizontalLayout->addWidget(q5_plus);


        joints->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        q1_label = new QLabel(centralwidget);
        q1_label->setObjectName(QStringLiteral("q1_label"));
        q1_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(q1_label);

        q2_label = new QLabel(centralwidget);
        q2_label->setObjectName(QStringLiteral("q2_label"));
        q2_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(q2_label);

        q3_label = new QLabel(centralwidget);
        q3_label->setObjectName(QStringLiteral("q3_label"));
        q3_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(q3_label);

        q4_label = new QLabel(centralwidget);
        q4_label->setObjectName(QStringLiteral("q4_label"));
        q4_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(q4_label);

        q5_label = new QLabel(centralwidget);
        q5_label->setObjectName(QStringLiteral("q5_label"));
        q5_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(q5_label);


        joints->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        q1_minus = new QPushButton(centralwidget);
        q1_minus->setObjectName(QStringLiteral("q1_minus"));

        horizontalLayout_2->addWidget(q1_minus);

        q2_minus = new QPushButton(centralwidget);
        q2_minus->setObjectName(QStringLiteral("q2_minus"));

        horizontalLayout_2->addWidget(q2_minus);

        q3_minus = new QPushButton(centralwidget);
        q3_minus->setObjectName(QStringLiteral("q3_minus"));

        horizontalLayout_2->addWidget(q3_minus);

        q4_minus = new QPushButton(centralwidget);
        q4_minus->setObjectName(QStringLiteral("q4_minus"));

        horizontalLayout_2->addWidget(q4_minus);

        q5_minus = new QPushButton(centralwidget);
        q5_minus->setObjectName(QStringLiteral("q5_minus"));

        horizontalLayout_2->addWidget(q5_minus);


        joints->addLayout(horizontalLayout_2);


        srodek->addLayout(joints);


        horizontalLayout_17->addLayout(srodek);

        prawa = new QVBoxLayout();
        prawa->setObjectName(QStringLiteral("prawa"));
        chwytak = new QVBoxLayout();
        chwytak->setObjectName(QStringLiteral("chwytak"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        chwytak->addWidget(label_6);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        gripper_open = new QPushButton(centralwidget);
        gripper_open->setObjectName(QStringLiteral("gripper_open"));

        horizontalLayout_21->addWidget(gripper_open);

        gripper_close = new QPushButton(centralwidget);
        gripper_close->setObjectName(QStringLiteral("gripper_close"));

        horizontalLayout_21->addWidget(gripper_close);


        chwytak->addLayout(horizontalLayout_21);


        prawa->addLayout(chwytak);

        ustawienia = new QVBoxLayout();
        ustawienia->setObjectName(QStringLiteral("ustawienia"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        ustawienia->addWidget(label_7);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        elbow_up = new QRadioButton(centralwidget);
        elbow_up->setObjectName(QStringLiteral("elbow_up"));
        elbow_up->setChecked(true);

        horizontalLayout_19->addWidget(elbow_up);

        elbow_down = new QRadioButton(centralwidget);
        elbow_down->setObjectName(QStringLiteral("elbow_down"));

        horizontalLayout_19->addWidget(elbow_down);


        ustawienia->addLayout(horizontalLayout_19);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_24->addWidget(label_8);

        lcd_xyz_step = new QLCDNumber(centralwidget);
        lcd_xyz_step->setObjectName(QStringLiteral("lcd_xyz_step"));

        horizontalLayout_24->addWidget(lcd_xyz_step);

        krok_xyz = new QSlider(centralwidget);
        krok_xyz->setObjectName(QStringLiteral("krok_xyz"));
        krok_xyz->setMinimum(1);
        krok_xyz->setMaximum(10);
        krok_xyz->setOrientation(Qt::Horizontal);

        horizontalLayout_24->addWidget(krok_xyz);


        ustawienia->addLayout(horizontalLayout_24);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_34->addWidget(label_9);

        lcd_joints_step = new QLCDNumber(centralwidget);
        lcd_joints_step->setObjectName(QStringLiteral("lcd_joints_step"));

        horizontalLayout_34->addWidget(lcd_joints_step);

        krok_zlacza = new QSlider(centralwidget);
        krok_zlacza->setObjectName(QStringLiteral("krok_zlacza"));
        krok_zlacza->setMinimum(1);
        krok_zlacza->setMaximum(20);
        krok_zlacza->setValue(1);
        krok_zlacza->setOrientation(Qt::Horizontal);
        krok_zlacza->setInvertedControls(false);

        horizontalLayout_34->addWidget(krok_zlacza);


        ustawienia->addLayout(horizontalLayout_34);


        prawa->addLayout(ustawienia);

        inne = new QVBoxLayout();
        inne->setObjectName(QStringLiteral("inne"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        inne->addItem(verticalSpacer);


        prawa->addLayout(inne);


        horizontalLayout_17->addLayout(prawa);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1366, 25));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "youBot", 0));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", 0));
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", 0));
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", 0));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", 0));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", 0));
        label_5->setText(QString());
        program_label->setText(QApplication::translate("MainWindowDesign", "Program", 0));
        edit->setText(QApplication::translate("MainWindowDesign", "Edytuj program", 0));
        execute->setText(QApplication::translate("MainWindowDesign", "Wykonaj program", 0));
        pause->setText(QApplication::translate("MainWindowDesign", "Wstrzymaj program", 0));
        stop->setText(QApplication::translate("MainWindowDesign", "Resetuj program", 0));
        previous->setText(QApplication::translate("MainWindowDesign", "Poprzedni krok", 0));
        next->setText(QApplication::translate("MainWindowDesign", "Nast\304\231pny krok", 0));
        home->setText(QApplication::translate("MainWindowDesign", "Pozycja domowa", 0));
        logs_label->setText(QApplication::translate("MainWindowDesign", "Logi", 0));
        run_driver->setText(QApplication::translate("MainWindowDesign", "W\305\202\304\205cz sterownik", 0));
        connect_master->setText(QApplication::translate("MainWindowDesign", "Po\305\202\304\205cz ze sterownikiem", 0));
        points_label->setText(QApplication::translate("MainWindowDesign", "Lista punkt\303\263w", 0));
        save->setText(QApplication::translate("MainWindowDesign", "Zapisz punkt", 0));
        edit_list->setText(QApplication::translate("MainWindowDesign", "Edytuj list\304\231", 0));
        load_list->setText(QApplication::translate("MainWindowDesign", "Wczytaj list\304\231", 0));
        var_cord_label->setText(QApplication::translate("MainWindowDesign", "Wsp\303\263\305\202rz\304\231dne X Y Z", 0));
        x_plus->setText(QApplication::translate("MainWindowDesign", "+", 0));
        y_plus->setText(QApplication::translate("MainWindowDesign", "+", 0));
        z_plus->setText(QApplication::translate("MainWindowDesign", "+", 0));
        x_label->setText(QApplication::translate("MainWindowDesign", "X", 0));
        y_label->setText(QApplication::translate("MainWindowDesign", "Y", 0));
        z_label->setText(QApplication::translate("MainWindowDesign", "Z", 0));
        x_minus->setText(QApplication::translate("MainWindowDesign", "-", 0));
        y_minus->setText(QApplication::translate("MainWindowDesign", "-", 0));
        z_minus->setText(QApplication::translate("MainWindowDesign", "-", 0));
        label->setText(QApplication::translate("MainWindowDesign", "K\304\205ty Roll Pitch Yaw", 0));
        roll_plus->setText(QApplication::translate("MainWindowDesign", "+", 0));
        pitch_plus->setText(QApplication::translate("MainWindowDesign", "+", 0));
        yaw_plus->setText(QApplication::translate("MainWindowDesign", "+", 0));
        label_4->setText(QApplication::translate("MainWindowDesign", "Roll", 0));
        label_3->setText(QApplication::translate("MainWindowDesign", "Pitch", 0));
        label_2->setText(QApplication::translate("MainWindowDesign", "Yaw", 0));
        roll_minus->setText(QApplication::translate("MainWindowDesign", "-", 0));
        pitch_minus->setText(QApplication::translate("MainWindowDesign", "-", 0));
        yaw_minus->setText(QApplication::translate("MainWindowDesign", "-", 0));
        var_q_label->setText(QApplication::translate("MainWindowDesign", "Zmienne konfiguracyjne", 0));
        q1_plus->setText(QApplication::translate("MainWindowDesign", "+", 0));
        q2_plus->setText(QApplication::translate("MainWindowDesign", "+", 0));
        q3_plus->setText(QApplication::translate("MainWindowDesign", "+", 0));
        q4_plus->setText(QApplication::translate("MainWindowDesign", "+", 0));
        q5_plus->setText(QApplication::translate("MainWindowDesign", "+", 0));
        q1_label->setText(QApplication::translate("MainWindowDesign", "Q1", 0));
        q2_label->setText(QApplication::translate("MainWindowDesign", "Q2", 0));
        q3_label->setText(QApplication::translate("MainWindowDesign", "Q3", 0));
        q4_label->setText(QApplication::translate("MainWindowDesign", "Q4", 0));
        q5_label->setText(QApplication::translate("MainWindowDesign", "Q5", 0));
        q1_minus->setText(QApplication::translate("MainWindowDesign", "-", 0));
        q2_minus->setText(QApplication::translate("MainWindowDesign", "-", 0));
        q3_minus->setText(QApplication::translate("MainWindowDesign", "-", 0));
        q4_minus->setText(QApplication::translate("MainWindowDesign", "-", 0));
        q5_minus->setText(QApplication::translate("MainWindowDesign", "-", 0));
        label_6->setText(QApplication::translate("MainWindowDesign", "Chwytak", 0));
        gripper_open->setText(QApplication::translate("MainWindowDesign", "Otw\303\263rz", 0));
        gripper_close->setText(QApplication::translate("MainWindowDesign", "Zamknij", 0));
        label_7->setText(QApplication::translate("MainWindowDesign", "Ustawienia", 0));
        elbow_up->setText(QApplication::translate("MainWindowDesign", "\305\201okie\304\207 - g\303\263ra", 0));
        elbow_down->setText(QApplication::translate("MainWindowDesign", "\305\201okie\304\207 - d\303\263\305\202", 0));
        label_8->setText(QApplication::translate("MainWindowDesign", "Krok XYZ", 0));
        label_9->setText(QApplication::translate("MainWindowDesign", "Krok w z\305\202\304\205czach", 0));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "youBot", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
