/****************************************************************************
** Meta object code from reading C++ file 'timedisplayform.h'
**
** Created: Tue May 3 12:00:24 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "timedisplayform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timedisplayform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TimeDisplayForm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   55,   16,   16, 0x0a,
      84,   55,   16,   16, 0x0a,
     159,  105,   16,   16, 0x0a,
     199,   55,   16,   16, 0x0a,
     232,  224,   16,   16, 0x0a,
     267,  265,   16,   16, 0x0a,
     301,  289,   16,   16, 0x0a,
     335,  323,   16,   16, 0x0a,
     357,   16,   16,   16, 0x08,
     389,   16,   16,   16, 0x08,
     408,  406,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TimeDisplayForm[] = {
    "TimeDisplayForm\0\0p,type\0"
    "plotPointSelected(QPointF,int)\0e\0"
    "resizeEvent(QResizeEvent*)\0"
    "customEvent(QEvent*)\0"
    "newCenterFrequency,newStartFrequency,newStopFrequency\0"
    "setFrequencyRange(double,double,double)\0"
    "closeEvent(QCloseEvent*)\0min,max\0"
    "setTimeDomainAxis(double,double)\0t\0"
    "setUpdateTime(double)\0which,title\0"
    "setTitle(int,QString)\0which,color\0"
    "setColor(int,QString)\0"
    "newData(const TimeUpdateEvent*)\0"
    "updateGuiTimer()\0p\0onTimePlotPointSelected(QPointF)\0"
};

const QMetaObject TimeDisplayForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TimeDisplayForm,
      qt_meta_data_TimeDisplayForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TimeDisplayForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TimeDisplayForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TimeDisplayForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TimeDisplayForm))
        return static_cast<void*>(const_cast< TimeDisplayForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int TimeDisplayForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: plotPointSelected((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 2: customEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 3: setFrequencyRange((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2])),(*reinterpret_cast< const double(*)>(_a[3]))); break;
        case 4: closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 5: setTimeDomainAxis((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: setUpdateTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: setTitle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: setColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: newData((*reinterpret_cast< const TimeUpdateEvent*(*)>(_a[1]))); break;
        case 10: updateGuiTimer(); break;
        case 11: onTimePlotPointSelected((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TimeDisplayForm::plotPointSelected(const QPointF _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
