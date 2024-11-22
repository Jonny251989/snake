/****************************************************************************
** Meta object code from reading C++ file 'screencontroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../menu/screencontroller/screencontroller.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screencontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScreenController_t {
    const uint offsetsAndSize[36];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ScreenController_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ScreenController_t qt_meta_stringdata_ScreenController = {
    {
QT_MOC_LITERAL(0, 16), // "ScreenController"
QT_MOC_LITERAL(17, 17), // "scoreScreenShowed"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 16), // "gameScreenShowed"
QT_MOC_LITERAL(53, 8), // "QString&"
QT_MOC_LITERAL(62, 9), // "levelpath"
QT_MOC_LITERAL(72, 12), // "gameFinished"
QT_MOC_LITERAL(85, 11), // "std::string"
QT_MOC_LITERAL(97, 7), // "to_game"
QT_MOC_LITERAL(105, 16), // "menuScreenShowed"
QT_MOC_LITERAL(122, 15), // "needInsertScore"
QT_MOC_LITERAL(138, 5), // "score"
QT_MOC_LITERAL(144, 10), // "on_2scores"
QT_MOC_LITERAL(155, 8), // "on_2menu"
QT_MOC_LITERAL(164, 7), // "on_game"
QT_MOC_LITERAL(172, 13), // "to_start_menu"
QT_MOC_LITERAL(186, 16), // "on_game_finished"
QT_MOC_LITERAL(203, 18) // "to_start_menu_back"

    },
    "ScreenController\0scoreScreenShowed\0\0"
    "gameScreenShowed\0QString&\0levelpath\0"
    "gameFinished\0std::string\0to_game\0"
    "menuScreenShowed\0needInsertScore\0score\0"
    "on_2scores\0on_2menu\0on_game\0to_start_menu\0"
    "on_game_finished\0to_start_menu_back"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenController[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,
       3,    1,   87,    2, 0x06,    2 /* Public */,
       6,    3,   90,    2, 0x06,    4 /* Public */,
       8,    2,   97,    2, 0x06,    8 /* Public */,
       9,    0,  102,    2, 0x06,   11 /* Public */,
      10,    1,  103,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  106,    2, 0x0a,   14 /* Public */,
      13,    0,  107,    2, 0x0a,   15 /* Public */,
      14,    2,  108,    2, 0x0a,   16 /* Public */,
      15,    0,  113,    2, 0x0a,   19 /* Public */,
      16,    3,  114,    2, 0x0a,   20 /* Public */,
      17,    0,  121,    2, 0x0a,   24 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void ScreenController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScreenController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scoreScreenShowed(); break;
        case 1: _t->gameScreenShowed((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 2: _t->gameFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->to_game((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->menuScreenShowed(); break;
        case 5: _t->needInsertScore((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_2scores(); break;
        case 7: _t->on_2menu(); break;
        case 8: _t->on_game((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->to_start_menu(); break;
        case 10: _t->on_game_finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 11: _t->to_start_menu_back(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScreenController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenController::scoreScreenShowed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScreenController::*)(QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenController::gameScreenShowed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScreenController::*)(int , std::string , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenController::gameFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScreenController::*)(std::string , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenController::to_game)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ScreenController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenController::menuScreenShowed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ScreenController::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenController::needInsertScore)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject ScreenController::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ScreenController.offsetsAndSize,
    qt_meta_data_ScreenController,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ScreenController_t
, QtPrivate::TypeAndForceComplete<ScreenController, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<std::string, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ScreenController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenController.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ScreenController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ScreenController::scoreScreenShowed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScreenController::gameScreenShowed(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScreenController::gameFinished(int _t1, std::string _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ScreenController::to_game(std::string _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ScreenController::menuScreenShowed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ScreenController::needInsertScore(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
