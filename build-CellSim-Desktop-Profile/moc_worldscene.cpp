/****************************************************************************
** Meta object code from reading C++ file 'worldscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../worldscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'worldscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WorldScene_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorldScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorldScene_t qt_meta_stringdata_WorldScene = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WorldScene"
QT_MOC_LITERAL(1, 11, 11), // "updateScene"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "QVector<QRectF*>"
QT_MOC_LITERAL(4, 41, 9) // "_itemList"

    },
    "WorldScene\0updateScene\0\0QVector<QRectF*>\0"
    "_itemList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorldScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void WorldScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WorldScene *_t = static_cast<WorldScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateScene((*reinterpret_cast< QVector<QRectF*>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WorldScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_WorldScene.data,
      qt_meta_data_WorldScene,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WorldScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorldScene::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WorldScene.stringdata0))
        return static_cast<void*>(const_cast< WorldScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int WorldScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
