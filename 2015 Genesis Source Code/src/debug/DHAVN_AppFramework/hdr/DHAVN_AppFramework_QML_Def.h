#ifndef DHAVN_APPFRAMEWORK_QML_DEF_H
#define DHAVN_APPFRAMEWORK_QML_DEF_H

#include <QVariant>
#include <QtDeclarative/QDeclarativeView>
/**
 * Abstract base class for QML-based applications.
 */

 class AppEngineQMLConstants : public QObject
{
   Q_OBJECT
   Q_ENUMS( EJOG_EVENTS_T );
   Q_ENUMS( EJOG_STATUS_T );
   Q_ENUMS( ECURTAIN_BUTTON_T );
   Q_ENUMS( EAPP_SCREEN_USAGE_T );
   Q_ENUMS( EAPP_SCREEN_GEOMETRY_T );

public:
   enum EJOG_EVENTS_T
   {
      JOG_CENTER = 0,
      JOG_UP,
      JOG_DOWN,
      JOG_LEFT,
      JOG_RIGHT,
      JOG_TOP_RIGHT,
      JOG_BOTTOM_RIGHT,
      JOG_TOP_LEFT,
      JOG_BOTTOM_LEFT,
      JOG_WHEEL_LEFT,
      JOG_WHEEL_RIGHT,
      JOG_WHEEL_LONG_LEFT,
      JOG_WHEEL_LONG_RIGHT,
      JOG_NONE
   };

   enum EAPP_SCREEN_USAGE_T
   {
      APP_INVALIDE_STATE = -1,
      APP_ALL_HIDE,
      APP_FRONT_SCREEN,
      APP_REAR_SCREEN,
      APP_DOUBLE_SCREEN,
      APP_DUPLICATE_SCEENS
   };

   enum EAPP_SCREEN_GEOMETRY_T
   {
      SCREEN_INVALIDE = 0,
      SCREEN_FRONT,
      SCREEN_REAR,
      SCREEN_FRONT_EXTENDED
   };

   enum EJOG_STATUS_T
   {
      KEY_STATUS_CLICKED = 1000,
      KEY_STATUS_PRESSED,
      KEY_STATUS_RELEASED,
      KEY_STATUS_LONG_PRESSED,
      KEY_STATUS_CRITICAL_PRESSED,
      KEY_STATUS_CANCELED,
      KEY_STATUS_NONE
   };

   enum ECURTAIN_BUTTON_T
   {
      STATUS_BAR_BTN_ID_NAVI_SOUND = 0,
      STATUS_BAR_BTN_ID_AV_SOUND,
      STATUS_BAR_BTN_ID_WIFI_CURTAIN,
      STATUS_BAR_BTN_ID_DATE_TIME_SETTINGS,
      STATUS_BAR_BTN_ID_SOUND_SETTINGS,
      STATUS_BAR_BTN_ID_DISPLAY_SETTINGS,
      STATUS_BAR_BTN_ID_DISPLAY,
      STATUS_BAR_BTN_ID_WIDGET_DISPLAY_SETTINGS
   };
};
#endif // DHAVN_APPFRAMEWORK_QML_DEF_H