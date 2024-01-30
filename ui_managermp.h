/********************************************************************************
** Form generated from reading UI file 'managermp.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERMP_H
#define UI_MANAGERMP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagerMP
{
public:
    QAction *actionSign_out;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Home;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLineEdit *lineEdit_8;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_16;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_17;
    QLineEdit *lineEdit_10;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_18;
    QLineEdit *lineEdit_11;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_19;
    QLineEdit *lineEdit_12;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QLineEdit *lineEdit_6;
    QWidget *Reports;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QCalendarWidget *calendarWidget;
    QPushButton *deliveryRegister;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *EmployeeRegistration;
    QLabel *label_3;
    QPushButton *empRegistration;
    QLabel *noMatch;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_17;
    QRadioButton *adminRadio;
    QRadioButton *cashierRadio;
    QRadioButton *managerRadio;
    QWidget *layoutWidget3;
    QFormLayout *formLayout_2;
    QLabel *label_30;
    QLineEdit *empFName;
    QLabel *label_31;
    QLineEdit *empLName;
    QLabel *label_33;
    QLineEdit *empEmail;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *empPassword;
    QLabel *label_36;
    QLineEdit *empRepeatPassword;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_24;
    QLineEdit *empPhoneNum;
    QWidget *CustomerLoyalty;
    QLabel *label_4;
    QWidget *layoutWidget_3;
    QFormLayout *formLayout;
    QLabel *label_20;
    QLineEdit *custName;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *custMail;
    QLabel *label_23;
    QLineEdit *custAddress;
    QLabel *label_28;
    QLineEdit *custID;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_29;
    QLineEdit *custNumber;
    QPushButton *Register;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManagerMP)
    {
        if (ManagerMP->objectName().isEmpty())
            ManagerMP->setObjectName("ManagerMP");
        ManagerMP->resize(1920, 1080);
        ManagerMP->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionSign_out = new QAction(ManagerMP);
        actionSign_out->setObjectName("actionSign_out");
        centralwidget = new QWidget(ManagerMP);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1931, 1061));
        tabWidget->setFocusPolicy(Qt::NoFocus);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setIconSize(QSize(32, 32));
        tabWidget->setUsesScrollButtons(false);
        Home = new QWidget();
        Home->setObjectName("Home");
        label = new QLabel(Home);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 241, 41));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        layoutWidget = new QWidget(Home);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(340, 70, 251, 119));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        QFont font1;
        font1.setPointSize(12);
        label_6->setFont(font1);

        verticalLayout_2->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font1);

        horizontalLayout_2->addWidget(label_7);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setFont(font1);

        horizontalLayout_7->addWidget(label_14);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        sizePolicy1.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy1);
        lineEdit_7->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit_7);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setFont(font1);

        horizontalLayout_8->addWidget(label_15);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName("lineEdit_8");
        sizePolicy1.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy1);
        lineEdit_8->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_8);


        verticalLayout_2->addLayout(horizontalLayout_8);

        layoutWidget_2 = new QWidget(Home);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(630, 70, 251, 119));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        verticalLayout_3->addWidget(label_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font1);

        horizontalLayout_3->addWidget(label_9);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName("lineEdit_3");
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);
        lineEdit_3->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName("label_16");
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setFont(font1);

        horizontalLayout_9->addWidget(label_16);

        lineEdit_9 = new QLineEdit(layoutWidget_2);
        lineEdit_9->setObjectName("lineEdit_9");
        sizePolicy1.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy1);
        lineEdit_9->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_9);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName("label_17");
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setFont(font1);

        horizontalLayout_10->addWidget(label_17);

        lineEdit_10 = new QLineEdit(layoutWidget_2);
        lineEdit_10->setObjectName("lineEdit_10");
        sizePolicy1.setHeightForWidth(lineEdit_10->sizePolicy().hasHeightForWidth());
        lineEdit_10->setSizePolicy(sizePolicy1);
        lineEdit_10->setReadOnly(true);

        horizontalLayout_10->addWidget(lineEdit_10);


        verticalLayout_3->addLayout(horizontalLayout_10);

        layoutWidget_4 = new QWidget(Home);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(920, 70, 251, 119));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);

        verticalLayout_4->addWidget(label_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_11 = new QLabel(layoutWidget_4);
        label_11->setObjectName("label_11");
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFont(font1);

        horizontalLayout_4->addWidget(label_11);

        lineEdit_4 = new QLineEdit(layoutWidget_4);
        lineEdit_4->setObjectName("lineEdit_4");
        sizePolicy1.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy1);
        lineEdit_4->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_18 = new QLabel(layoutWidget_4);
        label_18->setObjectName("label_18");
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setFont(font1);

        horizontalLayout_11->addWidget(label_18);

        lineEdit_11 = new QLineEdit(layoutWidget_4);
        lineEdit_11->setObjectName("lineEdit_11");
        sizePolicy1.setHeightForWidth(lineEdit_11->sizePolicy().hasHeightForWidth());
        lineEdit_11->setSizePolicy(sizePolicy1);
        lineEdit_11->setReadOnly(true);

        horizontalLayout_11->addWidget(lineEdit_11);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_19 = new QLabel(layoutWidget_4);
        label_19->setObjectName("label_19");
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);
        label_19->setFont(font1);

        horizontalLayout_12->addWidget(label_19);

        lineEdit_12 = new QLineEdit(layoutWidget_4);
        lineEdit_12->setObjectName("lineEdit_12");
        sizePolicy1.setHeightForWidth(lineEdit_12->sizePolicy().hasHeightForWidth());
        lineEdit_12->setSizePolicy(sizePolicy1);
        lineEdit_12->setReadOnly(true);

        horizontalLayout_12->addWidget(lineEdit_12);


        verticalLayout_4->addLayout(horizontalLayout_12);

        layoutWidget1 = new QWidget(Home);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 70, 251, 119));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);

        horizontalLayout->addWidget(label_5);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName("lineEdit");
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font1);

        horizontalLayout_5->addWidget(label_12);

        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName("lineEdit_5");
        sizePolicy1.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy1);
        lineEdit_5->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName("label_13");
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFont(font1);

        horizontalLayout_6->addWidget(label_13);

        lineEdit_6 = new QLineEdit(layoutWidget1);
        lineEdit_6->setObjectName("lineEdit_6");
        sizePolicy1.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy1);
        lineEdit_6->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_6);

        QIcon icon(QIcon::fromTheme(QString::fromUtf8("applications-office")));
        tabWidget->addTab(Home, icon, QString());
        Reports = new QWidget();
        Reports->setObjectName("Reports");
        tabWidget_2 = new QTabWidget(Reports);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, 0, 1871, 1031));
        sizePolicy1.setHeightForWidth(tabWidget_2->sizePolicy().hasHeightForWidth());
        tabWidget_2->setSizePolicy(sizePolicy1);
        tabWidget_2->setMinimumSize(QSize(1871, 0));
        tabWidget_2->setTabPosition(QTabWidget::West);
        tabWidget_2->setIconSize(QSize(32, 32));
        tabWidget_2->setTabsClosable(false);
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        calendarWidget = new QCalendarWidget(tab_2);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(40, 10, 280, 163));
        deliveryRegister = new QPushButton(tab_2);
        deliveryRegister->setObjectName("deliveryRegister");
        deliveryRegister->setGeometry(QRect(340, 60, 253, 50));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(deliveryRegister->sizePolicy().hasHeightForWidth());
        deliveryRegister->setSizePolicy(sizePolicy2);
        deliveryRegister->setMaximumSize(QSize(500, 50));
        deliveryRegister->setFont(font1);
        tabWidget_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(Reports, QString());
        EmployeeRegistration = new QWidget();
        EmployeeRegistration->setObjectName("EmployeeRegistration");
        EmployeeRegistration->setEnabled(true);
        label_3 = new QLabel(EmployeeRegistration);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 30, 341, 41));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label_3->setFont(font2);
        empRegistration = new QPushButton(EmployeeRegistration);
        empRegistration->setObjectName("empRegistration");
        empRegistration->setGeometry(QRect(350, 550, 160, 40));
        sizePolicy1.setHeightForWidth(empRegistration->sizePolicy().hasHeightForWidth());
        empRegistration->setSizePolicy(sizePolicy1);
        noMatch = new QLabel(EmployeeRegistration);
        noMatch->setObjectName("noMatch");
        noMatch->setEnabled(true);
        noMatch->setGeometry(QRect(480, 520, 141, 16));
        noMatch->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        layoutWidget2 = new QWidget(EmployeeRegistration);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(230, 100, 411, 34));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        adminRadio = new QRadioButton(layoutWidget2);
        adminRadio->setObjectName("adminRadio");
        QFont font3;
        font3.setPointSize(14);
        adminRadio->setFont(font3);

        horizontalLayout_17->addWidget(adminRadio);

        cashierRadio = new QRadioButton(layoutWidget2);
        cashierRadio->setObjectName("cashierRadio");
        cashierRadio->setFont(font3);

        horizontalLayout_17->addWidget(cashierRadio);

        managerRadio = new QRadioButton(layoutWidget2);
        managerRadio->setObjectName("managerRadio");
        managerRadio->setFont(font3);

        horizontalLayout_17->addWidget(managerRadio);

        layoutWidget3 = new QWidget(EmployeeRegistration);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(230, 150, 411, 370));
        formLayout_2 = new QFormLayout(layoutWidget3);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setHorizontalSpacing(40);
        formLayout_2->setVerticalSpacing(40);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(layoutWidget3);
        label_30->setObjectName("label_30");
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        label_30->setFont(font4);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_30);

        empFName = new QLineEdit(layoutWidget3);
        empFName->setObjectName("empFName");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, empFName);

        label_31 = new QLabel(layoutWidget3);
        label_31->setObjectName("label_31");
        label_31->setFont(font4);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_31);

        empLName = new QLineEdit(layoutWidget3);
        empLName->setObjectName("empLName");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, empLName);

        label_33 = new QLabel(layoutWidget3);
        label_33->setObjectName("label_33");
        label_33->setFont(font4);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_33);

        empEmail = new QLineEdit(layoutWidget3);
        empEmail->setObjectName("empEmail");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, empEmail);

        label_34 = new QLabel(layoutWidget3);
        label_34->setObjectName("label_34");
        label_34->setFont(font4);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_34);

        label_35 = new QLabel(layoutWidget3);
        label_35->setObjectName("label_35");
        label_35->setFont(font4);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_35);

        empPassword = new QLineEdit(layoutWidget3);
        empPassword->setObjectName("empPassword");
        empPassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, empPassword);

        label_36 = new QLabel(layoutWidget3);
        label_36->setObjectName("label_36");
        label_36->setFont(font4);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_36);

        empRepeatPassword = new QLineEdit(layoutWidget3);
        empRepeatPassword->setObjectName("empRepeatPassword");
        empRepeatPassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, empRepeatPassword);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_24 = new QLabel(layoutWidget3);
        label_24->setObjectName("label_24");
        label_24->setFont(font1);

        horizontalLayout_13->addWidget(label_24);

        empPhoneNum = new QLineEdit(layoutWidget3);
        empPhoneNum->setObjectName("empPhoneNum");

        horizontalLayout_13->addWidget(empPhoneNum);


        formLayout_2->setLayout(3, QFormLayout::FieldRole, horizontalLayout_13);

        tabWidget->addTab(EmployeeRegistration, QString());
        CustomerLoyalty = new QWidget();
        CustomerLoyalty->setObjectName("CustomerLoyalty");
        label_4 = new QLabel(CustomerLoyalty);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(310, 20, 331, 41));
        label_4->setFont(font2);
        layoutWidget_3 = new QWidget(CustomerLoyalty);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(290, 90, 381, 302));
        formLayout = new QFormLayout(layoutWidget_3);
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetNoConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setHorizontalSpacing(40);
        formLayout->setVerticalSpacing(40);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_3);
        label_20->setObjectName("label_20");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy3);
        label_20->setFont(font4);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_20);

        custName = new QLineEdit(layoutWidget_3);
        custName->setObjectName("custName");

        formLayout->setWidget(1, QFormLayout::FieldRole, custName);

        label_21 = new QLabel(layoutWidget_3);
        label_21->setObjectName("label_21");
        label_21->setFont(font4);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_21);

        label_22 = new QLabel(layoutWidget_3);
        label_22->setObjectName("label_22");
        label_22->setFont(font4);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_22);

        custMail = new QLineEdit(layoutWidget_3);
        custMail->setObjectName("custMail");

        formLayout->setWidget(3, QFormLayout::FieldRole, custMail);

        label_23 = new QLabel(layoutWidget_3);
        label_23->setObjectName("label_23");
        label_23->setFont(font4);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_23);

        custAddress = new QLineEdit(layoutWidget_3);
        custAddress->setObjectName("custAddress");

        formLayout->setWidget(4, QFormLayout::FieldRole, custAddress);

        label_28 = new QLabel(layoutWidget_3);
        label_28->setObjectName("label_28");
        sizePolicy3.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy3);
        label_28->setFont(font4);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_28);

        custID = new QLineEdit(layoutWidget_3);
        custID->setObjectName("custID");

        formLayout->setWidget(0, QFormLayout::FieldRole, custID);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_29 = new QLabel(layoutWidget_3);
        label_29->setObjectName("label_29");
        label_29->setFont(font1);

        horizontalLayout_16->addWidget(label_29);

        custNumber = new QLineEdit(layoutWidget_3);
        custNumber->setObjectName("custNumber");

        horizontalLayout_16->addWidget(custNumber);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_16);

        Register = new QPushButton(CustomerLoyalty);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(390, 410, 160, 40));
        Register->setFont(font1);
        tabWidget->addTab(CustomerLoyalty, QString());
        ManagerMP->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManagerMP);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName("menuAccount");
        ManagerMP->setMenuBar(menubar);
        statusbar = new QStatusBar(ManagerMP);
        statusbar->setObjectName("statusbar");
        ManagerMP->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menuAccount->addAction(actionSign_out);

        retranslateUi(ManagerMP);

        tabWidget->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ManagerMP);
    } // setupUi

    void retranslateUi(QMainWindow *ManagerMP)
    {
        ManagerMP->setWindowTitle(QCoreApplication::translate("ManagerMP", "Management", nullptr));
        actionSign_out->setText(QCoreApplication::translate("ManagerMP", "Sign Out", nullptr));
        label->setText(QCoreApplication::translate("ManagerMP", "Active counters:", nullptr));
        label_6->setText(QCoreApplication::translate("ManagerMP", "Counter 2", nullptr));
        label_7->setText(QCoreApplication::translate("ManagerMP", "Cashier: ", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        label_14->setText(QCoreApplication::translate("ManagerMP", "Customers served:", nullptr));
        lineEdit_7->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        label_15->setText(QCoreApplication::translate("ManagerMP", "Items sold", nullptr));
        lineEdit_8->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        label_8->setText(QCoreApplication::translate("ManagerMP", "Counter 3", nullptr));
        label_9->setText(QCoreApplication::translate("ManagerMP", "Cashier: ", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        label_16->setText(QCoreApplication::translate("ManagerMP", "Customers served:", nullptr));
        lineEdit_9->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        label_17->setText(QCoreApplication::translate("ManagerMP", "Items sold", nullptr));
        lineEdit_10->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        label_10->setText(QCoreApplication::translate("ManagerMP", "Counter 4", nullptr));
        label_11->setText(QCoreApplication::translate("ManagerMP", "Cashier: ", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        label_18->setText(QCoreApplication::translate("ManagerMP", "Customers served:", nullptr));
        lineEdit_11->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        label_19->setText(QCoreApplication::translate("ManagerMP", "Items sold", nullptr));
        lineEdit_12->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        label_2->setText(QCoreApplication::translate("ManagerMP", "Counter 1", nullptr));
        label_5->setText(QCoreApplication::translate("ManagerMP", "Cashier: ", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        label_12->setText(QCoreApplication::translate("ManagerMP", "Customers served:", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        label_13->setText(QCoreApplication::translate("ManagerMP", "Items sold", nullptr));
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("ManagerMP", "Unmanned", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Home), QCoreApplication::translate("ManagerMP", "Home", nullptr));
        deliveryRegister->setText(QCoreApplication::translate("ManagerMP", "Search", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QCoreApplication::translate("ManagerMP", "Sales History", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("ManagerMP", "Deliveries", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("ManagerMP", "Product Stock", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Reports), QCoreApplication::translate("ManagerMP", "Reports", nullptr));
        label_3->setText(QCoreApplication::translate("ManagerMP", "Register a new employee:", nullptr));
        empRegistration->setText(QCoreApplication::translate("ManagerMP", "Register", nullptr));
        noMatch->setText(QCoreApplication::translate("ManagerMP", "Passwords do not match", nullptr));
        adminRadio->setText(QCoreApplication::translate("ManagerMP", "Administration", nullptr));
        cashierRadio->setText(QCoreApplication::translate("ManagerMP", "Cashier", nullptr));
        managerRadio->setText(QCoreApplication::translate("ManagerMP", "Manager", nullptr));
        label_30->setText(QCoreApplication::translate("ManagerMP", "First Name:", nullptr));
        label_31->setText(QCoreApplication::translate("ManagerMP", "Last Name:", nullptr));
        label_33->setText(QCoreApplication::translate("ManagerMP", "Email:", nullptr));
        label_34->setText(QCoreApplication::translate("ManagerMP", "Phone Number:", nullptr));
        label_35->setText(QCoreApplication::translate("ManagerMP", "Password:", nullptr));
        label_36->setText(QCoreApplication::translate("ManagerMP", "Password repeated:", nullptr));
        label_24->setText(QCoreApplication::translate("ManagerMP", "+254", nullptr));
        empPhoneNum->setInputMask(QCoreApplication::translate("ManagerMP", "#########", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(EmployeeRegistration), QCoreApplication::translate("ManagerMP", "Employees", nullptr));
        label_4->setText(QCoreApplication::translate("ManagerMP", "Register a new customer:", nullptr));
        label_20->setText(QCoreApplication::translate("ManagerMP", "Full Names", nullptr));
        label_21->setText(QCoreApplication::translate("ManagerMP", "Phone number", nullptr));
        label_22->setText(QCoreApplication::translate("ManagerMP", "E-mail", nullptr));
        label_23->setText(QCoreApplication::translate("ManagerMP", "Address", nullptr));
        label_28->setText(QCoreApplication::translate("ManagerMP", "ID number", nullptr));
        custID->setInputMask(QCoreApplication::translate("ManagerMP", "########", nullptr));
        label_29->setText(QCoreApplication::translate("ManagerMP", "+254", nullptr));
        custNumber->setInputMask(QCoreApplication::translate("ManagerMP", "#########", nullptr));
        Register->setText(QCoreApplication::translate("ManagerMP", "Register", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CustomerLoyalty), QCoreApplication::translate("ManagerMP", "Customers", nullptr));
        menuAccount->setTitle(QCoreApplication::translate("ManagerMP", "Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagerMP: public Ui_ManagerMP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERMP_H
