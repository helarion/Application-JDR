/****************************************************************************
** Meta object code from reading C++ file 'formNouvellePartie.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fenetre/formNouvellePartie.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formNouvellePartie.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_formNouvellePartie_t {
    QByteArrayData data[7];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_formNouvellePartie_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_formNouvellePartie_t qt_meta_stringdata_formNouvellePartie = {
    {
QT_MOC_LITERAL(0, 0, 18), // "formNouvellePartie"
QT_MOC_LITERAL(1, 19, 17), // "listPartieChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 24), // "on_validerButton_clicked"
QT_MOC_LITERAL(4, 63, 34), // "on_ajouterPersonnageButton_cl..."
QT_MOC_LITERAL(5, 98, 35), // "on_modifierPersonnageButton_c..."
QT_MOC_LITERAL(6, 134, 36) // "on_supprimerPersonnageButton_..."

    },
    "formNouvellePartie\0listPartieChanged\0"
    "\0on_validerButton_clicked\0"
    "on_ajouterPersonnageButton_clicked\0"
    "on_modifierPersonnageButton_clicked\0"
    "on_supprimerPersonnageButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_formNouvellePartie[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void formNouvellePartie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        formNouvellePartie *_t = static_cast<formNouvellePartie *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listPartieChanged(); break;
        case 1: _t->on_validerButton_clicked(); break;
        case 2: _t->on_ajouterPersonnageButton_clicked(); break;
        case 3: _t->on_modifierPersonnageButton_clicked(); break;
        case 4: _t->on_supprimerPersonnageButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (formNouvellePartie::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&formNouvellePartie::listPartieChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject formNouvellePartie::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_formNouvellePartie.data,
      qt_meta_data_formNouvellePartie,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *formNouvellePartie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *formNouvellePartie::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_formNouvellePartie.stringdata0))
        return static_cast<void*>(const_cast< formNouvellePartie*>(this));
    return QDialog::qt_metacast(_clname);
}

int formNouvellePartie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void formNouvellePartie::listPartieChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
