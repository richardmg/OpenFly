/****************************************************************************
** Meta object code from reading C++ file 'airportnames.h'
**
** Created: Fri Nov 9 18:12:28 2012
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "airportnames.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'airportnames.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AirportNames_t {
    QByteArrayData data[10];
    char stringdata[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AirportNames_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AirportNames_t qt_meta_stringdata_AirportNames = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 19),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 5),
QT_MOC_LITERAL(4, 40, 11),
QT_MOC_LITERAL(5, 52, 4),
QT_MOC_LITERAL(6, 57, 13),
QT_MOC_LITERAL(7, 71, 5),
QT_MOC_LITERAL(8, 77, 4),
QT_MOC_LITERAL(9, 82, 14)
    },
    "AirportNames\0avinorAirportCodeAt\0\0"
    "index\0airportName\0code\0createMapping\0"
    "Node*\0root\0avinorAirports\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirportNames[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a,
       4,    1,   32,    2, 0x0a,
       6,    1,   35,    2, 0x09,

 // slots: parameters
    QMetaType::QString, QMetaType::Int,    3,
    QMetaType::QString, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // properties: name, type, flags
       9, QMetaType::QStringList, 0x00095401,

       0        // eod
};

void AirportNames::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AirportNames *_t = static_cast<AirportNames *>(_o);
        switch (_id) {
        case 0: { QString _r = _t->avinorAirportCodeAt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->airportName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->createMapping((*reinterpret_cast< Node*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AirportNames::staticMetaObject = {
    { &XmlDataSource::staticMetaObject, qt_meta_stringdata_AirportNames.data,
      qt_meta_data_AirportNames,  qt_static_metacall, 0, 0}
};


const QMetaObject *AirportNames::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirportNames::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AirportNames.stringdata))
        return static_cast<void*>(const_cast< AirportNames*>(this));
    return XmlDataSource::qt_metacast(_clname);
}

int AirportNames::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XmlDataSource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = avinorAirports(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
