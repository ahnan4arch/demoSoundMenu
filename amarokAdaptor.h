/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp amarokMediaPlayer2.xml -a amarokAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef AMAROKADAPTOR_H_1366826906
#define AMAROKADAPTOR_H_1366826906

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface org.freedesktop.DBus.Introspectable
 */
class IntrospectableAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.freedesktop.DBus.Introspectable")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.freedesktop.DBus.Introspectable\">\n"
"    <method name=\"Introspect\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"xml_data\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    IntrospectableAdaptor(QObject *parent);
    virtual ~IntrospectableAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    QString Introspect();
Q_SIGNALS: // SIGNALS
};

/*
 * Adaptor class for interface org.freedesktop.DBus.Properties
 */
class PropertiesAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.freedesktop.DBus.Properties")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.freedesktop.DBus.Properties\">\n"
"    <method name=\"Get\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"interface_name\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"property_name\"/>\n"
"      <arg direction=\"out\" type=\"v\" name=\"value\"/>\n"
"    </method>\n"
"    <method name=\"Set\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"interface_name\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"property_name\"/>\n"
"      <arg direction=\"in\" type=\"v\" name=\"value\"/>\n"
"    </method>\n"
"    <method name=\"GetAll\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"interface_name\"/>\n"
"      <arg direction=\"out\" type=\"a{sv}\" name=\"values\"/>\n"
"      <annotation value=\"QVariantMap\" name=\"com.trolltech.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    PropertiesAdaptor(QObject *parent);
    virtual ~PropertiesAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    QDBusVariant Get(const QString &interface_name, const QString &property_name);
    QVariantMap GetAll(const QString &interface_name);
    void Set(const QString &interface_name, const QString &property_name, const QDBusVariant &value);
Q_SIGNALS: // SIGNALS
};

/*
 * Adaptor class for interface org.kde.amarok.App
 */
class AppAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.amarok.App")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.kde.amarok.App\">\n"
"    <method name=\"ShowOSD\"/>\n"
"    <method name=\"LoadThemeFile\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"path\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    AppAdaptor(QObject *parent);
    virtual ~AppAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void LoadThemeFile(const QString &path);
    void ShowOSD();
Q_SIGNALS: // SIGNALS
};

/*
 * Adaptor class for interface org.kde.amarok.Mpris2Extensions.Player
 */
class PlayerAdaptor2: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.amarok.Mpris2Extensions.Player")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.kde.amarok.Mpris2Extensions.Player\">\n"
"    <property access=\"readwrite\" type=\"b\" name=\"Muted\"/>\n"
"    <method name=\"StopAfterCurrent\"/>\n"
"    <method name=\"AdjustVolume\">\n"
"      <arg direction=\"in\" type=\"d\" name=\"IncreaseBy\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    PlayerAdaptor2(QObject *parent);
    virtual ~PlayerAdaptor2();

public: // PROPERTIES
    Q_PROPERTY(bool Muted READ muted WRITE setMuted)
    bool muted() const;
    void setMuted(bool value);

public Q_SLOTS: // METHODS
    void AdjustVolume(double IncreaseBy);
    void StopAfterCurrent();
Q_SIGNALS: // SIGNALS
};

/*
 * Adaptor class for interface org.mpris.MediaPlayer2
 */
class MediaPlayer2Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.mpris.MediaPlayer2")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.mpris.MediaPlayer2\">\n"
"    <property access=\"read\" type=\"b\" name=\"CanRaise\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanQuit\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanSetFullscreen\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"Fullscreen\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"HasTrackList\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Identity\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"DesktopEntry\"/>\n"
"    <property access=\"read\" type=\"as\" name=\"SupportedUriSchemes\"/>\n"
"    <property access=\"read\" type=\"as\" name=\"SupportedMimeTypes\"/>\n"
"    <method name=\"Raise\"/>\n"
"    <method name=\"Quit\"/>\n"
"  </interface>\n"
        "")
public:
    MediaPlayer2Adaptor(QObject *parent);
    virtual ~MediaPlayer2Adaptor();

