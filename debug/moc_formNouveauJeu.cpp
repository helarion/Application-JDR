/****************************************************************************
** Meta object code from reading C++ file 'formNouveauJeu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fenetre/formNouveauJeu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formNouveauJeu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_formNouveauJeu_t {
    QByteArrayData data[10];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_formNouveauJeu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_formNouveauJeu_t qt_meta_stringdata_formNouveauJeu = {
    {
QT_MOC_LITERAL(0, 0, 14), // "formNouveauJeu"
QT_MOC_LITERAL(1, 15, 14), // "listJeuChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "on_CreerJeu_clicked"
QT_MOC_LITERAL(4, 51, 26), // "on_parcourirButton_clicked"
QT_MOC_LITERAL(5, 78, 32), // "on_nouveauAttributButton_clicked"
QT_MOC_LITERAL(6, 111, 18), // "changementAttribut"
QT_MOC_LITERAL(7, 130, 24), // "on_ajouterButton_clicked"
QT_MOC_LITERAL(8, 155, 24), // "on_retirerButton_clicked"
QT_MOC_LITERAL(9, 180, 34) // "on_supprimerAttributButton_cl..."

    },
    "formNouveauJeu\0listJeuChanged\0\0"
    "on_CreerJeu_clicked\0on_parcourirButton_clicked\0"
    "on_nouveauAttributButton_clicked\0"
    "changementAttribut\0on_ajouterButton_clicked\0"
    "on_retirerButton_clicked\0"
    "on_supprimerAttributButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_formNouveauJeu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void formNouveauJeu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        formNouveauJeu *_t = static_cast<formNouveauJeu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listJeuChanged(); break;
        case 1: _t->on_CreerJeu_clicked(); break;
        case 2: _t->on_parcourirButton_clicked(); break;
        case 3: _t->on_nouveauAttributButton_clicked(); break;
        case 4: _t->changementAttribut(); break;
        case 5: _t->on_ajouterButton_clicked(); break;
        case 6: _t->on_retirerButton_clicked(); break;
        case 7: _t->on_supprimerAttributButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (formNouveauJeu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&formNouveauJeu::listJeuChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject formNouveauJeu::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_formNouveauJeu.data,
      qt_meta_data_formNouveauJeu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *formNouveauJeu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *formNouveauJeu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_formNouveauJeu.stringdata0))
        return static_cast<void*>(const_cast< formNouveauJeu*>(this));
    return QDialog::qt_metacast(_clname);
}

int formNouveauJeu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void formNouveauJeu::listJeuChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
