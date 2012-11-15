/****************************************************************************
** Meta object code from reading C++ file 'flighttimes.h'
**
** Created: Fri Nov 9 18:12:28 2012
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "flighttimes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flighttimes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FlightTimes_t {
    QByteArrayData data[14];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FlightTimes_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FlightTimes_t qt_meta_stringdata_FlightTimes = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 15),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 13),
QT_MOC_LITERAL(4, 43, 18),
QT_MOC_LITERAL(5, 62, 16),
QT_MOC_LITERAL(6, 79, 17),
QT_MOC_LITERAL(7, 97, 8),
QT_MOC_LITERAL(8, 106, 6),
QT_MOC_LITERAL(9, 113, 11),
QT_MOC_LITERAL(10, 125, 9),
QT_MOC_LITERAL(11, 135, 9),
QT_MOC_LITERAL(12, 145, 15),
QT_MOC_LITERAL(13, 161, 10)
    },
    "FlightTimes\0timeFromChanged\0\0timeToChanged\0"
    "airportCodeChanged\0directionChanged\0"
    "lastUpdateChanged\0timeFrom\0timeTo\0"
    "airportCode\0direction\0Direction\0"
    "directionString\0lastUpdate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightTimes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x05,
       3,    0,   40,    2, 0x05,
       4,    0,   41,    2, 0x05,
       5,    0,   42,    2, 0x05,
       6,    0,   43,    2, 0x05,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495103,
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      10, 0x80000000 | 11, 0x0049510b,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QDateTime, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       3,
       4,

       0        // eod
};

void FlightTimes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FlightTimes *_t = static_cast<FlightTimes *>(_o);
        switch (_id) {
        case 0: _t->timeFromChanged(); break;
        case 1: _t->timeToChanged(); break;
        case 2: _t->airportCodeChanged(); break;
        case 3: _t->directionChanged(); break;
        case 4: _t->lastUpdateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FlightTimes::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightTimes::timeFromChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (FlightTimes::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightTimes::timeToChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (FlightTimes::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightTimes::airportCodeChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (FlightTimes::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightTimes::directionChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (FlightTimes::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlightTimes::lastUpdateChanged)) {
                *result = 4;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FlightTimes::staticMetaObject = {
    { &XmlDataSource::staticMetaObject, qt_meta_stringdata_FlightTimes.data,
      qt_meta_data_FlightTimes,  qt_static_metacall, 0, 0}
};


const QMetaObject *FlightTimes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightTimes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FlightTimes.stringdata))
        return static_cast<void*>(const_cast< FlightTimes*>(this));
    return XmlDataSource::qt_metacast(_clname);
}

int FlightTimes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XmlDataSource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = timeFrom(); break;
        case 1: *reinterpret_cast< int*>(_v) = timeTo(); break;
        case 2: *reinterpret_cast< QString*>(_v) = airportCode(); break;
        case 3: *reinterpret_cast< Direction*>(_v) = direction(); break;
        case 4: *reinterpret_cast< QString*>(_v) = directionString(); break;
        case 5: *reinterpret_cast< QDateTime*>(_v) = lastUpdate(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTimeFrom(*reinterpret_cast< int*>(_v)); break;
        case 1: setTimeTo(*reinterpret_cast< int*>(_v)); break;
        case 2: setAirportCode(*reinterpret_cast< QString*>(_v)); break;
        case 3: setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 4: setDirectionString(*reinterpret_cast< QString*>(_v)); break;
        case 5: setLastUpdate(*reinterpret_cast< QDateTime*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FlightTimes::timeFromChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FlightTimes::timeToChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FlightTimes::airportCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void FlightTimes::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void FlightTimes::lastUpdateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
