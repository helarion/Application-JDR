/****************************************************************************
** Meta object code from reading C++ file 'formLecteurMusique.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fenetre/formLecteurMusique.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formLecteurMusique.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_formLecteurMusique_t {
    QByteArrayData data[11];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_formLecteurMusique_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_formLecteurMusique_t qt_meta_stringdata_formLecteurMusique = {
    {
QT_MOC_LITERAL(0, 0, 18), // "formLecteurMusique"
QT_MOC_LITERAL(1, 19, 22), // "on_PauseButton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "on_PlayButton_clicked"
QT_MOC_LITERAL(4, 65, 23), // "on_OuvrirButton_clicked"
QT_MOC_LITERAL(5, 89, 21), // "on_StopButton_clicked"
QT_MOC_LITERAL(6, 111, 29), // "on_ProgressSlider_sliderMoved"
QT_MOC_LITERAL(7, 141, 8), // "position"
QT_MOC_LITERAL(8, 150, 18), // "on_DurationChanged"
QT_MOC_LITERAL(9, 169, 18), // "on_positionChanged"
QT_MOC_LITERAL(10, 188, 29) // "on_verticalSlider_sliderMoved"

    },
    "formLecteurMusique\0on_PauseButton_clicked\0"
    "\0on_PlayButton_clicked\0on_OuvrirButton_clicked\0"
    "on_StopButton_clicked\0"
    "on_ProgressSlider_sliderMoved\0position\0"
    "on_DurationChanged\0on_positionChanged\0"
    "on_verticalSlider_sliderMoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_formLecteurMusique[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void formLecteurMusique::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        formLecteurMusique *_t = static_cast<formLecteurMusique *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_PauseButton_clicked(); break;
        case 1: _t->on_PlayButton_clicked(); break;
        case 2: _t->on_OuvrirButton_clicked(); break;
        case 3: _t->on_StopButton_clicked(); break;
        case 4: _t->on_ProgressSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_DurationChanged(); break;
        case 6: _t->on_positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->on_verticalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject formLecteurMusique::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_formLecteurMusique.data,
      qt_meta_data_formLecteurMusique,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *formLecteurMusique::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *formLecteurMusique::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_formLecteurMusique.stringdata0))
        return static_cast<void*>(const_cast< formLecteurMusique*>(this));
    return QDialog::qt_metacast(_clname);
}

int formLecteurMusique::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
