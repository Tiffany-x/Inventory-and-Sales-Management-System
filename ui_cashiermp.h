/********************************************************************************
** Form generated from reading UI file 'cashiermp.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHIERMP_H
#define UI_CASHIERMP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CashierMP
{
public:
    QAction *actionSign_out;
    QWidget *centralwidget;
    QPushButton *insertItem;
    QLineEdit *itemBarcode;
    QTableWidget *itemsTable;
    QTableWidget *totalValuesTable;
    QPushButton *saleComplete;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *txt_Discount;
    QLabel *txt_Price;
    QLabel *txt_Section;
    QLabel *txt_Description;
    QLabel *txt_Discount_2;
    QLabel *txt_Price_2;
    QLabel *txt_Section_2;
    QLabel *txt_Description_2;
    QLabel *txt_DiscPrice_2;
    QLabel *txt_DiscPrice;
    QPushButton *removeItem;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CashierMP)
    {
        if (CashierMP->objectName().isEmpty())
            CashierMP->setObjectName("CashierMP");
        CashierMP->resize(1920, 1080);
        actionSign_out = new QAction(CashierMP);
        actionSign_out->setObjectName("actionSign_out");
        centralwidget = new QWidget(CashierMP);
        centralwidget->setObjectName("centralwidget");
        insertItem = new QPushButton(centralwidget);
        insertItem->setObjectName("insertItem");
        insertItem->setGeometry(QRect(570, 10, 131, 31));
        QFont font;
        font.setPointSize(14);
        insertItem->setFont(font);
        itemBarcode = new QLineEdit(centralwidget);
        itemBarcode->setObjectName("itemBarcode");
        itemBarcode->setGeometry(QRect(10, 10, 551, 24));
        itemsTable = new QTableWidget(centralwidget);
        if (itemsTable->columnCount() < 4)
            itemsTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        itemsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        itemsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        itemsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        itemsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        itemsTable->setObjectName("itemsTable");
        itemsTable->setGeometry(QRect(0, 50, 750, 549));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(itemsTable->sizePolicy().hasHeightForWidth());
        itemsTable->setSizePolicy(sizePolicy);
        itemsTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        itemsTable->setAutoScroll(false);
        itemsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        totalValuesTable = new QTableWidget(centralwidget);
        if (totalValuesTable->rowCount() < 1)
            totalValuesTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        totalValuesTable->setVerticalHeaderItem(0, __qtablewidgetitem4);
        totalValuesTable->setObjectName("totalValuesTable");
        totalValuesTable->setGeometry(QRect(0, 590, 750, 30));
        totalValuesTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        totalValuesTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        totalValuesTable->horizontalHeader()->setVisible(false);
        totalValuesTable->verticalHeader()->setCascadingSectionResizes(false);
        totalValuesTable->verticalHeader()->setHighlightSections(false);
        totalValuesTable->verticalHeader()->setStretchLastSection(false);
        saleComplete = new QPushButton(centralwidget);
        saleComplete->setObjectName("saleComplete");
        saleComplete->setGeometry(QRect(820, 490, 180, 80));
        saleComplete->setFont(font);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(790, 240, 491, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        txt_Discount = new QLabel(gridLayoutWidget);
        txt_Discount->setObjectName("txt_Discount");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font1.setPointSize(12);
        txt_Discount->setFont(font1);

        gridLayout->addWidget(txt_Discount, 3, 1, 1, 1);

        txt_Price = new QLabel(gridLayoutWidget);
        txt_Price->setObjectName("txt_Price");
        txt_Price->setFont(font1);

        gridLayout->addWidget(txt_Price, 1, 1, 1, 1);

        txt_Section = new QLabel(gridLayoutWidget);
        txt_Section->setObjectName("txt_Section");
        txt_Section->setFont(font1);

        gridLayout->addWidget(txt_Section, 2, 1, 1, 1);

        txt_Description = new QLabel(gridLayoutWidget);
        txt_Description->setObjectName("txt_Description");
        txt_Description->setFont(font1);

        gridLayout->addWidget(txt_Description, 0, 1, 1, 1);

        txt_Discount_2 = new QLabel(gridLayoutWidget);
        txt_Discount_2->setObjectName("txt_Discount_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Franklin Gothic Demi")});
        font2.setPointSize(12);
        txt_Discount_2->setFont(font2);

        gridLayout->addWidget(txt_Discount_2, 3, 0, 1, 1);

        txt_Price_2 = new QLabel(gridLayoutWidget);
        txt_Price_2->setObjectName("txt_Price_2");
        txt_Price_2->setFont(font2);

        gridLayout->addWidget(txt_Price_2, 1, 0, 1, 1);

        txt_Section_2 = new QLabel(gridLayoutWidget);
        txt_Section_2->setObjectName("txt_Section_2");
        txt_Section_2->setFont(font2);

        gridLayout->addWidget(txt_Section_2, 2, 0, 1, 1);

        txt_Description_2 = new QLabel(gridLayoutWidget);
        txt_Description_2->setObjectName("txt_Description_2");
        txt_Description_2->setFont(font2);

        gridLayout->addWidget(txt_Description_2, 0, 0, 1, 1);

        txt_DiscPrice_2 = new QLabel(gridLayoutWidget);
        txt_DiscPrice_2->setObjectName("txt_DiscPrice_2");
        txt_DiscPrice_2->setFont(font2);

        gridLayout->addWidget(txt_DiscPrice_2, 4, 0, 1, 1);

        txt_DiscPrice = new QLabel(gridLayoutWidget);
        txt_DiscPrice->setObjectName("txt_DiscPrice");
        txt_DiscPrice->setFont(font1);

        gridLayout->addWidget(txt_DiscPrice, 4, 1, 1, 1);

        removeItem = new QPushButton(centralwidget);
        removeItem->setObjectName("removeItem");
        removeItem->setGeometry(QRect(1070, 490, 180, 80));
        removeItem->setFont(font);
        CashierMP->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CashierMP);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName("menuAccount");
        CashierMP->setMenuBar(menubar);
        statusbar = new QStatusBar(CashierMP);
        statusbar->setObjectName("statusbar");
        CashierMP->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menuAccount->addAction(actionSign_out);

        retranslateUi(CashierMP);

        QMetaObject::connectSlotsByName(CashierMP);
    } // setupUi

    void retranslateUi(QMainWindow *CashierMP)
    {
        CashierMP->setWindowTitle(QCoreApplication::translate("CashierMP", "Cashier", nullptr));
        actionSign_out->setText(QCoreApplication::translate("CashierMP", "Sign Out", nullptr));
        insertItem->setText(QCoreApplication::translate("CashierMP", "Insert Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem = itemsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CashierMP", "Barcode", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = itemsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CashierMP", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = itemsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CashierMP", "Qty", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = itemsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CashierMP", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = totalValuesTable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CashierMP", "Total:", nullptr));
        saleComplete->setText(QCoreApplication::translate("CashierMP", "Complete Sale", nullptr));
        txt_Discount->setText(QCoreApplication::translate("CashierMP", "Discount", nullptr));
        txt_Price->setText(QCoreApplication::translate("CashierMP", "Price", nullptr));
        txt_Section->setText(QCoreApplication::translate("CashierMP", "Section", nullptr));
        txt_Description->setText(QCoreApplication::translate("CashierMP", "Name", nullptr));
        txt_Discount_2->setText(QCoreApplication::translate("CashierMP", "Discount(%):", nullptr));
        txt_Price_2->setText(QCoreApplication::translate("CashierMP", "Price:", nullptr));
        txt_Section_2->setText(QCoreApplication::translate("CashierMP", "Section:", nullptr));
        txt_Description_2->setText(QCoreApplication::translate("CashierMP", "Name:", nullptr));
        txt_DiscPrice_2->setText(QCoreApplication::translate("CashierMP", "Discounted price:", nullptr));
        txt_DiscPrice->setText(QCoreApplication::translate("CashierMP", "Discounted price", nullptr));
        removeItem->setText(QCoreApplication::translate("CashierMP", "Remove Item", nullptr));
        menuAccount->setTitle(QCoreApplication::translate("CashierMP", "Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CashierMP: public Ui_CashierMP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHIERMP_H
