/****************************************************************************
** Meta object code from reading C++ file 'formNouveauPersonnage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fenetre/formNouveauPersonnage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formNouveauPersonnage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_formNouveauPersonnage_t {
    QByteArrayData data[6];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_formNouveauPersonnage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_formNouveauPersonnage_t qt_meta_stringdata_formNouveauPersonnage = {
    {
QT_MOC_LITERAL(0, 0, 21), // "formNouveauPersonnage"
QT_MOC_LITERAL(1, 22, 21), // "listPersonnageChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 24), // "on_ajouterButton_clicked"
QT_MOC_LITERAL(4, 70, 31), // "on_pagePrecedenteButton_clicked"
QT_MOC_LITERAL(5, 102, 29) // "on_pageSuivanteButton_clicked"

    },
    "formNouveauPersonnage\0listPersonnageChanged\0"
    "\0on_ajouterButton_clicked\0"
    "on_pagePrecedenteButton_clicked\0"
    "on_pageSuivanteButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_formNouveauPersonnage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void formNouveauPersonnage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        formNouveauPersonnage *_t = static_cast<formNouveauPersonnage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listPersonnageChanged(); break;
        case 1: _t->on_ajouterButton_clicked(); break;
        case 2: _t->on_pagePrecedenteButton_clicked(); break;
        case 3: _t->on_pageSuivanteButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (formNouveauPersonnage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&formNouveauPersonnage::listPersonnageChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject formNouveauPersonnage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_formNouveauPersonnage.data,
      qt_meta_data_formNouveauPersonnage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *formNouveauPersonnage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *formNouveauPersonnage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_formNouveauPersonnage.stringdata0))
        return static_cast<void*>(const_cast< formNouveauPersonnage*>(this));
    return QDialog::qt_metacast(_clname);
}

int formNouveauPersonnage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void formNouveauPersonnage::listPersonnageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
