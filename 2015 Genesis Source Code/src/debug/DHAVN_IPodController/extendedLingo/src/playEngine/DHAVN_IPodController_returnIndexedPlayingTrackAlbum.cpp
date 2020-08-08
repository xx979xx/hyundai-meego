/*
 ******************************************************************
 *              *
 *----------------------------------------------------------------*
 * MODULE     :  IpodController                                    *
 *
 * PROGRAMMERS : Pawan Gupta/ Sowmini Philip / Venkataramana      *
 * DATE       :  12 August 2011                                   *
 * VERSION    :                                                   *
 *
 *----------------------------------------------------------------*
 *                                                                *
 * MODULE SUMMARY :
 *                                                                *
 *----------------------------------------------------------------*
 *
 * MODIFICATION RECORDS :                                         *
 *
 * DATE         PROGRAMMER               COMMENT
 ******************************************************************
 *
 ******************************************************************
 */
#include <DHAVN_IPodController_returnIndexedPlayingTrackAlbum.h>
#include <QByteArray>
using namespace ExtendedLingo;

CReturnIndexedPlayingTrackAlbumName::CReturnIndexedPlayingTrackAlbumName( bool isTidEnabled)
    :CIAPPacket(0x04,0x0025,-1, isTidEnabled),m_AlbumName("")
{

}

QByteArray CReturnIndexedPlayingTrackAlbumName::marshall()
{
        QByteArray command;
        return command;
}

QString CReturnIndexedPlayingTrackAlbumName::getAlbumName()
{
    return m_AlbumName.fromUtf8(m_AlbumName.toAscii().data());
}

void  CReturnIndexedPlayingTrackAlbumName::unmarshall(QByteArray returnCommand)
{
    // Remove the checksum byte from the array in order to use mid to obtain the record string
    //chop(1) removes 1 byte from the end of the array
    returnCommand.chop(1);
    if( ((int)returnCommand[0] == 0x55) &&
        ((int)returnCommand[2] == 0x04) &&
        ((int)returnCommand[3] == 0x00) &&
        ((int)returnCommand[4] == 0x25) ){
            if( m_isTidEnabled  )
            {
                m_TransactionID = 0x0000;
                m_TransactionID = m_TransactionID | returnCommand[5];
                m_TransactionID = m_TransactionID <<8;
                m_TransactionID = m_TransactionID | returnCommand[6];


                m_AlbumName = QString(returnCommand.mid(7,-1)); // bytearray from 12 to the end
            }
            else
                m_AlbumName = QString(returnCommand.mid(5,-1)); // bytearray from 12 to the end
    //qDebug() <<  "\n\nm_AlbumName =  " << m_AlbumName;
  }
}




