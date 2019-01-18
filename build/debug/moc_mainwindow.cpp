/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "on_actionAdd_triggered"
QT_MOC_LITERAL(4, 59, 12), // "window_close"
QT_MOC_LITERAL(5, 72, 10), // "closeEvent"
QT_MOC_LITERAL(6, 83, 12), // "QCloseEvent*"
QT_MOC_LITERAL(7, 96, 5), // "event"
QT_MOC_LITERAL(8, 102, 8), // "FileShow"
QT_MOC_LITERAL(9, 111, 12), // "showFileList"
QT_MOC_LITERAL(10, 124, 13), // "QFileInfoList"
QT_MOC_LITERAL(11, 138, 4), // "list"
QT_MOC_LITERAL(12, 143, 7), // "DirShow"
QT_MOC_LITERAL(13, 151, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(14, 168, 4), // "Item"
QT_MOC_LITERAL(15, 173, 15), // "mousePressEvent"
QT_MOC_LITERAL(16, 189, 12), // "QMouseEvent*"
QT_MOC_LITERAL(17, 202, 11), // "timeoutslot"
QT_MOC_LITERAL(18, 214, 23) // "on_actionHelp_triggered"

    },
    "MainWindow\0on_actionExit_triggered\0\0"
    "on_actionAdd_triggered\0window_close\0"
    "closeEvent\0QCloseEvent*\0event\0FileShow\0"
    "showFileList\0QFileInfoList\0list\0DirShow\0"
    "QListWidgetItem*\0Item\0mousePressEvent\0"
    "QMouseEvent*\0timeoutslot\0"
    "on_actionHelp_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       5,    1,   69,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    1,   73,    2, 0x08 /* Private */,
      12,    1,   76,    2, 0x08 /* Private */,
      15,    1,   79,    2, 0x08 /* Private */,
      17,    0,   82,    2, 0x08 /* Private */,
      18,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionExit_triggered(); break;
        case 1: _t->on_actionAdd_triggered(); break;
        case 2: _t->window_close((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 4: _t->FileShow(); break;
        case 5: _t->showFileList((*reinterpret_cast< QFileInfoList(*)>(_a[1]))); break;
        case 6: _t->DirShow((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->timeoutslot(); break;
        case 9: _t->on_actionHelp_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
