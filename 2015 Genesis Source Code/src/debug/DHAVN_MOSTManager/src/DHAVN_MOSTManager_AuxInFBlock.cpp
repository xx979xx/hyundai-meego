/*=!AUTO-GENERATED!============================================================
*
*     This code was generated by K2L MAG V2.3.4 at 2012-07-09.
*
*     Changes to this file may cause incorrect behavior and will be lost if
*     the code is regenerated.
*     
*==!AUTO-GENERATED!============================================================*/

/**
 * HMC DH Fcat v1.18.2
 **/

#include <stdint.h>
#include <K2LSystem.h>
#include <ACSStreams.h>
#include <K2LACSClient.h>
#include <K2LACSMOST.h>
#include <MOSTProtocolDefinitions.h>

#include "DHAVN_MOSTManager_AuxInFBlock.h"


acs::generated::fblock::AuxIn::CVersion::CVersion(acs::generated::fblock::AuxIn::CAuxIn *pInstance) : m_pInstance(pInstance)
{
}
acs::generated::fblock::AuxIn::CVersion::~CVersion(void)
{
}
void acs::generated::fblock::AuxIn::CVersion::SetListener(::k2l::acs::protocols::most::IACSMOSTEventListener * pListener)
{
	m_pInstance->m_versionFunction.SetListener( pListener );
}
bool acs::generated::fblock::AuxIn::CVersion::RemoveListener(::k2l::acs::protocols::most::IACSMOSTEventListener *pListener)
{
	return m_pInstance->m_versionFunction.RemoveListener( pListener );
}
::k2l::acs::protocols::most::CMOSTFunctionClassUnclassifiedProperty& acs::generated::fblock::AuxIn::CVersion::FunctionInstance(void)
{
	return m_pInstance->m_versionFunction;
}
bool acs::generated::fblock::AuxIn::CVersion::MajorValue( uint8_t value )
{
    return m_pInstance->m_versionMajorParameter.Value( value );
}

uint8_t acs::generated::fblock::AuxIn::CVersion::MajorValue() const
{
	return m_pInstance->m_versionMajorParameter.Value();
}
::k2l::acs::protocols::most::CMOSTUnsignedByte& acs::generated::fblock::AuxIn::CVersion::MajorDataType()
{
    return m_pInstance->m_versionMajorParameter;
}
bool acs::generated::fblock::AuxIn::CVersion::MinorValue( uint8_t value )
{
    return m_pInstance->m_versionMinorParameter.Value( value );
}

uint8_t acs::generated::fblock::AuxIn::CVersion::MinorValue() const
{
	return m_pInstance->m_versionMinorParameter.Value();
}
::k2l::acs::protocols::most::CMOSTUnsignedByte& acs::generated::fblock::AuxIn::CVersion::MinorDataType()
{
    return m_pInstance->m_versionMinorParameter;
}
bool acs::generated::fblock::AuxIn::CVersion::BuildValue( uint8_t value )
{
    return m_pInstance->m_versionBuildParameter.Value( value );
}

uint8_t acs::generated::fblock::AuxIn::CVersion::BuildValue() const
{
	return m_pInstance->m_versionBuildParameter.Value();
}
::k2l::acs::protocols::most::CMOSTUnsignedByte& acs::generated::fblock::AuxIn::CVersion::BuildDataType()
{
    return m_pInstance->m_versionBuildParameter;
}
bool acs::generated::fblock::AuxIn::CVersion::UpdateShadows()
{
    return m_pInstance->m_versionFunction.UpdateShadows();
}
bool acs::generated::fblock::AuxIn::CVersion::Error( ::k2l::acs::protocols::most::DeviceID_t targetDevice, uint32_t payloadLength, const uint8_t * payload )
{
    return m_pInstance->m_versionFunction.Error( targetDevice, payloadLength, payload );
}
bool acs::generated::fblock::AuxIn::CVersion::Error( ::k2l::acs::protocols::most::DeviceID_t targetDevice, uint8_t errorCode, uint32_t errorInfoLength, const uint8_t *pErrorInfo )
{
    return m_pInstance->m_versionFunction.Error( targetDevice, errorCode, errorInfoLength, pErrorInfo );
}



