#ifndef ADAPTER1_H_1396951555
#define ADAPTER1_H_1396951555

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.bluez.Adapter1
 */
class OrgBluezAdapter1Interface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.bluez.Adapter1"; }

public:
    OrgBluezAdapter1Interface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgBluezAdapter1Interface();

    Q_PROPERTY(QString Address READ address)
    inline QString address() const
    { return qvariant_cast< QString >(property("Address")); }

    Q_PROPERTY(QString Alias READ alias WRITE setAlias)
    inline QString alias() const
    { return qvariant_cast< QString >(property("Alias")); }
    inline void setAlias(const QString &value)
    { setProperty("Alias", QVariant::fromValue(value)); }

    Q_PROPERTY(uint Class READ classProperty)
    inline uint classProperty() const
    { return qvariant_cast< uint >(property("Class")); }

    Q_PROPERTY(bool Discoverable READ discoverable WRITE setDiscoverable)
    inline bool discoverable() const
    { return qvariant_cast< bool >(property("Discoverable")); }
    inline void setDiscoverable(bool value)
    { setProperty("Discoverable", QVariant::fromValue(value)); }

    Q_PROPERTY(uint DiscoverableTimeout READ discoverableTimeout WRITE setDiscoverableTimeout)
    inline uint discoverableTimeout() const
    { return qvariant_cast< uint >(property("DiscoverableTimeout")); }
    inline void setDiscoverableTimeout(uint value)
    { setProperty("DiscoverableTimeout", QVariant::fromValue(value)); }

    Q_PROPERTY(bool Discovering READ discovering)
    inline bool discovering() const
    { return qvariant_cast< bool >(property("Discovering")); }

    Q_PROPERTY(QString Modalias READ modalias)
    inline QString modalias() const
    { return qvariant_cast< QString >(property("Modalias")); }

    Q_PROPERTY(QString Name READ name)
    inline QString name() const
    { return qvariant_cast< QString >(property("Name")); }

    Q_PROPERTY(bool Pairable READ pairable WRITE setPairable)
    inline bool pairable() const
    { return qvariant_cast< bool >(property("Pairable")); }
    inline void setPairable(bool value)
    { setProperty("Pairable", QVariant::fromValue(value)); }

    Q_PROPERTY(uint PairableTimeout READ pairableTimeout WRITE setPairableTimeout)
    inline uint pairableTimeout() const
    { return qvariant_cast< uint >(property("PairableTimeout")); }
    inline void setPairableTimeout(uint value)
    { setProperty("PairableTimeout", QVariant::fromValue(value)); }

    Q_PROPERTY(bool Powered READ powered WRITE setPowered)
    inline bool powered() const
    { return qvariant_cast< bool >(property("Powered")); }
    inline void setPowered(bool value)
    { setProperty("Powered", QVariant::fromValue(value)); }

    Q_PROPERTY(QStringList UUIDs READ uUIDs)
    inline QStringList uUIDs() const
    { return qvariant_cast< QStringList >(property("UUIDs")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> RemoveDevice(const QDBusObjectPath &device)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(device);
        return asyncCallWithArgumentList(QLatin1String("RemoveDevice"), argumentList);
    }

    inline QDBusPendingReply<> StartDiscovery()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("StartDiscovery"), argumentList);
    }

    inline QDBusPendingReply<> StopDiscovery()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("StopDiscovery"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace bluez {
    typedef ::OrgBluezAdapter1Interface Adapter1;
  }
}
#endif
