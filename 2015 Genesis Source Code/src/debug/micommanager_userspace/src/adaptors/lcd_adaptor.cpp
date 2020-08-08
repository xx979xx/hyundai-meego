/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -a lcd_adaptor -c LcdAdaptor xml/com.lge.car.micom.lcd.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "lcd_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class LcdAdaptor
 */

LcdAdaptor::LcdAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

LcdAdaptor::~LcdAdaptor()
{
    // destructor
}

QByteArray LcdAdaptor::LgeDBus_AskLcdSetInfoValue()
{
    // handle method call com.lge.car.micom.lcd.LgeDBus_AskLcdSetInfoValue
    QByteArray out0;
    QMetaObject::invokeMethod(parent(), "LgeDBus_AskLcdSetInfoValue", Q_RETURN_ARG(QByteArray, out0));
    return out0;
}

void LcdAdaptor::LgeDBus_SetBacklightControl(uchar in0)
{
    // handle method call com.lge.car.micom.lcd.LgeDBus_SetBacklightControl
    QMetaObject::invokeMethod(parent(), "LgeDBus_SetBacklightControl", Q_ARG(uchar, in0));
}

void LcdAdaptor::LgeDBus_SetLcdPWMControl(uchar in0, uchar in1, uchar in2, uchar in3)
{
    // handle method call com.lge.car.micom.lcd.LgeDBus_SetLcdPWMControl
    QMetaObject::invokeMethod(parent(), "LgeDBus_SetLcdPWMControl", Q_ARG(uchar, in0), Q_ARG(uchar, in1), Q_ARG(uchar, in2), Q_ARG(uchar, in3));
}

