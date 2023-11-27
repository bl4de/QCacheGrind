/****************************************************************************
** Meta object code from reading C++ file 'callmapview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libviews/callmapview.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'callmapview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCallMapViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCallMapViewENDCLASS = QtMocHelpers::stringData(
    "CallMapView",
    "context",
    "",
    "TreeMapItem*",
    "selectedSlot",
    "activatedSlot",
    "mapItemTriggered",
    "QAction*",
    "drawingDepthTriggered",
    "stopFunctionTriggered",
    "areaLimitTriggered",
    "borderWidthTriggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCallMapViewENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[13];
    char stringdata5[14];
    char stringdata6[17];
    char stringdata7[9];
    char stringdata8[22];
    char stringdata9[22];
    char stringdata10[19];
    char stringdata11[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCallMapViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCallMapViewENDCLASS_t qt_meta_stringdata_CLASSCallMapViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "CallMapView"
        QT_MOC_LITERAL(12, 7),  // "context"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 12),  // "TreeMapItem*"
        QT_MOC_LITERAL(34, 12),  // "selectedSlot"
        QT_MOC_LITERAL(47, 13),  // "activatedSlot"
        QT_MOC_LITERAL(61, 16),  // "mapItemTriggered"
        QT_MOC_LITERAL(78, 8),  // "QAction*"
        QT_MOC_LITERAL(87, 21),  // "drawingDepthTriggered"
        QT_MOC_LITERAL(109, 21),  // "stopFunctionTriggered"
        QT_MOC_LITERAL(131, 18),  // "areaLimitTriggered"
        QT_MOC_LITERAL(150, 20)   // "borderWidthTriggered"
    },
    "CallMapView",
    "context",
    "",
    "TreeMapItem*",
    "selectedSlot",
    "activatedSlot",
    "mapItemTriggered",
    "QAction*",
    "drawingDepthTriggered",
    "stopFunctionTriggered",
    "areaLimitTriggered",
    "borderWidthTriggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCallMapViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x08,    1 /* Private */,
       4,    2,   67,    2, 0x08,    4 /* Private */,
       5,    1,   72,    2, 0x08,    7 /* Private */,
       6,    1,   75,    2, 0x08,    9 /* Private */,
       8,    1,   78,    2, 0x08,   11 /* Private */,
       9,    1,   81,    2, 0x08,   13 /* Private */,
      10,    1,   84,    2, 0x08,   15 /* Private */,
      11,    1,   87,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject CallMapView::staticMetaObject = { {
    QMetaObject::SuperData::link<TreeMapWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSCallMapViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCallMapViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCallMapViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CallMapView, std::true_type>,
        // method 'context'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'selectedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'activatedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        // method 'mapItemTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'drawingDepthTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'stopFunctionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'areaLimitTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'borderWidthTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>
    >,
    nullptr
} };

void CallMapView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CallMapView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->context((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 1: _t->selectedSlot((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->activatedSlot((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1]))); break;
        case 3: _t->mapItemTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 4: _t->drawingDepthTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 5: _t->stopFunctionTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 6: _t->areaLimitTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 7: _t->borderWidthTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *CallMapView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallMapView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCallMapViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TraceItemView"))
        return static_cast< TraceItemView*>(this);
    return TreeMapWidget::qt_metacast(_clname);
}

int CallMapView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeMapWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
