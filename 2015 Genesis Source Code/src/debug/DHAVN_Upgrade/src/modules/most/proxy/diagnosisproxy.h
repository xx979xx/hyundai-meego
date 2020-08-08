/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -p diagnosisproxy -c DiagnosisInterface ../xml/diagnosis.xml
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DIAGNOSISPROXY_H_1350438307
#define DIAGNOSISPROXY_H_1350438307

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface local.CDiagnosisAdaptor
 */
class DiagnosisInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "local.CDiagnosisAdaptor"; }

public:
    DiagnosisInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~DiagnosisInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<bool> GetMainSWVersion()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetMainSWVersion"), argumentList);
    }

    inline QDBusPendingReply<bool> SetVariantCode(const QDBusVariant &variantcode)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(variantcode);
        return asyncCallWithArgumentList(QLatin1String("SetVariantCode"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void GetVariantCodeStatus();
    void MainSWVersionStatus(const QStringList &mainSWVersion);
};

namespace local {
  typedef ::DiagnosisInterface CDiagnosisAdaptor;
}
#endif
