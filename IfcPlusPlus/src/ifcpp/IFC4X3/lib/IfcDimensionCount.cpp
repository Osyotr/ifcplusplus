/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcDimensionCount.h"

// TYPE IfcDimensionCount = INTEGER;
IFC4X3::IfcDimensionCount::IfcDimensionCount( int value ) { m_value = value; }
void IFC4X3::IfcDimensionCount::getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const
{
	if( is_select_type ) { stream << "IFCDIMENSIONCOUNT("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcDimensionCount> IFC4X3::IfcDimensionCount::createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	if( arg.size() == 0 ) { return shared_ptr<IfcDimensionCount>(); }
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcDimensionCount>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcDimensionCount>(); }
	shared_ptr<IfcDimensionCount> type_object( new IfcDimensionCount() );
	readInteger( arg, type_object->m_value );
	return type_object;
}
