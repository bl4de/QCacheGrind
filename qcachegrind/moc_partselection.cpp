/****************************************************************************
** Meta object code from reading C++ file 'partselection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libviews/partselection.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partselection.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPartSelectionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPartSelectionENDCLASS = QtMocHelpers::stringData(
    "PartSelection",
    "partsHideSelected",
    "",
    "partsUnhideAll",
    "selectionChanged",
    "doubleClicked",
    "TreeMapItem*",
    "itemSelected",
    "contextMenuRequested",
    "currentChangedSlot",
    "hiddenPartsChangedSlot",
    "TracePartList",
    "list",
    "showInfo"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPartSelectionENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[14];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[17];
    char stringdata5[14];
    char stringdata6[13];
    char stringdata7[13];
    char stringdata8[21];
    char stringdata9[19];
    char stringdata10[23];
    char stringdata11[14];
    char stringdata12[5];
    char stringdata13[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPartSelectionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPartSelectionENDCLASS_t qt_meta_stringdata_CLASSPartSelectionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "PartSelection"
        QT_MOC_LITERAL(14, 17),  // "partsHideSelected"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 14),  // "partsUnhideAll"
        QT_MOC_LITERAL(48, 16),  // "selectionChanged"
        QT_MOC_LITERAL(65, 13),  // "doubleClicked"
        QT_MOC_LITERAL(79, 12),  // "TreeMapItem*"
        QT_MOC_LITERAL(92, 12),  // "itemSelected"
        QT_MOC_LITERAL(105, 20),  // "contextMenuRequested"
        QT_MOC_LITERAL(126, 18),  // "currentChangedSlot"
        QT_MOC_LITERAL(145, 22),  // "hiddenPartsChangedSlot"
        QT_MOC_LITERAL(168, 13),  // "TracePartList"
        QT_MOC_LITERAL(182, 4),  // "list"
        QT_MOC_LITERAL(187, 8)   // "showInfo"
    },
    "PartSelection",
    "partsHideSelected",
    "",
    "partsUnhideAll",
    "selectionChanged",
    "doubleClicked",
    "TreeMapItem*",
    "itemSelected",
    "contextMenuRequested",
    "currentChangedSlot",
    "hiddenPartsChangedSlot",
    "TracePartList",
    "list",
    "showInfo"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPartSelectionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    0,   69,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    1,   71,    2, 0x0a,    4 /* Public */,
       7,    0,   74,    2, 0x0a,    6 /* Public */,
       8,    2,   75,    2, 0x0a,    7 /* Public */,
       9,    2,   80,    2, 0x0a,   10 /* Public */,
      10,    1,   85,    2, 0x0a,   13 /* Public */,
      13,    1,   88,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QPoint,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject PartSelection::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPartSelectionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPartSelectionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPartSelectionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PartSelection, std::true_type>,
        // method 'partsHideSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'partsUnhideAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        // method 'itemSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'currentChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TreeMapItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'hiddenPartsChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const TracePartList &, std::false_type>,
        // method 'showInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void PartSelection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PartSelection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->partsHideSelected(); break;
        case 1: _t->partsUnhideAll(); break;
        case 2: _t->selectionChanged(); break;
        case 3: _t->doubleClicked((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1]))); break;
        case 4: _t->itemSelected(); break;
        case 5: _t->contextMenuRequested((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 6: _t->currentChangedSlot((*reinterpret_cast< std::add_pointer_t<TreeMapItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 7: _t->hiddenPartsChangedSlot((*reinterpret_cast< std::add_pointer_t<TracePartList>>(_a[1]))); break;
        case 8: _t->showInfo((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PartSelection::*)();
            if (_t _q_method = &PartSelection::partsHideSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PartSelection::*)();
            if (_t _q_method = &PartSelection::partsUnhideAll; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *PartSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPartSelectionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TraceItemView"))
        return static_cast< TraceItemView*>(this);
    return QWidget::qt_metacast(_clname);
}

int PartSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void PartSelection::partsHideSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PartSelection::partsUnhideAll()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
