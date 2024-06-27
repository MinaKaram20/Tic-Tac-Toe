/****************************************************************************
** Meta object code from reading C++ file 'sign_up.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sign_up.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sign_up.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
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
struct qt_meta_stringdata_CLASSsign_upENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSsign_upENDCLASS = QtMocHelpers::stringData(
    "sign_up",
    "signedUP",
    "",
    "on_Button_hid_sho_clicked",
    "on_pushButton_cancel_clicked",
    "on_pushButton_sign_up_clicked",
    "on_toggel_access_pushButton_clicked",
    "on_Button_toggel_confirm_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSsign_upENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[8];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[29];
    char stringdata5[30];
    char stringdata6[36];
    char stringdata7[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSsign_upENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSsign_upENDCLASS_t qt_meta_stringdata_CLASSsign_upENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "sign_up"
        QT_MOC_LITERAL(8, 8),  // "signedUP"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 25),  // "on_Button_hid_sho_clicked"
        QT_MOC_LITERAL(44, 28),  // "on_pushButton_cancel_clicked"
        QT_MOC_LITERAL(73, 29),  // "on_pushButton_sign_up_clicked"
        QT_MOC_LITERAL(103, 35),  // "on_toggel_access_pushButton_c..."
        QT_MOC_LITERAL(139, 32)   // "on_Button_toggel_confirm_clicked"
    },
    "sign_up",
    "signedUP",
    "",
    "on_Button_hid_sho_clicked",
    "on_pushButton_cancel_clicked",
    "on_pushButton_sign_up_clicked",
    "on_toggel_access_pushButton_clicked",
    "on_Button_toggel_confirm_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSsign_upENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject sign_up::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSsign_upENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSsign_upENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSsign_upENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<sign_up, std::true_type>,
        // method 'signedUP'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Button_hid_sho_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_cancel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_sign_up_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toggel_access_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Button_toggel_confirm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void sign_up::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<sign_up *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signedUP(); break;
        case 1: _t->on_Button_hid_sho_clicked(); break;
        case 2: _t->on_pushButton_cancel_clicked(); break;
        case 3: _t->on_pushButton_sign_up_clicked(); break;
        case 4: _t->on_toggel_access_pushButton_clicked(); break;
        case 5: _t->on_Button_toggel_confirm_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (sign_up::*)();
            if (_t _q_method = &sign_up::signedUP; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *sign_up::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sign_up::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSsign_upENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int sign_up::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void sign_up::signedUP()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
