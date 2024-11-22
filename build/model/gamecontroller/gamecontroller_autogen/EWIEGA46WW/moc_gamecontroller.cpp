/****************************************************************************
** Meta object code from reading C++ file 'gamecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../model/gamecontroller/gamecontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamecontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SnakeGameController_t {
    const uint offsetsAndSize[44];
    char stringdata0[396];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SnakeGameController_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SnakeGameController_t qt_meta_stringdata_SnakeGameController = {
    {
QT_MOC_LITERAL(0, 19), // "SnakeGameController"
QT_MOC_LITERAL(20, 7), // "updated"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 8), // "gameOver"
QT_MOC_LITERAL(38, 31), // "singnalForRemoveElixirFromScene"
QT_MOC_LITERAL(70, 7), // "Elixir*"
QT_MOC_LITERAL(78, 6), // "elixir"
QT_MOC_LITERAL(85, 22), // "signalForBlinkingSnake"
QT_MOC_LITERAL(108, 26), // "signalForStopBlinkingSnake"
QT_MOC_LITERAL(135, 18), // "elixirtimerChanged"
QT_MOC_LITERAL(154, 12), // "scoreChanged"
QT_MOC_LITERAL(167, 30), // "signal_for_start_immortal_mode"
QT_MOC_LITERAL(198, 33), // "signal_for_finished_immortal_..."
QT_MOC_LITERAL(232, 27), // "signal_for_start_disappears"
QT_MOC_LITERAL(260, 30), // "signal_for_finished_disappears"
QT_MOC_LITERAL(291, 8), // "keyPress"
QT_MOC_LITERAL(300, 10), // "QKeyEvent*"
QT_MOC_LITERAL(311, 5), // "event"
QT_MOC_LITERAL(317, 4), // "step"
QT_MOC_LITERAL(322, 15), // "generate_elixir"
QT_MOC_LITERAL(338, 27), // "removeElixirAfterEndOfTimer"
QT_MOC_LITERAL(366, 29) // "countdownToEndImmortalityMode"

    },
    "SnakeGameController\0updated\0\0gameOver\0"
    "singnalForRemoveElixirFromScene\0Elixir*\0"
    "elixir\0signalForBlinkingSnake\0"
    "signalForStopBlinkingSnake\0"
    "elixirtimerChanged\0scoreChanged\0"
    "signal_for_start_immortal_mode\0"
    "signal_for_finished_immortal_mode\0"
    "signal_for_start_disappears\0"
    "signal_for_finished_disappears\0keyPress\0"
    "QKeyEvent*\0event\0step\0generate_elixir\0"
    "removeElixirAfterEndOfTimer\0"
    "countdownToEndImmortalityMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SnakeGameController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x06,    1 /* Public */,
       3,    0,  123,    2, 0x06,    2 /* Public */,
       4,    1,  124,    2, 0x06,    3 /* Public */,
       7,    0,  127,    2, 0x06,    5 /* Public */,
       8,    0,  128,    2, 0x06,    6 /* Public */,
       9,    1,  129,    2, 0x06,    7 /* Public */,
       9,    1,  132,    2, 0x06,    9 /* Public */,
       9,    1,  135,    2, 0x06,   11 /* Public */,
      10,    1,  138,    2, 0x06,   13 /* Public */,
      11,    0,  141,    2, 0x06,   15 /* Public */,
      12,    0,  142,    2, 0x06,   16 /* Public */,
      13,    0,  143,    2, 0x06,   17 /* Public */,
      14,    0,  144,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    1,  145,    2, 0x0a,   19 /* Public */,
      18,    0,  148,    2, 0x0a,   21 /* Public */,
      19,    0,  149,    2, 0x0a,   22 /* Public */,
      20,    0,  150,    2, 0x0a,   23 /* Public */,
      21,    0,  151,    2, 0x0a,   24 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QTime,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SnakeGameController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SnakeGameController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->gameOver(); break;
        case 2: _t->singnalForRemoveElixirFromScene((*reinterpret_cast< std::add_pointer_t<Elixir*>>(_a[1]))); break;
        case 3: _t->signalForBlinkingSnake(); break;
        case 4: _t->signalForStopBlinkingSnake(); break;
        case 5: _t->elixirtimerChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->elixirtimerChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->elixirtimerChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 8: _t->scoreChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->signal_for_start_immortal_mode(); break;
        case 10: _t->signal_for_finished_immortal_mode(); break;
        case 11: _t->signal_for_start_disappears(); break;
        case 12: _t->signal_for_finished_disappears(); break;
        case 13: _t->keyPress((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 14: _t->step(); break;
        case 15: _t->generate_elixir(); break;
        case 16: _t->removeElixirAfterEndOfTimer(); break;
        case 17: _t->countdownToEndImmortalityMode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Elixir* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SnakeGameController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::updated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::gameOver)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)(Elixir * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::singnalForRemoveElixirFromScene)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::signalForBlinkingSnake)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::signalForStopBlinkingSnake)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::elixirtimerChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::elixirtimerChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)(QTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::elixirtimerChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::scoreChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::signal_for_start_immortal_mode)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::signal_for_finished_immortal_mode)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::signal_for_start_disappears)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SnakeGameController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SnakeGameController::signal_for_finished_disappears)) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject SnakeGameController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SnakeGameController.offsetsAndSize,
    qt_meta_data_SnakeGameController,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SnakeGameController_t
, QtPrivate::TypeAndForceComplete<SnakeGameController, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Elixir *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *SnakeGameController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SnakeGameController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SnakeGameController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SnakeGameController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void SnakeGameController::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SnakeGameController::gameOver()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SnakeGameController::singnalForRemoveElixirFromScene(Elixir * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SnakeGameController::signalForBlinkingSnake()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SnakeGameController::signalForStopBlinkingSnake()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SnakeGameController::elixirtimerChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SnakeGameController::elixirtimerChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SnakeGameController::elixirtimerChanged(QTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SnakeGameController::scoreChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SnakeGameController::signal_for_start_immortal_mode()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void SnakeGameController::signal_for_finished_immortal_mode()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void SnakeGameController::signal_for_start_disappears()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void SnakeGameController::signal_for_finished_disappears()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
