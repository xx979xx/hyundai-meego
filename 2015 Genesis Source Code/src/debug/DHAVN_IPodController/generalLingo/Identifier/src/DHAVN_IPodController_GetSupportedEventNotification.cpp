/*
 ******************************************************************
 *              *
 *----------------------------------------------------------------*
 * MODULE     :  IPodController                                    *
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
#include <DHAVN_IPodController_GetSupportedEventNotification.h>
#include <DHAVN_IPodController_CommonVars.h>
#include <DHAVN_IPodController_iPodControllerGlobal.h>

using namespace GeneralLingo;

CGetSupportedEventNotification::CGetSupportedEventNotification(int transIdArgs,  bool isTidEnabled) : CIAPPacket(0x00, 0x4F, transIdArgs, isTidEnabled)
{
}
QByteArray CGetSupportedEventNotification::marshall()
{
    QByteArray command;
    int i = -1;

    //Packing format =  Big Endianll
    //command.resize(7);
    command[++i] = 0x55;
    command[++i] = 0x04;
    command[++i] = 0x00;
    command[++i] = 0x4F;
    if( m_isTidEnabled ){
        command[++i] = (m_TransactionID & 0xff00) >> 8;
        command[++i] = m_TransactionID & 0x00ff;
    }

    //TODO calculate a valid checksum and insert
    command[1] = i -1;
    command[i+1] = CIpodControllerGlobal::checkSum(command, i);

    m_CommandBytes = command;
    return command;
}

void  CGetSupportedEventNotification::unmarshall(QByteArray)
{

}

