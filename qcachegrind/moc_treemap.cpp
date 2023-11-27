/****************************************************************************
** Meta object code from reading C++ file 'treemap.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libviews/treemap.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'treemap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSTreeMapWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTreeMapWidgetENDCLASS = QtMocHelpers::stringData(
    "TreeMapWidget",
    "selectionChanged",
    "",
    "TreeMapItem*",
    "currentChanged",
    "keyboard",
    "clicked",
    "returnPressed",
    "doubleClicked",
    "rightButtonPressed",
    "contextMenuRequested",
    "splitActivated",
    "QAction*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTreeMapWidgetENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[14];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[15];
    char stringdata5[9];
    char stringdata6[8];
    char stringdata7[14];
    char stringdata8[14];
    char stringdata9[19];
    char stringdata10[21];
    char stringdata11[15];
    char stringdata12[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTreeMapWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTreeMapWidgetENDCLASS_t qt_meta_stringdata_CLASSTreeMapWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "TreeMapWidget"
        QT_MOC_LITERAL(14, 16),  // "selectionChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 12),  // "TreeMapItem*"
        QT_MOC_LITERAL(45, 14),  // "currentChanged"
        QT_MOC_LITERAL(60, 8),  // "keyboard"
        QT_MOC_LITERAL(69, 7),  // "clicked"
        QT_MOC_LITERAL(77, 13),  // "returnPressed"
        QT_MOC_LITERAL(91, 13),  // "doubleClicked"
        QT_MOC_LITERAL(105, 18),  // "rightButtonPressed"
        QT_MOC_LITERAL(124, 20),  // "contextMenuRequested"
        QT_MOC_LITERAL(145, 14),  // "splitActivated"
        QT_MOC_LITERAL(160, 8)   // "QAction*"
    },
    "TreeMapWidget",
    "selectionChanged",
    "",
    "TreeMapItem*",
    "currentChanged",
    "keyboard",
    "clicked",
    "returnPressed",
    "doubleClicked",
    "rightButtonPressed",
    "contextMenuRequested",
    "splitActivated",
    "QAction*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTreeMapWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       1,    1,   69,    2, 0x06,    2 /* Public */,
       4,    2,   72,    2, 0x06,    4 /* Public */,
       6,    1,   77,    2, 0x06,    7 /* Public */,
       7,    1,   80,    2, 0x06,    9 /* Public */,
       8,    1,   83,    2, 0x06,   11 /* Public */,
       9,    2,   86,    2, 0x06,   13 /* Public */,
      10,    2,   91,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   96,    2, 0x09,   19 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    5,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject TreeMapWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTreeMapWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTreeMapWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTreeMapWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TreeMapWidget, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        // method 'currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        // method 'returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        // method 'doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        // method 'rightButtonPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'contextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'splitActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>
    >,
    nullptr
} };

void TreeMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TreeMapWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->clicked((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1]))); break;
        case 4: _t->returnPressed((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1]))); break;
        case 5: _t->doubleClicked((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1]))); break;
        case 6: _t->rightButtonPressed((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 7: _t->contextMenuRequested((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 8: _t->splitActivated((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TreeMapWidget::*)();
            if (_t _q_method = &TreeMapWidget::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TreeMapWidget::*)(TreeMapItem * );
            if (_t _q_method = &TreeMapWidget::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TreeMapWidget::*)(TreeMapItem * , bool );
            if (_t _q_method = &TreeMapWidget::currentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TreeMapWidget::*)(TreeMapItem * );
            if (_t _q_method = &TreeMapWidget::clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TreeMapWidget::*)(TreeMapItem * );
            if (_t _q_method = &TreeMapWidget::returnPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TreeMapWidget::*)(TreeMapItem * );
            if (_t _q_method = &TreeMapWidget::doubleClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TreeMapWidget::*)(TreeMapItem * , const QPoint & );
            if (_t _q_method = &TreeMapWidget::rightButtonPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TreeMapWidget::*)(TreeMapItem * , const QPoint & );
            if (_t _q_method = &TreeMapWidget::contextMenuRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *TreeMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TreeMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTreeMapWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TreeMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void TreeMapWidget::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TreeMapWidget::selectionChanged(TreeMapItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TreeMapWidget::currentChanged(TreeMapItem * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TreeMapWidget::clicked(TreeMapItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TreeMapWidget::returnPressed(TreeMapItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TreeMapWidget::doubleClicked(TreeMapItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TreeMapWidget::rightButtonPressed(TreeMapItem * _t1, const QPoint & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TreeMapWidget::contextMenuRequested(TreeMapItem * _t1, const QPoint & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
