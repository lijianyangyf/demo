/****************************************************************************
** Meta object code from reading C++ file 'flightinfomanage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../flightinfomanage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightinfomanage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
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
struct qt_meta_stringdata_CLASSFlightInfoManageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFlightInfoManageENDCLASS = QtMocHelpers::stringData(
    "FlightInfoManage",
    "FlightManageInfo",
    "",
    "Status",
    "dataBind",
    "clearBox",
    "selectionChanged",
    "QItemSelection",
    "selected",
    "StringAdapter",
    "TicketInserter",
    "TicketUpdater",
    "TicketDeleter",
    "on_btn_FIM_Reset_clicked",
    "on_btn_FIM_delete_clicked",
    "on_btn_FIM_Save_clicked",
    "on_btn_FIM_Insert_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFlightInfoManageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   89,    2, 0x08,    3 /* Private */,
       5,    0,   90,    2, 0x08,    4 /* Private */,
       6,    1,   91,    2, 0x08,    5 /* Private */,
       9,    0,   94,    2, 0x08,    7 /* Private */,
      10,    0,   95,    2, 0x08,    8 /* Private */,
      11,    0,   96,    2, 0x08,    9 /* Private */,
      12,    0,   97,    2, 0x08,   10 /* Private */,
      13,    0,   98,    2, 0x08,   11 /* Private */,
      14,    0,   99,    2, 0x08,   12 /* Private */,
      15,    0,  100,    2, 0x08,   13 /* Private */,
      16,    0,  101,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FlightInfoManage::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSFlightInfoManageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFlightInfoManageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFlightInfoManageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FlightInfoManage, std::true_type>,
        // method 'FlightManageInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool &, std::false_type>,
        // method 'dataBind'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearBox'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'StringAdapter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TicketInserter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TicketUpdater'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TicketDeleter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_FIM_Reset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_FIM_delete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_FIM_Save_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_FIM_Insert_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FlightInfoManage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightInfoManage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->FlightManageInfo((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->dataBind(); break;
        case 2: _t->clearBox(); break;
        case 3: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1]))); break;
        case 4: _t->StringAdapter(); break;
        case 5: _t->TicketInserter(); break;
        case 6: _t->TicketUpdater(); break;
        case 7: _t->TicketDeleter(); break;
        case 8: _t->on_btn_FIM_Reset_clicked(); break;
        case 9: _t->on_btn_FIM_delete_clicked(); break;
        case 10: _t->on_btn_FIM_Save_clicked(); break;
        case 11: _t->on_btn_FIM_Insert_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightInfoManage::*)(const bool & );
            if (_t _q_method = &FlightInfoManage::FlightManageInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *FlightInfoManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightInfoManage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFlightInfoManageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FlightInfoManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void FlightInfoManage::FlightManageInfo(const bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
