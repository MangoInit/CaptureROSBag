/****************************************************************************
** Meta object code from reading C++ file 'littlewin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../littlewin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'littlewin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LittleWin_t {
    QByteArrayData data[20];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LittleWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LittleWin_t qt_meta_stringdata_LittleWin = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LittleWin"
QT_MOC_LITERAL(1, 10, 15), // "little_win_exit"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 49, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 73, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(6, 97, 22), // "on_exit_button_clicked"
QT_MOC_LITERAL(7, 120, 7), // "checked"
QT_MOC_LITERAL(8, 128, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(9, 151, 24), // "on_getlog_button_clicked"
QT_MOC_LITERAL(10, 176, 14), // "copyFileToPath"
QT_MOC_LITERAL(11, 191, 9), // "sourceDir"
QT_MOC_LITERAL(12, 201, 5), // "toDir"
QT_MOC_LITERAL(13, 207, 16), // "coverFileIfExist"
QT_MOC_LITERAL(14, 224, 18), // "copyDirectoryFiles"
QT_MOC_LITERAL(15, 243, 7), // "fromDir"
QT_MOC_LITERAL(16, 251, 11), // "timeoutslot"
QT_MOC_LITERAL(17, 263, 12), // "timeoutslot2"
QT_MOC_LITERAL(18, 276, 13), // "tcp_connected"
QT_MOC_LITERAL(19, 290, 16) // "tcp_disconnected"

    },
    "LittleWin\0little_win_exit\0\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_exit_button_clicked\0"
    "checked\0on_radioButton_clicked\0"
    "on_getlog_button_clicked\0copyFileToPath\0"
    "sourceDir\0toDir\0coverFileIfExist\0"
    "copyDirectoryFiles\0fromDir\0timeoutslot\0"
    "timeoutslot2\0tcp_connected\0tcp_disconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LittleWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   82,    2, 0x08 /* Private */,
       4,    0,   83,    2, 0x08 /* Private */,
       5,    0,   84,    2, 0x08 /* Private */,
       6,    1,   85,    2, 0x08 /* Private */,
       8,    0,   88,    2, 0x08 /* Private */,
       9,    0,   89,    2, 0x08 /* Private */,
      10,    3,   90,    2, 0x08 /* Private */,
      14,    3,   97,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,
      18,    0,  106,    2, 0x08 /* Private */,
      19,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   11,   12,   13,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   15,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LittleWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LittleWin *_t = static_cast<LittleWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->little_win_exit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_exit_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_radioButton_clicked(); break;
        case 6: _t->on_getlog_button_clicked(); break;
        case 7: { bool _r = _t->copyFileToPath((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->copyDirectoryFiles((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->timeoutslot(); break;
        case 10: _t->timeoutslot2(); break;
        case 11: _t->tcp_connected(); break;
        case 12: _t->tcp_disconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LittleWin::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LittleWin::little_win_exit)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LittleWin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LittleWin.data,
      qt_meta_data_LittleWin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LittleWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LittleWin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LittleWin.stringdata0))
        return static_cast<void*>(const_cast< LittleWin*>(this));
    return QWidget::qt_metacast(_clname);
}

int LittleWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void LittleWin::little_win_exit(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
