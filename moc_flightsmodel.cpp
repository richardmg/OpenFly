/****************************************************************************
** Meta object code from reading C++ file 'flightsmodel.h'
**
** Created: Fri Nov 9 18:12:28 2012
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "flightsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FlightsModel_t {
    QByteArrayData data[10];
    char stringdata[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FlightsModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FlightsModel_t qt_meta_stringdata_FlightsModel = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 14),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 18),
QT_MOC_LITERAL(4, 48, 14),
QT_MOC_LITERAL(5, 63, 14),
QT_MOC_LITERAL(6, 78, 5),
QT_MOC_LITERAL(7, 84, 4),
QT_MOC_LITERAL(8, 89, 7),
QT_MOC_LITERAL(9, 97, 11)
    },
    "FlightsModel\0loadingChanged\0\0"
    "airportCodeChanged\0reloadContents\0"
    "updateContents\0Node*\0root\0loading\0"
    "airportCode\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x05,
       3,    0,   35,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x09,
       5,    1,   37,    2, 0x09,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00495001,
       9, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void FlightsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FlightsModel *_t = static_cast<FlightsModel *>(_o);
        switch (_id) {
        case 0: _t->loadingChanged(); break;
        case 1: _t->airportCodeChanged(); break;
        case 2: _t->reloadContents(); break;
        case 3: _t->updateContents((*reinterpret_cast< Node*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FlightsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightsModel::loadingChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (FlightsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightsModel::airportCodeChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject FlightsModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_FlightsModel.data,
      qt_meta_data_FlightsModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *FlightsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FlightsModel.stringdata))
        return static_cast<void*>(const_cast< FlightsModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int FlightsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isLoading(); break;
        case 1: *reinterpret_cast< QString*>(_v) = airportCode(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FlightsModel::loadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FlightsModel::airportCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