public: // PROPERTIES
    Q_PROPERTY(bool CanQuit READ canQuit)
    bool canQuit() const;

    Q_PROPERTY(bool CanRaise READ canRaise)
    bool canRaise() const;

    Q_PROPERTY(bool CanSetFullscreen READ canSetFullscreen)
    bool canSetFullscreen() const;

    Q_PROPERTY(QString DesktopEntry READ desktopEntry)
    QString desktopEntry() const;

    Q_PROPERTY(bool Fullscreen READ fullscreen)
    bool fullscreen() const;

    Q_PROPERTY(bool HasTrackList READ hasTrackList)
    bool hasTrackList() const;

    Q_PROPERTY(QString Identity READ identity)
    QString identity() const;

    Q_PROPERTY(QStringList SupportedMimeTypes READ supportedMimeTypes)
    QStringList supportedMimeTypes() const;

    Q_PROPERTY(QStringList SupportedUriSchemes READ supportedUriSchemes)
    QStringList supportedUriSchemes() const;

public Q_SLOTS: // METHODS
    void Quit();
    void Raise();
Q_SIGNALS: // SIGNALS
};

/*
 * Adaptor class for interface org.mpris.MediaPlayer2.Player
 */
class PlayerAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.mpris.MediaPlayer2.Player")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.mpris.MediaPlayer2.Player\">\n"
"    <property access=\"read\" type=\"s\" name=\"PlaybackStatus\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"LoopStatus\"/>\n"
"    <property access=\"readwrite\" type=\"d\" name=\"Rate\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"Shuffle\"/>\n"
"    <property access=\"read\" type=\"a{sv}\" name=\"Metadata\">\n"
"      <annotation value=\"QVariantMap\" name=\"com.trolltech.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"readwrite\" type=\"d\" name=\"Volume\"/>\n"
"    <property access=\"read\" type=\"x\" name=\"Position\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"MinimumRate\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"MaximumRate\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanGoNext\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanGoPrevious\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanPlay\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanPause\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanSeek\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanControl\"/>\n"
"    <signal name=\"Seeked\">\n"
"      <arg direction=\"out\" type=\"x\" name=\"Position\"/>\n"
"    </signal>\n"
"    <method name=\"Next\"/>\n"
"    <method name=\"Previous\"/>\n"
"    <method name=\"Pause\"/>\n"
"    <method name=\"PlayPause\"/>\n"
"    <method name=\"Stop\"/>\n"
"    <method name=\"Play\"/>\n"
"    <method name=\"Seek\">\n"
"      <arg direction=\"in\" type=\"x\" name=\"Offset\"/>\n"
"    </method>\n"
"    <method name=\"SetPosition\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"TrackId\"/>\n"
"      <arg direction=\"in\" type=\"x\" name=\"Position\"/>\n"
"    </method>\n"
"    <method name=\"OpenUri\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"Uri\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    PlayerAdaptor(QObject *parent);
    virtual ~PlayerAdaptor();

public: // PROPERTIES
    Q_PROPERTY(bool CanControl READ canControl)
    bool canControl() const;

    Q_PROPERTY(bool CanGoNext READ canGoNext)
    bool canGoNext() const;

    Q_PROPERTY(bool CanGoPrevious READ canGoPrevious)
    bool canGoPrevious() const;

    Q_PROPERTY(bool CanPause READ canPause)
    bool canPause() const;

    Q_PROPERTY(bool CanPlay READ canPlay)
    bool canPlay() const;

    Q_PROPERTY(bool CanSeek READ canSeek)
    bool canSeek() const;

    Q_PROPERTY(QString LoopStatus READ loopStatus WRITE setLoopStatus)
    QString loopStatus() const;
    void setLoopStatus(const QString &value);

    Q_PROPERTY(double MaximumRate READ maximumRate)
    double maximumRate() const;

    Q_PROPERTY(QVariantMap Metadata READ metadata)
    QVariantMap metadata() const;

    Q_PROPERTY(double MinimumRate READ minimumRate)
    double minimumRate() const;

    Q_PROPERTY(QString PlaybackStatus READ playbackStatus)
    QString playbackStatus() const;

    Q_PROPERTY(qlonglong Position READ position)
    qlonglong position() const;

    Q_PROPERTY(double Rate READ rate WRITE setRate)
    double rate() const;
    void setRate(double value);

    Q_PROPERTY(bool Shuffle READ shuffle WRITE setShuffle)
    bool shuffle() const;
    void setShuffle(bool value);

    Q_PROPERTY(double Volume READ volume WRITE setVolume)
    double volume() const;
    void setVolume(double value);

public Q_SLOTS: // METHODS
    void Next();
    void OpenUri(const QString &Uri);
    void Pause();
    void Play();
    void PlayPause();
    void Previous();
    void Seek(qlonglong Offset);
    void SetPosition(const QDBusObjectPath &TrackId, qlonglong Position);
    void Stop();
Q_SIGNALS: // SIGNALS
    void Seeked(qlonglong Position);
};

#endif
