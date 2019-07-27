/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcElectricResistanceMeasure.h"

// TYPE IfcElectricResistanceMeasure = REAL;
IfcElectricResistanceMeasure::IfcElectricResistanceMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcElectricResistanceMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcElectricResistanceMeasure> copy_self( new IfcElectricResistanceMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcElectricResistanceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCELECTRICRESISTANCEMEASURE("; }
	appendRealWithoutTrailingZeros( stream, m_value );
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcElectricResistanceMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcElectricResistanceMeasure> IfcElectricResistanceMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcElectricResistanceMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcElectricResistanceMeasure>(); }
	shared_ptr<IfcElectricResistanceMeasure> type_object( new IfcElectricResistanceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
