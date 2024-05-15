/****************************************************************************
** Meta object code from reading C++ file 'mainpage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mainpage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
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
struct qt_meta_stringdata_CLASSMainPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainPageENDCLASS = QtMocHelpers::stringData(
    "MainPage",
    "dataUpdated",
    "",
    "on_pushButton_clicked",
    "on_reshData_clicked",
    "on_reshCounter_clicked",
    "fetchLatestSensorValues",
    "onComboBoxIndexChanged",
    "index",
    "onTableViewClicked",
    "QModelIndex",
    "on_verticalScrollBar_actionTriggered",
    "action",
    "on_updateButton_clicked",
    "on_deleteEntry_clicked",
    "on_userButton_clicked",
    "on_aboutButton_clicked",
    "on_logoutButton_clicked",
    "loadDataIntoTables"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    0,  101,    2, 0x08,    4 /* Private */,
       6,    0,  102,    2, 0x08,    5 /* Private */,
       7,    1,  103,    2, 0x08,    6 /* Private */,
       9,    1,  106,    2, 0x08,    8 /* Private */,
      11,    1,  109,    2, 0x08,   10 /* Private */,
      13,    0,  112,    2, 0x08,   12 /* Private */,
      14,    0,  113,    2, 0x08,   13 /* Private */,
      15,    0,  114,    2, 0x08,   14 /* Private */,
      16,    0,  115,    2, 0x08,   15 /* Private */,
      17,    0,  116,    2, 0x08,   16 /* Private */,
      18,    0,  117,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 10,    8,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainPage, std::true_type>,
        // method 'dataUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_reshData_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_reshCounter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetchLatestSensorValues'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onComboBoxIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onTableViewClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_verticalScrollBar_actionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_updateButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteEntry_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_userButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_aboutButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logoutButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadDataIntoTables'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataUpdated(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_reshData_clicked(); break;
        case 3: _t->on_reshCounter_clicked(); break;
        case 4: _t->fetchLatestSensorValues(); break;
        case 5: _t->onComboBoxIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->onTableViewClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 7: _t->on_verticalScrollBar_actionTriggered((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_updateButton_clicked(); break;
        case 9: _t->on_deleteEntry_clicked(); break;
        case 10: _t->on_userButton_clicked(); break;
        case 11: _t->on_aboutButton_clicked(); break;
        case 12: _t->on_logoutButton_clicked(); break;
        case 13: _t->loadDataIntoTables(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainPage::*)();
            if (_t _q_method = &MainPage::dataUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainPage::dataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
