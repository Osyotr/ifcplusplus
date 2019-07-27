/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcMassFlowRateMeasure.h"

// TYPE IfcMassFlowRateMeasure = REAL;
IfcMassFlowRateMeasure::IfcMassFlowRateMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcMassFlowRateMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMassFlowRateMeasure> copy_self( new IfcMassFlowRateMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcMassFlowRateMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMASSFLOWRATEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcMassFlowRateMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcMassFlowRateMeasure> IfcMassFlowRateMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcMassFlowRateMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcMassFlowRateMeasure>(); }
	shared_ptr<IfcMassFlowRateMeasure> type_object( new IfcMassFlowRateMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
