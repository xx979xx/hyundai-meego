/****************************************************************************
** Meta object code from reading C++ file 'DHAVN_AppMediaPlayer_Video_ScreenFSFileInfoPopup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "hdr/ui/video/screen_controllers/DHAVN_AppMediaPlayer_Video_ScreenFSFileInfoPopup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DHAVN_AppMediaPlayer_Video_ScreenFSFileInfoPopup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AppMediaPlayer_Video_ScreenFSFileInfo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   38,   38,   38, 0x0a,
      52,   48,   38,   38, 0x0a,
      78,   69,   38,   38, 0x08,

 // methods: signature, parameters, type, tag, flags
     101,   38,   38,   38, 0x02,
     115,   38,   38,   38, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_AppMediaPlayer_Video_ScreenFSFileInfo[] = {
    "AppMediaPlayer_Video_ScreenFSFileInfo\0"
    "\0onHide()\0arg\0onShow(QVariant)\0duration\0"
    "onDurationChanged(int)\0closeScreen()\0"
    "updateDataModel()\0"
};

void AppMediaPlayer_Video_ScreenFSFileInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AppMediaPlayer_Video_ScreenFSFileInfo *_t = static_cast<AppMediaPlayer_Video_ScreenFSFileInfo *>(_o);
        switch (_id) {
        case 0: _t->onHide(); break;
        case 1: _t->onShow((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->onDurationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->closeScreen(); break;
        case 4: _t->updateDataModel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AppMediaPlayer_Video_ScreenFSFileInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AppMediaPlayer_Video_ScreenFSFileInfo::staticMetaObject = {
    { &AppMediaPlayer_Video_Screen::staticMetaObject, qt_meta_stringdata_AppMediaPlayer_Video_ScreenFSFileInfo,
      qt_meta_data_AppMediaPlayer_Video_ScreenFSFileInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AppMediaPlayer_Video_ScreenFSFileInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AppMediaPlayer_Video_ScreenFSFileInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AppMediaPlayer_Video_ScreenFSFileInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AppMediaPlayer_Video_ScreenFSFileInfo))
        return static_cast<void*>(const_cast< AppMediaPlayer_Video_ScreenFSFileInfo*>(this));
    return AppMediaPlayer_Video_Screen::qt_metacast(_clname);
}

int AppMediaPlayer_Video_ScreenFSFileInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AppMediaPlayer_Video_Screen::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
