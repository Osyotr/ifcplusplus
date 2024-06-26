/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcVibrationIsolatorTypeEnum.h"

// TYPE IfcVibrationIsolatorTypeEnum = ENUMERATION OF	(BASE	,COMPRESSION	,SPRING	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcVibrationIsolatorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCVIBRATIONISOLATORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BASE:	stream << ".BASE."; break;
		case ENUM_COMPRESSION:	stream << ".COMPRESSION."; break;
		case ENUM_SPRING:	stream << ".SPRING."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcVibrationIsolatorTypeEnum> IFC4X3::IfcVibrationIsolatorTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcVibrationIsolatorTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcVibrationIsolatorTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcVibrationIsolatorTypeEnum>(); }
	shared_ptr<IfcVibrationIsolatorTypeEnum> type_object( new IfcVibrationIsolatorTypeEnum() );
	if( std_iequal( arg, ".BASE." ) )
	{
		type_object->m_enum = IfcVibrationIsolatorTypeEnum::ENUM_BASE;
	}
	else if( std_iequal( arg, ".COMPRESSION." ) )
	{
		type_object->m_enum = IfcVibrationIsolatorTypeEnum::ENUM_COMPRESSION;
	}
	else if( std_iequal( arg, ".SPRING." ) )
	{
		type_object->m_enum = IfcVibrationIsolatorTypeEnum::ENUM_SPRING;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcVibrationIsolatorTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcVibrationIsolatorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
