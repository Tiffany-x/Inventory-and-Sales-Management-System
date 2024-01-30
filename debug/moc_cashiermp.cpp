/****************************************************************************
** Meta object code from reading C++ file 'cashiermp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Project/cashiermp.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cashiermp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCashierMPENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCashierMPENDCLASS = QtMocHelpers::stringData(
    "CashierMP",
    "on_insertItem_clicked",
    "",
    "on_saleComplete_clicked",
    "on_actionSign_out_triggered",
    "on_removeItem_clicked",
    "on_itemsTable_itemClicked",
    "QTableWidgetItem*",
    "item"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCashierMPENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[10];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[28];
    char stringdata5[22];
    char stringdata6[26];
    char stringdata7[18];
    char stringdata8[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCashierMPENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCashierMPENDCLASS_t qt_meta_stringdata_CLASSCashierMPENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "CashierMP"
        QT_MOC_LITERAL(10, 21),  // "on_insertItem_clicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 23),  // "on_saleComplete_clicked"
        QT_MOC_LITERAL(57, 27),  // "on_actionSign_out_triggered"
        QT_MOC_LITERAL(85, 21),  // "on_removeItem_clicked"
        QT_MOC_LITERAL(107, 25),  // "on_itemsTable_itemClicked"
        QT_MOC_LITERAL(133, 17),  // "QTableWidgetItem*"
        QT_MOC_LITERAL(151, 4)   // "item"
    },
    "CashierMP",
    "on_insertItem_clicked",
    "",
    "on_saleComplete_clicked",
    "on_actionSign_out_triggered",
    "on_removeItem_clicked",
    "on_itemsTable_itemClicked",
    "QTableWidgetItem*",
    "item"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCashierMPENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    1,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject CashierMP::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSCashierMPENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCashierMPENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCashierMPENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CashierMP, std::true_type>,
        // method 'on_insertItem_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saleComplete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSign_out_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeItem_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_itemsTable_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>
    >,
    nullptr
} };

void CashierMP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CashierMP *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_insertItem_clicked(); break;
        case 1: _t->on_saleComplete_clicked(); break;
        case 2: _t->on_actionSign_out_triggered(); break;
        case 3: _t->on_removeItem_clicked(); break;
        case 4: _t->on_itemsTable_itemClicked((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *CashierMP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CashierMP::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCashierMPENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CashierMP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