acs::generated::fblock::AuxIn::CFBlockInfo::CFBlockInfo(acs::generated::fblock::AuxIn::CAuxIn *pInstance) : m_pInstance(pInstance)
{
}
acs::generated::fblock::AuxIn::CFBlockInfo::~CFBlockInfo(void)
{
}
void acs::generated::fblock::AuxIn::CFBlockInfo::SetListener(::k2l::acs::protocols::most::IACSMOSTEventListener * pListener)
{
	m_pInstance->m_fBlockInfoFunction.SetListener( pListener );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::RemoveListener(::k2l::acs::protocols::most::IACSMOSTEventListener *pListener)
{
	return m_pInstance->m_fBlockInfoFunction.RemoveListener( pListener );
}
::k2l::acs::protocols::most::CMOSTFunctionClassUnclassifiedProperty& acs::generated::fblock::AuxIn::CFBlockInfo::FunctionInstance(void)
{
	return m_pInstance->m_fBlockInfoFunction;
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::IDValue( uint16_t value )
{
    return m_pInstance->m_fBlockInfoIDParameter.Value( value );
}

uint16_t acs::generated::fblock::AuxIn::CFBlockInfo::IDValue() const
{
	return m_pInstance->m_fBlockInfoIDParameter.Value();
}
::k2l::acs::protocols::most::CMOSTUnsignedWord& acs::generated::fblock::AuxIn::CFBlockInfo::IDDataType()
{
    return m_pInstance->m_fBlockInfoIDParameter;
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FunctionMaturityValue( acs::generated::fblock::AuxIn::CFBlockInfo::TFunctionMaturity value )
{
    return m_pInstance->m_fBlockInfoFunctionMaturityParameter.Value( value );
}

acs::generated::fblock::AuxIn::CFBlockInfo::TFunctionMaturity acs::generated::fblock::AuxIn::CFBlockInfo::FunctionMaturityValue() const
{
	return (acs::generated::fblock::AuxIn::CFBlockInfo::TFunctionMaturity)m_pInstance->m_fBlockInfoFunctionMaturityParameter.Value();
}
::k2l::acs::protocols::most::CMOSTEnum& acs::generated::fblock::AuxIn::CFBlockInfo::FunctionMaturityDataType()
{
    return m_pInstance->m_fBlockInfoFunctionMaturityParameter;
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockNameValue( uint8_t * value, uint32_t length )
{
    return m_pInstance->m_fBlockInfoFBlockNameParameter.MOSTString( value, length );
}

uint8_t * acs::generated::fblock::AuxIn::CFBlockInfo::FBlockNameValue() const
{
	return m_pInstance->m_fBlockInfoFBlockNameParameter.MOSTStringContent();
}
::k2l::acs::protocols::most::CMOSTString& acs::generated::fblock::AuxIn::CFBlockInfo::FBlockNameDataType()
{
    return m_pInstance->m_fBlockInfoFBlockNameParameter;
}
uint32_t acs::generated::fblock::AuxIn::CFBlockInfo::FBlockNameLength() const
{
	return m_pInstance->m_fBlockInfoFBlockNameParameter.MOSTStringLength();
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockNameAddEncoding(uint8_t mostStringIdentifier, const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding )            
{
    return m_pInstance->m_fBlockInfoFBlockNameParameter.AddEncoding( mostStringIdentifier, pStringEncoding );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockNameString(const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding, const uint8_t* pStringContent, uint32_t stringLengthBytes )
{
    return m_pInstance->m_fBlockInfoFBlockNameParameter.String( pStringEncoding, pStringContent, stringLengthBytes );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockNameString(const k2l::acs::protocols::most::string::IStringEncoding** ppStringEncoding, uint8_t** ppString, uint32_t* pStringLength )
{
    return m_pInstance->m_fBlockInfoFBlockNameParameter.String( ppStringEncoding, ppString, pStringLength );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::SupplierVersionValue( uint8_t * value, uint32_t length )
{
    return m_pInstance->m_fBlockInfoSupplierVersionParameter.MOSTString( value, length );
}

uint8_t * acs::generated::fblock::AuxIn::CFBlockInfo::SupplierVersionValue() const
{
	return m_pInstance->m_fBlockInfoSupplierVersionParameter.MOSTStringContent();
}
::k2l::acs::protocols::most::CMOSTString& acs::generated::fblock::AuxIn::CFBlockInfo::SupplierVersionDataType()
{
    return m_pInstance->m_fBlockInfoSupplierVersionParameter;
}
uint32_t acs::generated::fblock::AuxIn::CFBlockInfo::SupplierVersionLength() const
{
	return m_pInstance->m_fBlockInfoSupplierVersionParameter.MOSTStringLength();
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::SupplierVersionAddEncoding(uint8_t mostStringIdentifier, const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding )            
{
    return m_pInstance->m_fBlockInfoSupplierVersionParameter.AddEncoding( mostStringIdentifier, pStringEncoding );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::SupplierVersionString(const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding, const uint8_t* pStringContent, uint32_t stringLengthBytes )
{
    return m_pInstance->m_fBlockInfoSupplierVersionParameter.String( pStringEncoding, pStringContent, stringLengthBytes );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::SupplierVersionString(const k2l::acs::protocols::most::string::IStringEncoding** ppStringEncoding, uint8_t** ppString, uint32_t* pStringLength )
{
    return m_pInstance->m_fBlockInfoSupplierVersionParameter.String( ppStringEncoding, ppString, pStringLength );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockVersionValue( uint8_t * value, uint32_t length )
{
    return m_pInstance->m_fBlockInfoFBlockVersionParameter.MOSTString( value, length );
}

uint8_t * acs::generated::fblock::AuxIn::CFBlockInfo::FBlockVersionValue() const
{
	return m_pInstance->m_fBlockInfoFBlockVersionParameter.MOSTStringContent();
}
::k2l::acs::protocols::most::CMOSTString& acs::generated::fblock::AuxIn::CFBlockInfo::FBlockVersionDataType()
{
    return m_pInstance->m_fBlockInfoFBlockVersionParameter;
}
uint32_t acs::generated::fblock::AuxIn::CFBlockInfo::FBlockVersionLength() const
{
	return m_pInstance->m_fBlockInfoFBlockVersionParameter.MOSTStringLength();
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockVersionAddEncoding(uint8_t mostStringIdentifier, const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding )            
{
    return m_pInstance->m_fBlockInfoFBlockVersionParameter.AddEncoding( mostStringIdentifier, pStringEncoding );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockVersionString(const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding, const uint8_t* pStringContent, uint32_t stringLengthBytes )
{
    return m_pInstance->m_fBlockInfoFBlockVersionParameter.String( pStringEncoding, pStringContent, stringLengthBytes );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockVersionString(const k2l::acs::protocols::most::string::IStringEncoding** ppStringEncoding, uint8_t** ppString, uint32_t* pStringLength )
{
    return m_pInstance->m_fBlockInfoFBlockVersionParameter.String( ppStringEncoding, ppString, pStringLength );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::MOSTVersionValue( uint8_t * value, uint32_t length )
{
    return m_pInstance->m_fBlockInfoMOSTVersionParameter.MOSTString( value, length );
}

uint8_t * acs::generated::fblock::AuxIn::CFBlockInfo::MOSTVersionValue() const
{
	return m_pInstance->m_fBlockInfoMOSTVersionParameter.MOSTStringContent();
}
::k2l::acs::protocols::most::CMOSTString& acs::generated::fblock::AuxIn::CFBlockInfo::MOSTVersionDataType()
{
    return m_pInstance->m_fBlockInfoMOSTVersionParameter;
}
uint32_t acs::generated::fblock::AuxIn::CFBlockInfo::MOSTVersionLength() const
{
	return m_pInstance->m_fBlockInfoMOSTVersionParameter.MOSTStringLength();
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::MOSTVersionAddEncoding(uint8_t mostStringIdentifier, const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding )            
{
    return m_pInstance->m_fBlockInfoMOSTVersionParameter.AddEncoding( mostStringIdentifier, pStringEncoding );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::MOSTVersionString(const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding, const uint8_t* pStringContent, uint32_t stringLengthBytes )
{
    return m_pInstance->m_fBlockInfoMOSTVersionParameter.String( pStringEncoding, pStringContent, stringLengthBytes );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::MOSTVersionString(const k2l::acs::protocols::most::string::IStringEncoding** ppStringEncoding, uint8_t** ppString, uint32_t* pStringLength )
{
    return m_pInstance->m_fBlockInfoMOSTVersionParameter.String( ppStringEncoding, ppString, pStringLength );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::SystemIntegratorValue( uint8_t * value, uint32_t length )
{
    return m_pInstance->m_fBlockInfoSystemIntegratorParameter.MOSTString( value, length );
}

uint8_t * acs::generated::fblock::AuxIn::CFBlockInfo::SystemIntegratorValue() const
{
	return m_pInstance->m_fBlockInfoSystemIntegratorParameter.MOSTStringContent();
}
::k2l::acs::protocols::most::CMOSTString& acs::generated::fblock::AuxIn::CFBlockInfo::SystemIntegratorDataType()
{
    return m_pInstance->m_fBlockInfoSystemIntegratorParameter;
}
uint32_t acs::generated::fblock::AuxIn::CFBlockInfo::SystemIntegratorLength() const
{
	return m_pInstance->m_fBlockInfoSystemIntegratorParameter.MOSTStringLength();
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::SystemIntegratorAddEncoding(uint8_t mostStringIdentifier, const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding )            
{
    return m_pInstance->m_fBlockInfoSystemIntegratorParameter.AddEncoding( mostStringIdentifier, pStringEncoding );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::SystemIntegratorString(const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding, const uint8_t* pStringContent, uint32_t stringLengthBytes )
{
    return m_pInstance->m_fBlockInfoSystemIntegratorParameter.String( pStringEncoding, pStringContent, stringLengthBytes );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::SystemIntegratorString(const k2l::acs::protocols::most::string::IStringEncoding** ppStringEncoding, uint8_t** ppString, uint32_t* pStringLength )
{
    return m_pInstance->m_fBlockInfoSystemIntegratorParameter.String( ppStringEncoding, ppString, pStringLength );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockTypeValue( uint8_t * value, uint32_t length )
{
    return m_pInstance->m_fBlockInfoFBlockTypeParameter.MOSTString( value, length );
}

uint8_t * acs::generated::fblock::AuxIn::CFBlockInfo::FBlockTypeValue() const
{
	return m_pInstance->m_fBlockInfoFBlockTypeParameter.MOSTStringContent();
}
::k2l::acs::protocols::most::CMOSTString& acs::generated::fblock::AuxIn::CFBlockInfo::FBlockTypeDataType()
{
    return m_pInstance->m_fBlockInfoFBlockTypeParameter;
}
uint32_t acs::generated::fblock::AuxIn::CFBlockInfo::FBlockTypeLength() const
{
	return m_pInstance->m_fBlockInfoFBlockTypeParameter.MOSTStringLength();
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockTypeAddEncoding(uint8_t mostStringIdentifier, const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding )            
{
    return m_pInstance->m_fBlockInfoFBlockTypeParameter.AddEncoding( mostStringIdentifier, pStringEncoding );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockTypeString(const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding, const uint8_t* pStringContent, uint32_t stringLengthBytes )
{
    return m_pInstance->m_fBlockInfoFBlockTypeParameter.String( pStringEncoding, pStringContent, stringLengthBytes );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::FBlockTypeString(const k2l::acs::protocols::most::string::IStringEncoding** ppStringEncoding, uint8_t** ppString, uint32_t* pStringLength )
{
    return m_pInstance->m_fBlockInfoFBlockTypeParameter.String( ppStringEncoding, ppString, pStringLength );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::DescriptionValue( uint8_t * value, uint32_t length )
{
    return m_pInstance->m_fBlockInfoDescriptionParameter.Stream( value, length );
}

const uint8_t * acs::generated::fblock::AuxIn::CFBlockInfo::DescriptionValue() const
{
	return m_pInstance->m_fBlockInfoDescriptionParameter.Stream();
}
::k2l::acs::protocols::most::CMOSTCaseStream& acs::generated::fblock::AuxIn::CFBlockInfo::DescriptionDataType()
{
    return m_pInstance->m_fBlockInfoDescriptionParameter;
}
uint32_t acs::generated::fblock::AuxIn::CFBlockInfo::DescriptionStreamLength() const
{
	return m_pInstance->m_fBlockInfoDescriptionParameter.StreamLength();
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::DescriptionLoadNext()
{
    return m_pInstance->m_fBlockInfoDescriptionParameter.LoadNext();
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::DescriptionSaveNext()
{
    return m_pInstance->m_fBlockInfoDescriptionParameter.SaveNext();
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::UpdateShadows()
{
    return m_pInstance->m_fBlockInfoFunction.UpdateShadows();
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::Error( ::k2l::acs::protocols::most::DeviceID_t targetDevice, uint32_t payloadLength, const uint8_t * payload )
{
    return m_pInstance->m_fBlockInfoFunction.Error( targetDevice, payloadLength, payload );
}
bool acs::generated::fblock::AuxIn::CFBlockInfo::Error( ::k2l::acs::protocols::most::DeviceID_t targetDevice, uint8_t errorCode, uint32_t errorInfoLength, const uint8_t *pErrorInfo )
{
    return m_pInstance->m_fBlockInfoFunction.Error( targetDevice, errorCode, errorInfoLength, pErrorInfo );
}



acs::generated::fblock::AuxIn::CAuxDeviceInfo::CAuxDeviceInfo(acs::generated::fblock::AuxIn::CAuxIn *pInstance) : m_pInstance(pInstance)
{
}
acs::generated::fblock::AuxIn::CAuxDeviceInfo::~CAuxDeviceInfo(void)
{
}
void acs::generated::fblock::AuxIn::CAuxDeviceInfo::SetListener(::k2l::acs::protocols::most::IACSMOSTEventListener * pListener)
{
	m_pInstance->m_auxDeviceInfoFunction.SetListener( pListener );
}
bool acs::generated::fblock::AuxIn::CAuxDeviceInfo::RemoveListener(::k2l::acs::protocols::most::IACSMOSTEventListener *pListener)
{
	return m_pInstance->m_auxDeviceInfoFunction.RemoveListener( pListener );
}
::k2l::acs::protocols::most::CMOSTFunctionClassUnclassifiedProperty& acs::generated::fblock::AuxIn::CAuxDeviceInfo::FunctionInstance(void)
{
	return m_pInstance->m_auxDeviceInfoFunction;
}
bool acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceNumValue( uint8_t value )
{
    return m_pInstance->m_auxDeviceInfoDeviceNumParameter.Value( value );
}

uint8_t acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceNumValue() const
{
	return m_pInstance->m_auxDeviceInfoDeviceNumParameter.Value();
}
::k2l::acs::protocols::most::CMOSTUnsignedByte& acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceNumDataType()
{
    return m_pInstance->m_auxDeviceInfoDeviceNumParameter;
}
bool acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceClassValue( acs::generated::fblock::AuxIn::CAuxDeviceInfo::TDeviceClass value )
{
    return m_pInstance->m_auxDeviceInfoDeviceClassParameter.Value( value );
}

acs::generated::fblock::AuxIn::CAuxDeviceInfo::TDeviceClass acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceClassValue() const
{
	return (acs::generated::fblock::AuxIn::CAuxDeviceInfo::TDeviceClass)m_pInstance->m_auxDeviceInfoDeviceClassParameter.Value();
}
::k2l::acs::protocols::most::CMOSTEnum& acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceClassDataType()
{
    return m_pInstance->m_auxDeviceInfoDeviceClassParameter;
}
bool acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceTypeValue( acs::generated::fblock::AuxIn::CAuxDeviceInfo::TDeviceType value )
{
    return m_pInstance->m_auxDeviceInfoDeviceTypeParameter.Value( value );
}

acs::generated::fblock::AuxIn::CAuxDeviceInfo::TDeviceType acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceTypeValue() const
{
	return (acs::generated::fblock::AuxIn::CAuxDeviceInfo::TDeviceType)m_pInstance->m_auxDeviceInfoDeviceTypeParameter.Value();
}
::k2l::acs::protocols::most::CMOSTEnum& acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceTypeDataType()
{
    return m_pInstance->m_auxDeviceInfoDeviceTypeParameter;
}
bool acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceNameValue( uint8_t * value, uint32_t length )
{
    return m_pInstance->m_auxDeviceInfoDeviceNameParameter.MOSTString( value, length );
}

uint8_t * acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceNameValue() const
{
	return m_pInstance->m_auxDeviceInfoDeviceNameParameter.MOSTStringContent();
}
::k2l::acs::protocols::most::CMOSTString& acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceNameDataType()
{
    return m_pInstance->m_auxDeviceInfoDeviceNameParameter;
}
uint32_t acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceNameLength() const
{
	return m_pInstance->m_auxDeviceInfoDeviceNameParameter.MOSTStringLength();
}
bool acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceNameAddEncoding(uint8_t mostStringIdentifier, const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding )            
{
    return m_pInstance->m_auxDeviceInfoDeviceNameParameter.AddEncoding( mostStringIdentifier, pStringEncoding );
}
bool acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceNameString(const k2l::acs::protocols::most::string::IStringEncoding* pStringEncoding, const uint8_t* pStringContent, uint32_t stringLengthBytes )
{
    return m_pInstance->m_auxDeviceInfoDeviceNameParameter.String( pStringEncoding, pStringContent, stringLengthBytes );
}
bool acs::generated::fblock::AuxIn::CAuxDeviceInfo::DeviceNameString(const k2l::acs::protocols::most::string::IStringEncoding** ppStringEncoding, uint8_t** ppString, uint32_t* pStringLength )
{
    return m_pInstance->m_auxDeviceInfoDeviceNameParameter.String( ppStringEncoding, ppString, pStringLength );
}
bool acs::generated::fblock::AuxIn::CAuxDeviceInfo::UpdateShadows()
{
    return m_pInstance->m_auxDeviceInfoFunction.UpdateShadows();
}
bool acs::generated::fblock::AuxIn::CAuxDeviceInfo::Error( ::k2l::acs::protocols::most::DeviceID_t targetDevice, uint32_t payloadLength, const uint8_t * payload )
{
    return m_pInstance->m_auxDeviceInfoFunction.Error( targetDevice, payloadLength, payload );
}
bool acs::generated::fblock::AuxIn::CAuxDeviceInfo::Error( ::k2l::acs::protocols::most::DeviceID_t targetDevice, uint8_t errorCode, uint32_t errorInfoLength, const uint8_t *pErrorInfo )
{
    return m_pInstance->m_auxDeviceInfoFunction.Error( targetDevice, errorCode, errorInfoLength, pErrorInfo );
}


const uint8_t acs::generated::fblock::AuxIn::CAuxIn::m_fBlockInfoFunctionMaturityParameterSpecValues[] = { 0, 1, 2, 3, 17, 18 };
const uint8_t acs::generated::fblock::AuxIn::CAuxIn::m_auxDeviceInfoDeviceClassParameterSpecValues[] = { 0, 1, 2, 3, 4, 5, 255 };
const uint8_t acs::generated::fblock::AuxIn::CAuxIn::m_auxDeviceInfoDeviceTypeParameterSpecValues[] = { 0, 1, 2, 3, 14, 15, 16, 17, 18, 19, 31, 32, 48, 49, 50, 51, 240, 255 };


acs::generated::fblock::AuxIn::CAuxIn::CAuxIn(k2l::acs::protocols::most::InstanceID_t instanceID):
	::k2l::acs::protocols::most::CFunctionBlockBase(FBlockID, instanceID)
{
}

acs::generated::fblock::AuxIn::CAuxIn::CAuxIn(k2l::acs::protocols::most::FBlockID_t fblockID, k2l::acs::protocols::most::InstanceID_t instanceID):
	::k2l::acs::protocols::most::CFunctionBlockBase(fblockID, instanceID)
{
}

acs::generated::fblock::AuxIn::CAuxIn::~CAuxIn(void)
{
}

/*virtual*/
bool
acs::generated::fblock::AuxIn::CAuxIn::InitializeMOSTElement()
{
	k2l::acs::protocols::most::CMOSTDataType *elements[8];
m_versionFunction.FunctionID( 0x10 );
m_versionFunction.Notification( false );
m_versionFunction.AutomaticNotification( true );
m_versionFunction.SupportedOperations( 0x9002 );
elements[0] = &m_versionMajorParameter;
elements[1] = &m_versionMinorParameter;
elements[2] = &m_versionBuildParameter;
m_versionFunction.SetDataItems(12, 3, elements);
AddFunction( &m_versionFunction );
m_fBlockInfoFunction.FunctionID( 0x11 );
m_fBlockInfoFunction.Notification( false );
m_fBlockInfoFunction.AutomaticNotification( true );
m_fBlockInfoFunction.SupportedOperations( 0x9002 );
m_fBlockInfoFunctionMaturityParameterSpec.Values( 6, m_fBlockInfoFunctionMaturityParameterSpecValues );
m_fBlockInfoFBlockNameParameterSpec.MaxCharacters( 0 );
m_fBlockInfoSupplierVersionParameterSpec.MaxCharacters( 0 );
m_fBlockInfoFBlockVersionParameterSpec.MaxCharacters( 0 );
m_fBlockInfoMOSTVersionParameterSpec.MaxCharacters( 0 );
m_fBlockInfoSystemIntegratorParameterSpec.MaxCharacters( 0 );
m_fBlockInfoFBlockTypeParameterSpec.MaxCharacters( 0 );
m_fBlockInfoFunctionMaturityParameter.SetValidator( &m_fBlockInfoFunctionMaturityParameterSpec );
m_fBlockInfoFunctionMaturityParameter.Value( m_fBlockInfoFunctionMaturityParameterSpecValues[0] );
m_fBlockInfoFBlockNameParameter.SetValidator( &m_fBlockInfoFBlockNameParameterSpec );
m_fBlockInfoSupplierVersionParameter.SetValidator( &m_fBlockInfoSupplierVersionParameterSpec );
m_fBlockInfoFBlockVersionParameter.SetValidator( &m_fBlockInfoFBlockVersionParameterSpec );
m_fBlockInfoMOSTVersionParameter.SetValidator( &m_fBlockInfoMOSTVersionParameterSpec );
m_fBlockInfoSystemIntegratorParameter.SetValidator( &m_fBlockInfoSystemIntegratorParameterSpec );
m_fBlockInfoFBlockTypeParameter.SetValidator( &m_fBlockInfoFBlockTypeParameterSpec );
elements[0] = &m_fBlockInfoFunctionMaturityParameter;
m_fBlockInfoDescription0RecordFixParameter.SetMembers( 1, elements );
m_fBlockInfoDescription0Parameter.SetRecordFix( m_fBlockInfoDescription0RecordFixParameter );
m_fBlockInfoDescription0RecordIteratorParameter.SetMembers( 0, elements );
m_fBlockInfoDescription0Parameter.SetRecordIterator( m_fBlockInfoDescription0RecordIteratorParameter );
elements[0] = &m_fBlockInfoFBlockNameParameter;
elements[1] = &m_fBlockInfoSupplierVersionParameter;
elements[2] = &m_fBlockInfoFBlockVersionParameter;
elements[3] = &m_fBlockInfoMOSTVersionParameter;
elements[4] = &m_fBlockInfoSystemIntegratorParameter;
elements[5] = &m_fBlockInfoFBlockTypeParameter;
m_fBlockInfoDescription61440RecordFixParameter.SetMembers( 6, elements );
m_fBlockInfoDescription61440Parameter.SetRecordFix( m_fBlockInfoDescription61440RecordFixParameter );
m_fBlockInfoDescription61440RecordIteratorParameter.SetMembers( 0, elements );
m_fBlockInfoDescription61440Parameter.SetRecordIterator( m_fBlockInfoDescription61440RecordIteratorParameter );
elements[0] = &m_fBlockInfoFBlockNameParameter;
m_fBlockInfoDescription61441RecordFixParameter.SetMembers( 1, elements );
m_fBlockInfoDescription61441Parameter.SetRecordFix( m_fBlockInfoDescription61441RecordFixParameter );
m_fBlockInfoDescription61441RecordIteratorParameter.SetMembers( 0, elements );
m_fBlockInfoDescription61441Parameter.SetRecordIterator( m_fBlockInfoDescription61441RecordIteratorParameter );
elements[0] = &m_fBlockInfoSupplierVersionParameter;
m_fBlockInfoDescription61442RecordFixParameter.SetMembers( 1, elements );
m_fBlockInfoDescription61442Parameter.SetRecordFix( m_fBlockInfoDescription61442RecordFixParameter );
m_fBlockInfoDescription61442RecordIteratorParameter.SetMembers( 0, elements );
m_fBlockInfoDescription61442Parameter.SetRecordIterator( m_fBlockInfoDescription61442RecordIteratorParameter );
elements[0] = &m_fBlockInfoFBlockVersionParameter;
m_fBlockInfoDescription61443RecordFixParameter.SetMembers( 1, elements );
m_fBlockInfoDescription61443Parameter.SetRecordFix( m_fBlockInfoDescription61443RecordFixParameter );
m_fBlockInfoDescription61443RecordIteratorParameter.SetMembers( 0, elements );
m_fBlockInfoDescription61443Parameter.SetRecordIterator( m_fBlockInfoDescription61443RecordIteratorParameter );
elements[0] = &m_fBlockInfoMOSTVersionParameter;
m_fBlockInfoDescription61444RecordFixParameter.SetMembers( 1, elements );
m_fBlockInfoDescription61444Parameter.SetRecordFix( m_fBlockInfoDescription61444RecordFixParameter );
m_fBlockInfoDescription61444RecordIteratorParameter.SetMembers( 0, elements );
m_fBlockInfoDescription61444Parameter.SetRecordIterator( m_fBlockInfoDescription61444RecordIteratorParameter );
elements[0] = &m_fBlockInfoSystemIntegratorParameter;
m_fBlockInfoDescription61445RecordFixParameter.SetMembers( 1, elements );
m_fBlockInfoDescription61445Parameter.SetRecordFix( m_fBlockInfoDescription61445RecordFixParameter );
m_fBlockInfoDescription61445RecordIteratorParameter.SetMembers( 0, elements );
m_fBlockInfoDescription61445Parameter.SetRecordIterator( m_fBlockInfoDescription61445RecordIteratorParameter );
elements[0] = &m_fBlockInfoFBlockTypeParameter;
m_fBlockInfoDescription61446RecordFixParameter.SetMembers( 1, elements );
m_fBlockInfoDescription61446Parameter.SetRecordFix( m_fBlockInfoDescription61446RecordFixParameter );
m_fBlockInfoDescription61446RecordIteratorParameter.SetMembers( 0, elements );
m_fBlockInfoDescription61446Parameter.SetRecordIterator( m_fBlockInfoDescription61446RecordIteratorParameter );
{
    uint32_t minValues[] = {0, 61440, 61441, 61442, 61443, 61444, 61445, 61446};
    uint32_t maxValues[] = {4095, 61440, 61441, 61442, 61443, 61444, 61445, 61446};
    k2l::acs::protocols::most::CMOSTList* streamCases[] = { &m_fBlockInfoDescription0Parameter,  &m_fBlockInfoDescription61440Parameter,  &m_fBlockInfoDescription61441Parameter,  &m_fBlockInfoDescription61442Parameter,  &m_fBlockInfoDescription61443Parameter,  &m_fBlockInfoDescription61444Parameter,  &m_fBlockInfoDescription61445Parameter,  &m_fBlockInfoDescription61446Parameter};
    m_fBlockInfoDescriptionParameter.SetStreamCases( 8, minValues, maxValues, streamCases );
}
m_fBlockInfoDescriptionParameter.SetSelector( m_fBlockInfoIDParameter );
elements[0] = &m_fBlockInfoIDParameter;
elements[1] = &m_fBlockInfoDescriptionParameter;
m_fBlockInfoFunction.SetDataItems(12, 2, elements);
elements[0] = &m_fBlockInfoIDParameter;
m_fBlockInfoFunction.SetDataItems(1, 1, elements);
AddFunction( &m_fBlockInfoFunction );
m_auxDeviceInfoFunction.FunctionID( 0x432 );
m_auxDeviceInfoFunction.Notification( true );
m_auxDeviceInfoFunction.AutomaticNotification( true );
m_auxDeviceInfoFunction.SupportedOperations( 0x9002 );
m_auxDeviceInfoDeviceClassParameterSpec.Values( 7, m_auxDeviceInfoDeviceClassParameterSpecValues );
m_auxDeviceInfoDeviceClassParameter.SetValidator( &m_auxDeviceInfoDeviceClassParameterSpec );
m_auxDeviceInfoDeviceClassParameter.Value( m_auxDeviceInfoDeviceClassParameterSpecValues[0] );
m_auxDeviceInfoDeviceTypeParameterSpec.Values( 18, m_auxDeviceInfoDeviceTypeParameterSpecValues );
m_auxDeviceInfoDeviceTypeParameter.SetValidator( &m_auxDeviceInfoDeviceTypeParameterSpec );
m_auxDeviceInfoDeviceTypeParameter.Value( m_auxDeviceInfoDeviceTypeParameterSpecValues[0] );
m_auxDeviceInfoDeviceNameParameterSpec.MaxCharacters( 255 );
m_auxDeviceInfoDeviceNameParameter.SetValidator( &m_auxDeviceInfoDeviceNameParameterSpec );
elements[0] = &m_auxDeviceInfoDeviceNumParameter;
elements[1] = &m_auxDeviceInfoDeviceClassParameter;
elements[2] = &m_auxDeviceInfoDeviceTypeParameter;
elements[3] = &m_auxDeviceInfoDeviceNameParameter;
m_auxDeviceInfoFunction.SetDataItems(12, 4, elements);
AddFunction( &m_auxDeviceInfoFunction );
AddFunction( &m_notificationCheckFunction );
AddFunction( &m_notificationFunction );
AddFunction( &m_fktIDsFunction );
NotificationService( &m_notificationFunction );
m_notificationFunction.Update();
m_fktIDsFunction.Update();
return true;
}


/*=============================================================================
 * END OF FILE
 *=============================================================================*/
