/****************************************************************************
** Meta object code from reading C++ file 'tictactoe.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../tictactoe.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tictactoe.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSquareWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSquareWidgetENDCLASS = QtMocHelpers::stringData(
    "SquareWidget"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSquareWidgetENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSquareWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSquareWidgetENDCLASS_t qt_meta_stringdata_CLASSSquareWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12)   // "SquareWidget"
    },
    "SquareWidget"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSquareWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject SquareWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSSquareWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSquareWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSquareWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SquareWidget, std::true_type>
    >,
    nullptr
} };

void SquareWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SquareWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SquareWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSquareWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SquareWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTicTacToeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTicTacToeENDCLASS = QtMocHelpers::stringData(
    "TicTacToe",
    "returnToMainMenu",
    "",
    "closeGame",
    "gameClosed",
    "checkWin",
    "computerMove",
    "minimax",
    "char[3][3]",
    "board",
    "isMax",
    "depth",
    "alpha",
    "beta",
    "evaluate",
    "isMovesLeft",
    "updateScores",
    "winner",
    "saveHistory",
    "isDraw",
    "toggleDifficulty",
    "highlightWinningLine",
    "winType",
    "index",
    "gameOver",
    "replayGame"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTicTacToeENDCLASS_t {
    uint offsetsAndSizes[52];
    char stringdata0[10];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[11];
    char stringdata5[9];
    char stringdata6[13];
    char stringdata7[8];
    char stringdata8[11];
    char stringdata9[6];
    char stringdata10[6];
    char stringdata11[6];
    char stringdata12[6];
    char stringdata13[5];
    char stringdata14[9];
    char stringdata15[12];
    char stringdata16[13];
    char stringdata17[7];
    char stringdata18[12];
    char stringdata19[7];
    char stringdata20[17];
    char stringdata21[21];
    char stringdata22[8];
    char stringdata23[6];
    char stringdata24[9];
    char stringdata25[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTicTacToeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTicTacToeENDCLASS_t qt_meta_stringdata_CLASSTicTacToeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "TicTacToe"
        QT_MOC_LITERAL(10, 16),  // "returnToMainMenu"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 9),  // "closeGame"
        QT_MOC_LITERAL(38, 10),  // "gameClosed"
        QT_MOC_LITERAL(49, 8),  // "checkWin"
        QT_MOC_LITERAL(58, 12),  // "computerMove"
        QT_MOC_LITERAL(71, 7),  // "minimax"
        QT_MOC_LITERAL(79, 10),  // "char[3][3]"
        QT_MOC_LITERAL(90, 5),  // "board"
        QT_MOC_LITERAL(96, 5),  // "isMax"
        QT_MOC_LITERAL(102, 5),  // "depth"
        QT_MOC_LITERAL(108, 5),  // "alpha"
        QT_MOC_LITERAL(114, 4),  // "beta"
        QT_MOC_LITERAL(119, 8),  // "evaluate"
        QT_MOC_LITERAL(128, 11),  // "isMovesLeft"
        QT_MOC_LITERAL(140, 12),  // "updateScores"
        QT_MOC_LITERAL(153, 6),  // "winner"
        QT_MOC_LITERAL(160, 11),  // "saveHistory"
        QT_MOC_LITERAL(172, 6),  // "isDraw"
        QT_MOC_LITERAL(179, 16),  // "toggleDifficulty"
        QT_MOC_LITERAL(196, 20),  // "highlightWinningLine"
        QT_MOC_LITERAL(217, 7),  // "winType"
        QT_MOC_LITERAL(225, 5),  // "index"
        QT_MOC_LITERAL(231, 8),  // "gameOver"
        QT_MOC_LITERAL(240, 10)   // "replayGame"
    },
    "TicTacToe",
    "returnToMainMenu",
    "",
    "closeGame",
    "gameClosed",
    "checkWin",
    "computerMove",
    "minimax",
    "char[3][3]",
    "board",
    "isMax",
    "depth",
    "alpha",
    "beta",
    "evaluate",
    "isMovesLeft",
    "updateScores",
    "winner",
    "saveHistory",
    "isDraw",
    "toggleDifficulty",
    "highlightWinningLine",
    "winType",
    "index",
    "gameOver",
    "replayGame"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTicTacToeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x06,    1 /* Public */,
       3,    0,  123,    2, 0x06,    2 /* Public */,
       4,    0,  124,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,  125,    2, 0x08,    4 /* Private */,
       6,    0,  126,    2, 0x08,    5 /* Private */,
       7,    5,  127,    2, 0x08,    6 /* Private */,
       7,    4,  138,    2, 0x28,   12 /* Private | MethodCloned */,
       7,    3,  147,    2, 0x28,   17 /* Private | MethodCloned */,
       7,    2,  154,    2, 0x28,   21 /* Private | MethodCloned */,
      14,    1,  159,    2, 0x08,   24 /* Private */,
      15,    1,  162,    2, 0x08,   26 /* Private */,
      16,    1,  165,    2, 0x08,   28 /* Private */,
      18,    1,  168,    2, 0x08,   30 /* Private */,
      19,    0,  171,    2, 0x08,   32 /* Private */,
      20,    0,  172,    2, 0x08,   33 /* Private */,
      21,    2,  173,    2, 0x08,   34 /* Private */,
      24,    0,  178,    2, 0x08,   37 /* Private */,
      25,    0,  179,    2, 0x08,   38 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 8, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   10,   11,   12,   13,
    QMetaType::Int, 0x80000000 | 8, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    9,   10,   11,   12,
    QMetaType::Int, 0x80000000 | 8, QMetaType::Bool, QMetaType::Int,    9,   10,   11,
    QMetaType::Int, 0x80000000 | 8, QMetaType::Bool,    9,   10,
    QMetaType::Int, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Char,   17,
    QMetaType::Void, QMetaType::Char,   17,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TicTacToe::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTicTacToeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTicTacToeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTicTacToeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TicTacToe, std::true_type>,
        // method 'returnToMainMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gameClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkWin'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'computerMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minimax'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<char, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'minimax'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<char, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'minimax'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<char, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'minimax'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<char, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'evaluate'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<char, std::false_type>,
        // method 'isMovesLeft'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<char, std::false_type>,
        // method 'updateScores'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<char, std::false_type>,
        // method 'saveHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<char, std::false_type>,
        // method 'isDraw'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'toggleDifficulty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'highlightWinningLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'gameOver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replayGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TicTacToe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TicTacToe *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->returnToMainMenu(); break;
        case 1: _t->closeGame(); break;
        case 2: _t->gameClosed(); break;
        case 3: { bool _r = _t->checkWin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->computerMove(); break;
        case 5: { int _r = _t->minimax((*reinterpret_cast< std::add_pointer_t<char[3][3]>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->minimax((*reinterpret_cast< std::add_pointer_t<char[3][3]>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->minimax((*reinterpret_cast< std::add_pointer_t<char[3][3]>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->minimax((*reinterpret_cast< std::add_pointer_t<char[3][3]>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->evaluate((*reinterpret_cast< std::add_pointer_t<char[3][3]>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->isMovesLeft((*reinterpret_cast< std::add_pointer_t<char[3][3]>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->updateScores((*reinterpret_cast< std::add_pointer_t<char>>(_a[1]))); break;
        case 12: _t->saveHistory((*reinterpret_cast< std::add_pointer_t<char>>(_a[1]))); break;
        case 13: { bool _r = _t->isDraw();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->toggleDifficulty(); break;
        case 15: _t->highlightWinningLine((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 16: _t->gameOver(); break;
        case 17: _t->replayGame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TicTacToe::*)();
            if (_t _q_method = &TicTacToe::returnToMainMenu; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TicTacToe::*)();
            if (_t _q_method = &TicTacToe::closeGame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TicTacToe::*)();
            if (_t _q_method = &TicTacToe::gameClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *TicTacToe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TicTacToe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTicTacToeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TicTacToe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void TicTacToe::returnToMainMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TicTacToe::closeGame()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TicTacToe::gameClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
