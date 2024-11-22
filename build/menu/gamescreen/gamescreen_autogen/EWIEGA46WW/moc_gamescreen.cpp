/****************************************************************************
** Meta object code from reading C++ file 'gamescreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../menu/gamescreen/gamescreen.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamescreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameScreen_t {
    const uint offsetsAndSize[32];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_GameScreen_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_GameScreen_t qt_meta_stringdata_GameScreen = {
    {
QT_MOC_LITERAL(0, 10), // "GameScreen"
QT_MOC_LITERAL(11, 14), // "send_key_press"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 10), // "QKeyEvent*"
QT_MOC_LITERAL(38, 5), // "event"
QT_MOC_LITERAL(44, 16), // "to_back_to_start"
QT_MOC_LITERAL(61, 11), // "send_scores"
QT_MOC_LITERAL(73, 11), // "std::string"
QT_MOC_LITERAL(85, 9), // "startGame"
QT_MOC_LITERAL(95, 4), // "type"
QT_MOC_LITERAL(100, 12), // "speedOfSnake"
QT_MOC_LITERAL(113, 8), // "gameStop"
QT_MOC_LITERAL(122, 28), // "slot_for_start_immortal_mode"
QT_MOC_LITERAL(151, 25), // "slot_for_start_disappears"
QT_MOC_LITERAL(177, 31), // "slot_for_finished_immortal_mode"
QT_MOC_LITERAL(209, 28) // "slot_for_finished_disappears"

    },
    "GameScreen\0send_key_press\0\0QKeyEvent*\0"
    "event\0to_back_to_start\0send_scores\0"
    "std::string\0startGame\0type\0speedOfSnake\0"
    "gameStop\0slot_for_start_immortal_mode\0"
    "slot_for_start_disappears\0"
    "slot_for_finished_immortal_mode\0"
    "slot_for_finished_disappears"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameScreen[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       5,    0,   71,    2, 0x06,    3 /* Public */,
       6,    3,   72,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    2,   79,    2, 0x0a,    8 /* Public */,
      11,    0,   84,    2, 0x0a,   11 /* Public */,
      12,    0,   85,    2, 0x0a,   12 /* Public */,
      13,    0,   86,    2, 0x0a,   13 /* Public */,
      14,    0,   87,    2, 0x0a,   14 /* Public */,
      15,    0,   88,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7, QMetaType::Int,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameScreen *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->send_key_press((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 1: _t->to_back_to_start(); break;
        case 2: _t->send_scores((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->startGame((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->gameStop(); break;
        case 5: _t->slot_for_start_immortal_mode(); break;
        case 6: _t->slot_for_start_disappears(); break;
        case 7: _t->slot_for_finished_immortal_mode(); break;
        case 8: _t->slot_for_finished_disappears(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameScreen::*)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameScreen::send_key_press)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameScreen::to_back_to_start)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameScreen::*)(int , std::string , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameScreen::send_scores)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GameScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GameScreen.offsetsAndSize,
    qt_meta_data_GameScreen,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GameScreen_t
, QtPrivate::TypeAndForceComplete<GameScreen, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *GameScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameScreen.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void GameScreen::send_key_press(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameScreen::to_back_to_start()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GameScreen::send_scores(int _t1, std::string _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
