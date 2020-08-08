/*
 *----------------------------------------------------------------*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp TrackerExtractor.xml -i hdr/DHAVN_TrackerExtractorPlugin.h -a CTrackerExtractorDbusAdaptor
 *
 * MODIFICATION RECORDS :                                         *
 *
 * DATE         PROGRAMMER               COMMENT
 ******************************************************************
 * History
 * 01-Aug-2011      Mahesh Vallamkondu
 ******************************************************************
 */

#ifndef DHAVN_TRACKERMUSICDATA_H
#define DHAVN_TRACKERMUSICDATA_H

#include <QString>
#include <QMetaType>
#include <QtDBus/QDBusArgument>

/**
  * Structure containing the Track information.
  */
struct TrackerMusicTrackData
{
    QString track_title;
    QString track_artist;
    QString track_year;
    QString tract_artistType;
    QString track_artistOrigin;
    QString track_artistEra;
    QString track_genre;
    QString track_path;
};

/**
  * Structure containing the media file information.
 */
struct TrackerMusicData
{
    QString track_title;
    QString album;
    QString track_artist;
    QString genre;
    QString year;
    QString filename;
    QString path;
    QString composer;
    QString contributor;
    QString imagePath;
    QString track_number;

    QString album_title;
    QString album_artist;
    QString album_genre;
    QString album_year;

    QString CD_TOC;
    int track_count;
    QList<TrackerMusicTrackData> trackData;
};

Q_DECLARE_METATYPE(TrackerMusicTrackData);
Q_DECLARE_METATYPE(TrackerMusicData);

QDBusArgument &operator<<(QDBusArgument &argument, const TrackerMusicTrackData &trackMusicData);
const QDBusArgument &operator>>(const QDBusArgument &argument, TrackerMusicTrackData &trackMusicData);

QDBusArgument &operator<<(QDBusArgument &argument, const TrackerMusicData &trackData);
const QDBusArgument &operator>>(const QDBusArgument &argument, TrackerMusicData &trackData);


#endif // TRACKERMUSICDATA_H