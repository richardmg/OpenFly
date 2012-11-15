/****************************************************************************
** Meta object code from reading C++ file 'flightstatuses.h'
**
** Created: Fri Nov 9 18:12:28 2012
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "flightstatuses.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightstatuses.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FlightStatuses_t {
    QByteArrayData data[12];
    char stringdata[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FlightStatuses_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FlightStatuses_t qt_meta_stringdata_FlightStatuses = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 17),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 17),
QT_MOC_LITERAL(4, 52, 4),
QT_MOC_LITERAL(5, 57, 19),
QT_MOC_LITERAL(6, 77, 13),
QT_MOC_LITERAL(7, 91, 5),
QT_MOC_LITERAL(8, 97, 4),
QT_MOC_LITERAL(9, 102, 10),
QT_MOC_LITERAL(10, 113, 10),
QT_MOC_LITERAL(11, 124, 16)
    },
    "FlightStatuses\0statusCodeChanged\0\0"
    "statusTextEnglish\0code\0statusTextNorwegian\0"
    "createMapping\0Node*\0root\0statusCode\0"
    "StatusCode\0statusCodeString\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightStatuses[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a,
       5,    1,   38,    2, 0x0a,
       6,    1,   41,    2, 0x09,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::QString, QMetaType::QString,    4,
    QMetaType::QString, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x0049510b,
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void FlightStatuses::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FlightStatuses *_t = static_cast<FlightStatuses *>(_o);
        switch (_id) {
        case 0: _t->statusCodeChanged(); break;
        case 1: { QString _r = _t->statusTextEnglish((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->statusTextNorwegian((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->createMapping((*reinterpret_cast< Node*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FlightStatuses::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightStatuses::statusCodeChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FlightStatuses::staticMetaObject = {
    { &XmlDataSource::staticMetaObject, qt_meta_stringdata_FlightStatuses.data,
      qt_meta_data_FlightStatuses,  qt_static_metacall, 0, 0}
};


const QMetaObject *FlightStatuses::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightStatuses::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FlightStatuses.stringdata))
        return static_cast<void*>(const_cast< FlightStatuses*>(this));
    return XmlDataSource::qt_metacast(_clname);
}

int FlightStatuses::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XmlDataSource::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< StatusCode*>(_v) = statusCode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = statusCodeString(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStatusCode(*reinterpret_cast< StatusCode*>(_v)); break;
        case 1: setStatusCodeString(*reinterpret_cast< QString*>(_v)); break;
        }
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
void FlightStatuses::statusCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
