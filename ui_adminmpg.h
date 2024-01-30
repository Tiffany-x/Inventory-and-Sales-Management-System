/********************************************************************************
** Form generated from reading UI file 'adminmpg.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMPG_H
#define UI_ADMINMPG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMPG
{
public:
    QAction *actionSign_Out;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Home;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *pendingDeliveryView;
    QLabel *label_3;
    QTableView *restockView;
    QWidget *Products;
    QPushButton *productSubmit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *prodBarcode;
    QLabel *errlabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QComboBox *productSuppliersList;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *prodName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QLineEdit *prodPrice;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_13;
    QRadioButton *taxedRadio;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QComboBox *sectionList;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_17;
    QLineEdit *prodStock;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_18;
    QLineEdit *prodDiscount;
    QPushButton *productSearch;
    QPushButton *productUpdate;
    QWidget *layoutWidget_4;
    QHBoxLayout *incomingBar;
    QLabel *incomingStocklbl;
    QLineEdit *incomingStock;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_19;
    QLineEdit *taxedPrice;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_25;
    QLineEdit *discountedPrice;
    QPushButton *fieldClear;
    QWidget *Deliveries;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_8;
    QCalendarWidget *invoiceDtOrdered;
    QPushButton *deliveryRegister;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *invoiceBarcode;
    QPushButton *findProduct;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_5;
    QLineEdit *InvoiceSupplier;
    QLineEdit *invProdName;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_4;
    QLineEdit *InvoiceID;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_7;
    QLineEdit *InvoiceAmtPaid;
    QWidget *Suppliers;
    QWidget *layoutWidget_3;
    QFormLayout *formLayout;
    QLabel *label_20;
    QLineEdit *supName;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *supMail;
    QLabel *label_23;
    QLineEdit *supAddress;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_24;
    QLineEdit *supNumber;
    QPushButton *supRegister;
    QWidget *Employees;
    QLabel *label_15;
    QLabel *noMatch;
    QPushButton *empRegistration;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_19;
    QRadioButton *adminRadio_2;
    QRadioButton *cashierRadio_2;
    QWidget *layoutWidget_5;
    QFormLayout *formLayout_3;
    QLabel *label_32;
    QLineEdit *empFName_2;
    QLabel *label_37;
    QLineEdit *empLName_2;
    QLabel *label_38;
    QLineEdit *empEmail_2;
    QLabel *label_39;
    QLabel *label_40;
    QLineEdit *empPassword_2;
    QLabel *label_41;
    QLineEdit *empRepeatPassword_2;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_27;
    QLineEdit *empPhoneNum_2;
    QWidget *CustomerLoyalty;
    QWidget *layoutWidget_7;
    QFormLayout *formLayout_4;
    QLabel *label_28;
    QLineEdit *custName;
    QLabel *label_29;
    QLabel *label_42;
    QLineEdit *custMail;
    QLabel *label_43;
    QLineEdit *custAddress;
    QLabel *label_44;
    QLineEdit *custID;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_45;
    QLineEdit *custNumber;
    QPushButton *Register;
    QLabel *label_16;
    QWidget *Reports;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QCalendarWidget *saleSelectionCalendar;
    QPushButton *salesSearch;
    QTableView *saleReportView;
    QWidget *tab_3;
    QTableView *deliveriesReportView;
    QCalendarWidget *deliveriesSelectionCalendar;
    QPushButton *DeliveriesSearch;
    QWidget *tab_4;
    QTableView *stockReportView;
    QLabel *label_26;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminMPG)
    {
        if (AdminMPG->objectName().isEmpty())
            AdminMPG->setObjectName("AdminMPG");
        AdminMPG->resize(1920, 1080);
        actionSign_Out = new QAction(AdminMPG);
        actionSign_Out->setObjectName("actionSign_Out");
        centralwidget = new QWidget(AdminMPG);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 1, 1911, 1021));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setIconSize(QSize(32, 32));
        tabWidget->setUsesScrollButtons(false);
        Home = new QWidget();
        Home->setObjectName("Home");
        verticalLayoutWidget = new QWidget(Home);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(50, 20, 1011, 621));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        pendingDeliveryView = new QTableView(verticalLayoutWidget);
        pendingDeliveryView->setObjectName("pendingDeliveryView");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pendingDeliveryView->sizePolicy().hasHeightForWidth());
        pendingDeliveryView->setSizePolicy(sizePolicy1);
        pendingDeliveryView->setMouseTracking(false);
        pendingDeliveryView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pendingDeliveryView->setAutoScroll(false);
        pendingDeliveryView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(pendingDeliveryView);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        restockView = new QTableView(verticalLayoutWidget);
        restockView->setObjectName("restockView");
        sizePolicy1.setHeightForWidth(restockView->sizePolicy().hasHeightForWidth());
        restockView->setSizePolicy(sizePolicy1);
        restockView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(restockView);

        QIcon icon(QIcon::fromTheme(QString::fromUtf8("applications-office")));
        tabWidget->addTab(Home, icon, QString());
        Products = new QWidget();
        Products->setObjectName("Products");
        productSubmit = new QPushButton(Products);
        productSubmit->setObjectName("productSubmit");
        productSubmit->setGeometry(QRect(380, 580, 200, 40));
        QFont font1;
        font1.setPointSize(12);
        productSubmit->setFont(font1);
        layoutWidget = new QWidget(Products);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 40, 491, 471));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label_9->setFont(font2);

        horizontalLayout->addWidget(label_9);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        prodBarcode = new QLineEdit(layoutWidget);
        prodBarcode->setObjectName("prodBarcode");
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(prodBarcode->sizePolicy().hasHeightForWidth());
        prodBarcode->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(prodBarcode);

        errlabel = new QLabel(layoutWidget);
        errlabel->setObjectName("errlabel");
        sizePolicy.setHeightForWidth(errlabel->sizePolicy().hasHeightForWidth());
        errlabel->setSizePolicy(sizePolicy);
        errlabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        errlabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(errlabel);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setFont(font2);

        horizontalLayout_2->addWidget(label_10);

        productSuppliersList = new QComboBox(layoutWidget);
        productSuppliersList->setObjectName("productSuppliersList");

        horizontalLayout_2->addWidget(productSuppliersList);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setFont(font2);

        horizontalLayout_3->addWidget(label_11);

        prodName = new QLineEdit(layoutWidget);
        prodName->setObjectName("prodName");
        sizePolicy3.setHeightForWidth(prodName->sizePolicy().hasHeightForWidth());
        prodName->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(prodName);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setFont(font2);

        horizontalLayout_4->addWidget(label_12);

        prodPrice = new QLineEdit(layoutWidget);
        prodPrice->setObjectName("prodPrice");
        sizePolicy3.setHeightForWidth(prodPrice->sizePolicy().hasHeightForWidth());
        prodPrice->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(prodPrice);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);
        label_13->setFont(font2);

        horizontalLayout_5->addWidget(label_13);

        taxedRadio = new QRadioButton(layoutWidget);
        taxedRadio->setObjectName("taxedRadio");
        taxedRadio->setFont(font1);

        horizontalLayout_5->addWidget(taxedRadio);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(20);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        label_14->setFont(font2);

        horizontalLayout_7->addWidget(label_14);

        sectionList = new QComboBox(layoutWidget);
        sectionList->setObjectName("sectionList");

        horizontalLayout_7->addWidget(sectionList);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(20);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");
        sizePolicy2.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy2);
        label_17->setFont(font2);

        horizontalLayout_9->addWidget(label_17);

        prodStock = new QLineEdit(layoutWidget);
        prodStock->setObjectName("prodStock");
        sizePolicy3.setHeightForWidth(prodStock->sizePolicy().hasHeightForWidth());
        prodStock->setSizePolicy(sizePolicy3);

        horizontalLayout_9->addWidget(prodStock);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(20);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");
        sizePolicy2.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy2);
        label_18->setFont(font2);

        horizontalLayout_10->addWidget(label_18);

        prodDiscount = new QLineEdit(layoutWidget);
        prodDiscount->setObjectName("prodDiscount");
        sizePolicy3.setHeightForWidth(prodDiscount->sizePolicy().hasHeightForWidth());
        prodDiscount->setSizePolicy(sizePolicy3);

        horizontalLayout_10->addWidget(prodDiscount);


        verticalLayout_3->addLayout(horizontalLayout_10);

        productSearch = new QPushButton(Products);
        productSearch->setObjectName("productSearch");
        productSearch->setGeometry(QRect(680, 50, 200, 40));
        productSearch->setFont(font1);
        productUpdate = new QPushButton(Products);
        productUpdate->setObjectName("productUpdate");
        productUpdate->setGeometry(QRect(710, 580, 200, 40));
        productUpdate->setFont(font1);
        layoutWidget_4 = new QWidget(Products);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(680, 400, 491, 51));
        incomingBar = new QHBoxLayout(layoutWidget_4);
        incomingBar->setSpacing(20);
        incomingBar->setObjectName("incomingBar");
        incomingBar->setSizeConstraint(QLayout::SetNoConstraint);
        incomingBar->setContentsMargins(0, 0, 0, 0);
        incomingStocklbl = new QLabel(layoutWidget_4);
        incomingStocklbl->setObjectName("incomingStocklbl");
        sizePolicy2.setHeightForWidth(incomingStocklbl->sizePolicy().hasHeightForWidth());
        incomingStocklbl->setSizePolicy(sizePolicy2);
        incomingStocklbl->setFont(font2);

        incomingBar->addWidget(incomingStocklbl);

        incomingStock = new QLineEdit(layoutWidget_4);
        incomingStock->setObjectName("incomingStock");
        sizePolicy3.setHeightForWidth(incomingStock->sizePolicy().hasHeightForWidth());
        incomingStock->setSizePolicy(sizePolicy3);

        incomingBar->addWidget(incomingStock);

        layoutWidget1 = new QWidget(Products);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(680, 280, 489, 51));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget1);
        label_19->setObjectName("label_19");
        sizePolicy2.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy2);
        label_19->setFont(font2);

        horizontalLayout_6->addWidget(label_19);

        taxedPrice = new QLineEdit(layoutWidget1);
        taxedPrice->setObjectName("taxedPrice");
        taxedPrice->setEnabled(false);
        sizePolicy3.setHeightForWidth(taxedPrice->sizePolicy().hasHeightForWidth());
        taxedPrice->setSizePolicy(sizePolicy3);
        taxedPrice->setReadOnly(true);

        horizontalLayout_6->addWidget(taxedPrice);

        layoutWidget_6 = new QWidget(Products);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(680, 460, 489, 51));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_12->setSpacing(20);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget_6);
        label_25->setObjectName("label_25");
        sizePolicy2.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy2);
        label_25->setFont(font2);

        horizontalLayout_12->addWidget(label_25);

        discountedPrice = new QLineEdit(layoutWidget_6);
        discountedPrice->setObjectName("discountedPrice");
        discountedPrice->setEnabled(false);
        sizePolicy3.setHeightForWidth(discountedPrice->sizePolicy().hasHeightForWidth());
        discountedPrice->setSizePolicy(sizePolicy3);

        horizontalLayout_12->addWidget(discountedPrice);

        fieldClear = new QPushButton(Products);
        fieldClear->setObjectName("fieldClear");
        fieldClear->setGeometry(QRect(680, 130, 200, 40));
        fieldClear->setFont(font1);
        tabWidget->addTab(Products, QString());
        Deliveries = new QWidget();
        Deliveries->setObjectName("Deliveries");
        Deliveries->setEnabled(true);
        layoutWidget2 = new QWidget(Deliveries);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(190, 350, 801, 165));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font2);

        horizontalLayout_15->addWidget(label_8);

        invoiceDtOrdered = new QCalendarWidget(layoutWidget2);
        invoiceDtOrdered->setObjectName("invoiceDtOrdered");
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(invoiceDtOrdered->sizePolicy().hasHeightForWidth());
        invoiceDtOrdered->setSizePolicy(sizePolicy4);

        horizontalLayout_15->addWidget(invoiceDtOrdered);

        deliveryRegister = new QPushButton(layoutWidget2);
        deliveryRegister->setObjectName("deliveryRegister");
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(deliveryRegister->sizePolicy().hasHeightForWidth());
        deliveryRegister->setSizePolicy(sizePolicy5);
        deliveryRegister->setMaximumSize(QSize(500, 50));
        deliveryRegister->setFont(font1);

        horizontalLayout_15->addWidget(deliveryRegister);

        layoutWidget3 = new QWidget(Deliveries);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(190, 70, 801, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font2);

        horizontalLayout_8->addWidget(label_6);

        invoiceBarcode = new QLineEdit(layoutWidget3);
        invoiceBarcode->setObjectName("invoiceBarcode");
        sizePolicy3.setHeightForWidth(invoiceBarcode->sizePolicy().hasHeightForWidth());
        invoiceBarcode->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(invoiceBarcode);

        findProduct = new QPushButton(layoutWidget3);
        findProduct->setObjectName("findProduct");
        sizePolicy5.setHeightForWidth(findProduct->sizePolicy().hasHeightForWidth());
        findProduct->setSizePolicy(sizePolicy5);
        findProduct->setMaximumSize(QSize(500, 50));
        findProduct->setFont(font1);

        horizontalLayout_8->addWidget(findProduct);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName("label_5");
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setFont(font2);

        horizontalLayout_11->addWidget(label_5);

        InvoiceSupplier = new QLineEdit(layoutWidget3);
        InvoiceSupplier->setObjectName("InvoiceSupplier");
        sizePolicy3.setHeightForWidth(InvoiceSupplier->sizePolicy().hasHeightForWidth());
        InvoiceSupplier->setSizePolicy(sizePolicy3);
        InvoiceSupplier->setReadOnly(true);

        horizontalLayout_11->addWidget(InvoiceSupplier);

        invProdName = new QLineEdit(layoutWidget3);
        invProdName->setObjectName("invProdName");
        sizePolicy3.setHeightForWidth(invProdName->sizePolicy().hasHeightForWidth());
        invProdName->setSizePolicy(sizePolicy3);
        invProdName->setReadOnly(true);

        horizontalLayout_11->addWidget(invProdName);


        verticalLayout_2->addLayout(horizontalLayout_11);

        layoutWidget4 = new QWidget(Deliveries);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(190, 210, 531, 131));
        verticalLayout_5 = new QVBoxLayout(layoutWidget4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName("label_4");
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setFont(font2);

        horizontalLayout_13->addWidget(label_4);

        InvoiceID = new QLineEdit(layoutWidget4);
        InvoiceID->setObjectName("InvoiceID");
        sizePolicy3.setHeightForWidth(InvoiceID->sizePolicy().hasHeightForWidth());
        InvoiceID->setSizePolicy(sizePolicy3);

        horizontalLayout_13->addWidget(InvoiceID);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName("label_7");
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setFont(font2);

        horizontalLayout_14->addWidget(label_7);

        InvoiceAmtPaid = new QLineEdit(layoutWidget4);
        InvoiceAmtPaid->setObjectName("InvoiceAmtPaid");
        sizePolicy3.setHeightForWidth(InvoiceAmtPaid->sizePolicy().hasHeightForWidth());
        InvoiceAmtPaid->setSizePolicy(sizePolicy3);

        horizontalLayout_14->addWidget(InvoiceAmtPaid);


        verticalLayout_5->addLayout(horizontalLayout_14);

        tabWidget->addTab(Deliveries, QString());
        Suppliers = new QWidget();
        Suppliers->setObjectName("Suppliers");
        layoutWidget_3 = new QWidget(Suppliers);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(121, 33, 381, 236));
        formLayout = new QFormLayout(layoutWidget_3);
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetNoConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setHorizontalSpacing(40);
        formLayout->setVerticalSpacing(40);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_3);
        label_20->setObjectName("label_20");
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy6);
        label_20->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_20);

        supName = new QLineEdit(layoutWidget_3);
        supName->setObjectName("supName");

        formLayout->setWidget(0, QFormLayout::FieldRole, supName);

        label_21 = new QLabel(layoutWidget_3);
        label_21->setObjectName("label_21");
        label_21->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_21);

        label_22 = new QLabel(layoutWidget_3);
        label_22->setObjectName("label_22");
        label_22->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_22);

        supMail = new QLineEdit(layoutWidget_3);
        supMail->setObjectName("supMail");

        formLayout->setWidget(2, QFormLayout::FieldRole, supMail);

        label_23 = new QLabel(layoutWidget_3);
        label_23->setObjectName("label_23");
        label_23->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_23);

        supAddress = new QLineEdit(layoutWidget_3);
        supAddress->setObjectName("supAddress");

        formLayout->setWidget(3, QFormLayout::FieldRole, supAddress);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_24 = new QLabel(layoutWidget_3);
        label_24->setObjectName("label_24");
        label_24->setFont(font2);

        horizontalLayout_16->addWidget(label_24);

        supNumber = new QLineEdit(layoutWidget_3);
        supNumber->setObjectName("supNumber");

        horizontalLayout_16->addWidget(supNumber);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_16);

        supRegister = new QPushButton(Suppliers);
        supRegister->setObjectName("supRegister");
        supRegister->setGeometry(QRect(240, 300, 160, 40));
        supRegister->setFont(font1);
        tabWidget->addTab(Suppliers, QString());
        Employees = new QWidget();
        Employees->setObjectName("Employees");
        label_15 = new QLabel(Employees);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(450, 20, 341, 41));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        label_15->setFont(font3);
        noMatch = new QLabel(Employees);
        noMatch->setObjectName("noMatch");
        noMatch->setEnabled(true);
        noMatch->setGeometry(QRect(660, 510, 141, 16));
        noMatch->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        empRegistration = new QPushButton(Employees);
        empRegistration->setObjectName("empRegistration");
        empRegistration->setGeometry(QRect(530, 540, 160, 40));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(empRegistration->sizePolicy().hasHeightForWidth());
        empRegistration->setSizePolicy(sizePolicy7);
        layoutWidget_2 = new QWidget(Employees);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(410, 90, 411, 34));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        adminRadio_2 = new QRadioButton(layoutWidget_2);
        adminRadio_2->setObjectName("adminRadio_2");
        QFont font4;
        font4.setPointSize(14);
        adminRadio_2->setFont(font4);

        horizontalLayout_19->addWidget(adminRadio_2);

        cashierRadio_2 = new QRadioButton(layoutWidget_2);
        cashierRadio_2->setObjectName("cashierRadio_2");
        cashierRadio_2->setFont(font4);

        horizontalLayout_19->addWidget(cashierRadio_2);

        layoutWidget_5 = new QWidget(Employees);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(410, 140, 411, 370));
        formLayout_3 = new QFormLayout(layoutWidget_5);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setHorizontalSpacing(40);
        formLayout_3->setVerticalSpacing(40);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(layoutWidget_5);
        label_32->setObjectName("label_32");
        label_32->setFont(font2);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_32);

        empFName_2 = new QLineEdit(layoutWidget_5);
        empFName_2->setObjectName("empFName_2");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, empFName_2);

        label_37 = new QLabel(layoutWidget_5);
        label_37->setObjectName("label_37");
        label_37->setFont(font2);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_37);

        empLName_2 = new QLineEdit(layoutWidget_5);
        empLName_2->setObjectName("empLName_2");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, empLName_2);

        label_38 = new QLabel(layoutWidget_5);
        label_38->setObjectName("label_38");
        label_38->setFont(font2);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_38);

        empEmail_2 = new QLineEdit(layoutWidget_5);
        empEmail_2->setObjectName("empEmail_2");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, empEmail_2);

        label_39 = new QLabel(layoutWidget_5);
        label_39->setObjectName("label_39");
        label_39->setFont(font2);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_39);

        label_40 = new QLabel(layoutWidget_5);
        label_40->setObjectName("label_40");
        label_40->setFont(font2);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_40);

        empPassword_2 = new QLineEdit(layoutWidget_5);
        empPassword_2->setObjectName("empPassword_2");
        empPassword_2->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, empPassword_2);

        label_41 = new QLabel(layoutWidget_5);
        label_41->setObjectName("label_41");
        label_41->setFont(font2);

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_41);

        empRepeatPassword_2 = new QLineEdit(layoutWidget_5);
        empRepeatPassword_2->setObjectName("empRepeatPassword_2");
        empRepeatPassword_2->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, empRepeatPassword_2);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_27 = new QLabel(layoutWidget_5);
        label_27->setObjectName("label_27");
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        label_27->setFont(font5);

        horizontalLayout_20->addWidget(label_27);

        empPhoneNum_2 = new QLineEdit(layoutWidget_5);
        empPhoneNum_2->setObjectName("empPhoneNum_2");

        horizontalLayout_20->addWidget(empPhoneNum_2);


        formLayout_3->setLayout(3, QFormLayout::FieldRole, horizontalLayout_20);

        tabWidget->addTab(Employees, QString());
        CustomerLoyalty = new QWidget();
        CustomerLoyalty->setObjectName("CustomerLoyalty");
        layoutWidget_7 = new QWidget(CustomerLoyalty);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(260, 150, 381, 302));
        formLayout_4 = new QFormLayout(layoutWidget_7);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setSizeConstraint(QLayout::SetNoConstraint);
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_4->setHorizontalSpacing(40);
        formLayout_4->setVerticalSpacing(40);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(layoutWidget_7);
        label_28->setObjectName("label_28");
        sizePolicy6.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy6);
        label_28->setFont(font2);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_28);

        custName = new QLineEdit(layoutWidget_7);
        custName->setObjectName("custName");

        formLayout_4->setWidget(1, QFormLayout::FieldRole, custName);

        label_29 = new QLabel(layoutWidget_7);
        label_29->setObjectName("label_29");
        label_29->setFont(font2);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_29);

        label_42 = new QLabel(layoutWidget_7);
        label_42->setObjectName("label_42");
        label_42->setFont(font2);

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_42);

        custMail = new QLineEdit(layoutWidget_7);
        custMail->setObjectName("custMail");

        formLayout_4->setWidget(3, QFormLayout::FieldRole, custMail);

        label_43 = new QLabel(layoutWidget_7);
        label_43->setObjectName("label_43");
        label_43->setFont(font2);

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_43);

        custAddress = new QLineEdit(layoutWidget_7);
        custAddress->setObjectName("custAddress");

        formLayout_4->setWidget(4, QFormLayout::FieldRole, custAddress);

        label_44 = new QLabel(layoutWidget_7);
        label_44->setObjectName("label_44");
        sizePolicy6.setHeightForWidth(label_44->sizePolicy().hasHeightForWidth());
        label_44->setSizePolicy(sizePolicy6);
        label_44->setFont(font2);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_44);

        custID = new QLineEdit(layoutWidget_7);
        custID->setObjectName("custID");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, custID);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_45 = new QLabel(layoutWidget_7);
        label_45->setObjectName("label_45");
        label_45->setFont(font1);

        horizontalLayout_21->addWidget(label_45);

        custNumber = new QLineEdit(layoutWidget_7);
        custNumber->setObjectName("custNumber");

        horizontalLayout_21->addWidget(custNumber);


        formLayout_4->setLayout(2, QFormLayout::FieldRole, horizontalLayout_21);

        Register = new QPushButton(CustomerLoyalty);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(360, 470, 160, 40));
        Register->setFont(font1);
        label_16 = new QLabel(CustomerLoyalty);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(280, 80, 331, 41));
        label_16->setFont(font3);
        tabWidget->addTab(CustomerLoyalty, QString());
        Reports = new QWidget();
        Reports->setObjectName("Reports");
        tabWidget_2 = new QTabWidget(Reports);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, 0, 1871, 1031));
        sizePolicy7.setHeightForWidth(tabWidget_2->sizePolicy().hasHeightForWidth());
        tabWidget_2->setSizePolicy(sizePolicy7);
        tabWidget_2->setMinimumSize(QSize(1871, 0));
        tabWidget_2->setTabPosition(QTabWidget::West);
        tabWidget_2->setIconSize(QSize(32, 32));
        tabWidget_2->setTabsClosable(false);
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        saleSelectionCalendar = new QCalendarWidget(tab_2);
        saleSelectionCalendar->setObjectName("saleSelectionCalendar");
        saleSelectionCalendar->setGeometry(QRect(40, 10, 311, 151));
        salesSearch = new QPushButton(tab_2);
        salesSearch->setObjectName("salesSearch");
        salesSearch->setGeometry(QRect(380, 60, 253, 50));
        sizePolicy5.setHeightForWidth(salesSearch->sizePolicy().hasHeightForWidth());
        salesSearch->setSizePolicy(sizePolicy5);
        salesSearch->setMaximumSize(QSize(500, 50));
        salesSearch->setFont(font1);
        saleReportView = new QTableView(tab_2);
        saleReportView->setObjectName("saleReportView");
        saleReportView->setGeometry(QRect(100, 190, 1061, 441));
        tabWidget_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        deliveriesReportView = new QTableView(tab_3);
        deliveriesReportView->setObjectName("deliveriesReportView");
        deliveriesReportView->setGeometry(QRect(80, 200, 1061, 441));
        deliveriesSelectionCalendar = new QCalendarWidget(tab_3);
        deliveriesSelectionCalendar->setObjectName("deliveriesSelectionCalendar");
        deliveriesSelectionCalendar->setGeometry(QRect(20, 20, 311, 151));
        DeliveriesSearch = new QPushButton(tab_3);
        DeliveriesSearch->setObjectName("DeliveriesSearch");
        DeliveriesSearch->setGeometry(QRect(360, 70, 253, 50));
        sizePolicy5.setHeightForWidth(DeliveriesSearch->sizePolicy().hasHeightForWidth());
        DeliveriesSearch->setSizePolicy(sizePolicy5);
        DeliveriesSearch->setMaximumSize(QSize(500, 50));
        DeliveriesSearch->setFont(font1);
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        stockReportView = new QTableView(tab_4);
        stockReportView->setObjectName("stockReportView");
        stockReportView->setGeometry(QRect(20, 140, 1061, 441));
        label_26 = new QLabel(tab_4);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(370, 50, 262, 28));
        sizePolicy.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy);
        label_26->setFont(font2);
        label_26->setAlignment(Qt::AlignCenter);
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(Reports, QString());
        AdminMPG->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminMPG);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName("menuAccount");
        AdminMPG->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminMPG);
        statusbar->setObjectName("statusbar");
        AdminMPG->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menuAccount->addAction(actionSign_Out);

        retranslateUi(AdminMPG);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminMPG);
    } // setupUi

    void retranslateUi(QMainWindow *AdminMPG)
    {
        AdminMPG->setWindowTitle(QCoreApplication::translate("AdminMPG", "MainWindow", nullptr));
        actionSign_Out->setText(QCoreApplication::translate("AdminMPG", "Sign Out", nullptr));
        label->setText(QCoreApplication::translate("AdminMPG", "Pending deliveries:", nullptr));
#if QT_CONFIG(whatsthis)
        pendingDeliveryView->setWhatsThis(QCoreApplication::translate("AdminMPG", "Delivery Received", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_3->setText(QCoreApplication::translate("AdminMPG", "Products to be restocked:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Home), QCoreApplication::translate("AdminMPG", "Home", nullptr));
        productSubmit->setText(QCoreApplication::translate("AdminMPG", "Submit new product", nullptr));
        label_9->setText(QCoreApplication::translate("AdminMPG", "Barcode:", nullptr));
        errlabel->setText(QCoreApplication::translate("AdminMPG", "Barcode must contain 15 digits", nullptr));
        label_10->setText(QCoreApplication::translate("AdminMPG", "Supplier:", nullptr));
        label_11->setText(QCoreApplication::translate("AdminMPG", "Product name:", nullptr));
        label_12->setText(QCoreApplication::translate("AdminMPG", "Price:", nullptr));
        label_13->setText(QCoreApplication::translate("AdminMPG", "Tax:", nullptr));
        taxedRadio->setText(QCoreApplication::translate("AdminMPG", "16% VAT", nullptr));
        label_14->setText(QCoreApplication::translate("AdminMPG", "Section:", nullptr));
        label_17->setText(QCoreApplication::translate("AdminMPG", "Current stock:", nullptr));
        label_18->setText(QCoreApplication::translate("AdminMPG", "Discount:", nullptr));
        productSearch->setText(QCoreApplication::translate("AdminMPG", "Search", nullptr));
        productUpdate->setText(QCoreApplication::translate("AdminMPG", "update product details", nullptr));
        incomingStocklbl->setText(QCoreApplication::translate("AdminMPG", "Incoming stock:", nullptr));
        label_19->setText(QCoreApplication::translate("AdminMPG", "Taxed price:", nullptr));
        label_25->setText(QCoreApplication::translate("AdminMPG", "Discounted price:", nullptr));
        fieldClear->setText(QCoreApplication::translate("AdminMPG", "Clear All Fields", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Products), QCoreApplication::translate("AdminMPG", "Products", nullptr));
        label_8->setText(QCoreApplication::translate("AdminMPG", "Date ordered:", nullptr));
        deliveryRegister->setText(QCoreApplication::translate("AdminMPG", "Register", nullptr));
        label_6->setText(QCoreApplication::translate("AdminMPG", "Product Barcode:", nullptr));
        findProduct->setText(QCoreApplication::translate("AdminMPG", "Find Product", nullptr));
        label_5->setText(QCoreApplication::translate("AdminMPG", "Supplier:", nullptr));
        label_4->setText(QCoreApplication::translate("AdminMPG", "InvoiceID:", nullptr));
        label_7->setText(QCoreApplication::translate("AdminMPG", "Amount Paid:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Deliveries), QCoreApplication::translate("AdminMPG", "Deliveries", nullptr));
        label_20->setText(QCoreApplication::translate("AdminMPG", "Supplier name:", nullptr));
        label_21->setText(QCoreApplication::translate("AdminMPG", "Phone number:", nullptr));
        label_22->setText(QCoreApplication::translate("AdminMPG", "E-mail:", nullptr));
        label_23->setText(QCoreApplication::translate("AdminMPG", "Location:", nullptr));
        label_24->setText(QCoreApplication::translate("AdminMPG", "+254", nullptr));
        supNumber->setInputMask(QCoreApplication::translate("AdminMPG", "#########", nullptr));
        supRegister->setText(QCoreApplication::translate("AdminMPG", "Register", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Suppliers), QCoreApplication::translate("AdminMPG", "Suppliers", nullptr));
        label_15->setText(QCoreApplication::translate("AdminMPG", "Register a new employee:", nullptr));
        noMatch->setText(QCoreApplication::translate("AdminMPG", "Passwords do not match", nullptr));
        empRegistration->setText(QCoreApplication::translate("AdminMPG", "Register", nullptr));
        adminRadio_2->setText(QCoreApplication::translate("AdminMPG", "Administration", nullptr));
        cashierRadio_2->setText(QCoreApplication::translate("AdminMPG", "Cashier", nullptr));
        label_32->setText(QCoreApplication::translate("AdminMPG", "First Name:", nullptr));
        label_37->setText(QCoreApplication::translate("AdminMPG", "Last Name:", nullptr));
        label_38->setText(QCoreApplication::translate("AdminMPG", "Email:", nullptr));
        label_39->setText(QCoreApplication::translate("AdminMPG", "Phone Number:", nullptr));
        label_40->setText(QCoreApplication::translate("AdminMPG", "Password:", nullptr));
        label_41->setText(QCoreApplication::translate("AdminMPG", "Password repeated:", nullptr));
        label_27->setText(QCoreApplication::translate("AdminMPG", "+254", nullptr));
        empPhoneNum_2->setInputMask(QCoreApplication::translate("AdminMPG", "#########", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Employees), QCoreApplication::translate("AdminMPG", "Employee Registration", nullptr));
        label_28->setText(QCoreApplication::translate("AdminMPG", "Full Names", nullptr));
        label_29->setText(QCoreApplication::translate("AdminMPG", "Phone number", nullptr));
        label_42->setText(QCoreApplication::translate("AdminMPG", "E-mail", nullptr));
        label_43->setText(QCoreApplication::translate("AdminMPG", "Address", nullptr));
        label_44->setText(QCoreApplication::translate("AdminMPG", "ID number", nullptr));
        custID->setInputMask(QCoreApplication::translate("AdminMPG", "########", nullptr));
        label_45->setText(QCoreApplication::translate("AdminMPG", "+254", nullptr));
        custNumber->setInputMask(QCoreApplication::translate("AdminMPG", "#########", nullptr));
        Register->setText(QCoreApplication::translate("AdminMPG", "Register", nullptr));
        label_16->setText(QCoreApplication::translate("AdminMPG", "Register a new customer:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CustomerLoyalty), QCoreApplication::translate("AdminMPG", "Customer Loyalty", nullptr));
        salesSearch->setText(QCoreApplication::translate("AdminMPG", "Search", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QCoreApplication::translate("AdminMPG", "Sales History", nullptr));
        DeliveriesSearch->setText(QCoreApplication::translate("AdminMPG", "Search", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("AdminMPG", "Deliveries", nullptr));
        label_26->setText(QCoreApplication::translate("AdminMPG", "Current Stock", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("AdminMPG", "Product Stock", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Reports), QCoreApplication::translate("AdminMPG", "Reports", nullptr));
        menuAccount->setTitle(QCoreApplication::translate("AdminMPG", "Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMPG: public Ui_AdminMPG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMPG_H
