/****************************************************************************
** Meta object code from reading C++ file 'callgraphview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libviews/callgraphview.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'callgraphview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPanningViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPanningViewENDCLASS = QtMocHelpers::stringData(
    "PanningView",
    "zoomRectMoved",
    "",
    "dx",
    "dy",
    "zoomRectMoveFinished"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPanningViewENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[3];
    char stringdata5[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPanningViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPanningViewENDCLASS_t qt_meta_stringdata_CLASSPanningViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "PanningView"
        QT_MOC_LITERAL(12, 13),  // "zoomRectMoved"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 2),  // "dx"
        QT_MOC_LITERAL(30, 2),  // "dy"
        QT_MOC_LITERAL(33, 20)   // "zoomRectMoveFinished"
    },
    "PanningView",
    "zoomRectMoved",
    "",
    "dx",
    "dy",
    "zoomRectMoveFinished"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPanningViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x06,    1 /* Public */,
       5,    0,   31,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    3,    4,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PanningView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_CLASSPanningViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPanningViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPanningViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PanningView, std::true_type>,
        // method 'zoomRectMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'zoomRectMoveFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PanningView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PanningView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->zoomRectMoved((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[2]))); break;
        case 1: _t->zoomRectMoveFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PanningView::*)(qreal , qreal );
            if (_t _q_method = &PanningView::zoomRectMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PanningView::*)();
            if (_t _q_method = &PanningView::zoomRectMoveFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *PanningView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PanningView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPanningViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int PanningView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PanningView::zoomRectMoved(qreal _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PanningView::zoomRectMoveFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCallGraphViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCallGraphViewENDCLASS = QtMocHelpers::stringData(
    "CallGraphView",
    "zoomRectMoved",
    "",
    "zoomRectMoveFinished",
    "showRenderWarning",
    "showRenderError",
    "stopRendering",
    "readDotOutput",
    "dotError",
    "dotExited",
    "callerDepthTriggered",
    "QAction*",
    "calleeDepthTriggered",
    "nodeLimitTriggered",
    "callLimitTriggered",
    "zoomPosTriggered",
    "layoutTriggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCallGraphViewENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[14];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[18];
    char stringdata5[16];
    char stringdata6[14];
    char stringdata7[14];
    char stringdata8[9];
    char stringdata9[10];
    char stringdata10[21];
    char stringdata11[9];
    char stringdata12[21];
    char stringdata13[19];
    char stringdata14[19];
    char stringdata15[17];
    char stringdata16[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCallGraphViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCallGraphViewENDCLASS_t qt_meta_stringdata_CLASSCallGraphViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "CallGraphView"
        QT_MOC_LITERAL(14, 13),  // "zoomRectMoved"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 20),  // "zoomRectMoveFinished"
        QT_MOC_LITERAL(50, 17),  // "showRenderWarning"
        QT_MOC_LITERAL(68, 15),  // "showRenderError"
        QT_MOC_LITERAL(84, 13),  // "stopRendering"
        QT_MOC_LITERAL(98, 13),  // "readDotOutput"
        QT_MOC_LITERAL(112, 8),  // "dotError"
        QT_MOC_LITERAL(121, 9),  // "dotExited"
        QT_MOC_LITERAL(131, 20),  // "callerDepthTriggered"
        QT_MOC_LITERAL(152, 8),  // "QAction*"
        QT_MOC_LITERAL(161, 20),  // "calleeDepthTriggered"
        QT_MOC_LITERAL(182, 18),  // "nodeLimitTriggered"
        QT_MOC_LITERAL(201, 18),  // "callLimitTriggered"
        QT_MOC_LITERAL(220, 16),  // "zoomPosTriggered"
        QT_MOC_LITERAL(237, 15)   // "layoutTriggered"
    },
    "CallGraphView",
    "zoomRectMoved",
    "",
    "zoomRectMoveFinished",
    "showRenderWarning",
    "showRenderError",
    "stopRendering",
    "readDotOutput",
    "dotError",
    "dotExited",
    "callerDepthTriggered",
    "QAction*",
    "calleeDepthTriggered",
    "nodeLimitTriggered",
    "callLimitTriggered",
    "zoomPosTriggered",
    "layoutTriggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCallGraphViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   98,    2, 0x0a,    1 /* Public */,
       3,    0,  103,    2, 0x0a,    4 /* Public */,
       4,    0,  104,    2, 0x0a,    5 /* Public */,
       5,    1,  105,    2, 0x0a,    6 /* Public */,
       6,    0,  108,    2, 0x0a,    8 /* Public */,
       7,    0,  109,    2, 0x0a,    9 /* Public */,
       8,    0,  110,    2, 0x0a,   10 /* Public */,
       9,    0,  111,    2, 0x0a,   11 /* Public */,
      10,    1,  112,    2, 0x0a,   12 /* Public */,
      12,    1,  115,    2, 0x0a,   14 /* Public */,
      13,    1,  118,    2, 0x0a,   16 /* Public */,
      14,    1,  121,    2, 0x0a,   18 /* Public */,
      15,    1,  124,    2, 0x0a,   20 /* Public */,
      16,    1,  127,    2, 0x0a,   22 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject CallGraphView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_CLASSCallGraphViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCallGraphViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCallGraphViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CallGraphView, std::true_type>,
        // method 'zoomRectMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'zoomRectMoveFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showRenderWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showRenderError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'stopRendering'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readDotOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dotError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dotExited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'callerDepthTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'calleeDepthTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'nodeLimitTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'callLimitTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'zoomPosTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'layoutTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>
    >,
    nullptr
} };

void CallGraphView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CallGraphView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->zoomRectMoved((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[2]))); break;
        case 1: _t->zoomRectMoveFinished(); break;
        case 2: _t->showRenderWarning(); break;
        case 3: _t->showRenderError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->stopRendering(); break;
        case 5: _t->readDotOutput(); break;
        case 6: _t->dotError(); break;
        case 7: _t->dotExited(); break;
        case 8: _t->callerDepthTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 9: _t->calleeDepthTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 10: _t->nodeLimitTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 11: _t->callLimitTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 12: _t->zoomPosTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 13: _t->layoutTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
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
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *CallGraphView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CallGraphView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCallGraphViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TraceItemView"))
        return static_cast< TraceItemView*>(this);
    if (!strcmp(_clname, "StorableGraphOptions"))
        return static_cast< StorableGraphOptions*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int CallGraphView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
