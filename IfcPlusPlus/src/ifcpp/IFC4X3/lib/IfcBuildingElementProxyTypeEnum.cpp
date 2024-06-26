/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcBuildingElementProxyTypeEnum.h"

// TYPE IfcBuildingElementProxyTypeEnum = ENUMERATION OF	(COMPLEX	,ELEMENT	,PARTIAL	,PROVISIONFORSPACE	,PROVISIONFORVOID	,USERDEFINED	,NOTDEFINED);
void IFC4X3::IfcBuildingElementProxyTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCBUILDINGELEMENTPROXYTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_COMPLEX:	stream << ".COMPLEX."; break;
		case ENUM_ELEMENT:	stream << ".ELEMENT."; break;
		case ENUM_PARTIAL:	stream << ".PARTIAL."; break;
		case ENUM_PROVISIONFORSPACE:	stream << ".PROVISIONFORSPACE."; break;
		case ENUM_PROVISIONFORVOID:	stream << ".PROVISIONFORVOID."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcBuildingElementProxyTypeEnum> IFC4X3::IfcBuildingElementProxyTypeEnum::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcBuildingElementProxyTypeEnum>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcBuildingElementProxyTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcBuildingElementProxyTypeEnum>(); }
	shared_ptr<IfcBuildingElementProxyTypeEnum> type_object( new IfcBuildingElementProxyTypeEnum() );
	if( std_iequal( arg, ".COMPLEX." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_COMPLEX;
	}
	else if( std_iequal( arg, ".ELEMENT." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_ELEMENT;
	}
	else if( std_iequal( arg, ".PARTIAL." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_PARTIAL;
	}
	else if( std_iequal( arg, ".PROVISIONFORSPACE." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_PROVISIONFORSPACE;
	}
	else if( std_iequal( arg, ".PROVISIONFORVOID." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_PROVISIONFORVOID;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcBuildingElementProxyTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
