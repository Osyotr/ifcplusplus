/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcSizeSelect.h"
#include "ifcpp/IFC4/include/IfcTimeOrRatioSelect.h"
#include "ifcpp/IFC4/include/IfcRatioMeasure.h"

// TYPE IfcRatioMeasure = REAL;
IfcRatioMeasure::IfcRatioMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcRatioMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRatioMeasure> copy_self( new IfcRatioMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcRatioMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCRATIOMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcRatioMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcRatioMeasure> IfcRatioMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcRatioMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcRatioMeasure>(); }
	shared_ptr<IfcRatioMeasure> type_object( new IfcRatioMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
