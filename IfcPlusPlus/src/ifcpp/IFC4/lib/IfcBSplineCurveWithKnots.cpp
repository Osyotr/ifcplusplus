/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBSplineCurveForm.h"
#include "ifcpp/IFC4/include/IfcBSplineCurveWithKnots.h"
#include "ifcpp/IFC4/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4/include/IfcInteger.h"
#include "ifcpp/IFC4/include/IfcKnotType.h"
#include "ifcpp/IFC4/include/IfcLogical.h"
#include "ifcpp/IFC4/include/IfcParameterValue.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcBSplineCurveWithKnots 
IfcBSplineCurveWithKnots::IfcBSplineCurveWithKnots( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcBSplineCurveWithKnots::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBSplineCurveWithKnots> copy_self( new IfcBSplineCurveWithKnots() );
	if( m_Degree ) { copy_self->m_Degree = dynamic_pointer_cast<IfcInteger>( m_Degree->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_ControlPointsList.size(); ++ii )
	{
		auto item_ii = m_ControlPointsList[ii];
		if( item_ii )
		{
			copy_self->m_ControlPointsList.emplace_back( dynamic_pointer_cast<IfcCartesianPoint>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_CurveForm ) { copy_self->m_CurveForm = dynamic_pointer_cast<IfcBSplineCurveForm>( m_CurveForm->getDeepCopy(options) ); }
	if( m_ClosedCurve ) { copy_self->m_ClosedCurve = dynamic_pointer_cast<IfcLogical>( m_ClosedCurve->getDeepCopy(options) ); }
	if( m_SelfIntersect ) { copy_self->m_SelfIntersect = dynamic_pointer_cast<IfcLogical>( m_SelfIntersect->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_KnotMultiplicities.size(); ++ii )
	{
		auto item_ii = m_KnotMultiplicities[ii];
		if( item_ii )
		{
			copy_self->m_KnotMultiplicities.emplace_back( dynamic_pointer_cast<IfcInteger>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_Knots.size(); ++ii )
	{
		auto item_ii = m_Knots[ii];
		if( item_ii )
		{
			copy_self->m_Knots.emplace_back( dynamic_pointer_cast<IfcParameterValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_KnotSpec ) { copy_self->m_KnotSpec = dynamic_pointer_cast<IfcKnotType>( m_KnotSpec->getDeepCopy(options) ); }
	return copy_self;
}
void IfcBSplineCurveWithKnots::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCBSPLINECURVEWITHKNOTS" << "(";
	if( m_Degree ) { m_Degree->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_ControlPointsList );
	stream << ",";
	if( m_CurveForm ) { m_CurveForm->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ClosedCurve ) { m_ClosedCurve->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SelfIntersect ) { m_SelfIntersect->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeTypeOfIntList( stream, m_KnotMultiplicities );
	stream << ",";
	writeTypeOfRealList( stream, m_Knots );
	stream << ",";
	if( m_KnotSpec ) { m_KnotSpec->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcBSplineCurveWithKnots::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcBSplineCurveWithKnots::toString() const { return L"IfcBSplineCurveWithKnots"; }
void IfcBSplineCurveWithKnots::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 8 ){ std::stringstream err; err << "Wrong parameter count for entity IfcBSplineCurveWithKnots, expecting 8, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Degree = IfcInteger::createObjectFromSTEP( args[0], map );
	readEntityReferenceList( args[1], m_ControlPointsList, map );
	m_CurveForm = IfcBSplineCurveForm::createObjectFromSTEP( args[2], map );
	m_ClosedCurve = IfcLogical::createObjectFromSTEP( args[3], map );
	m_SelfIntersect = IfcLogical::createObjectFromSTEP( args[4], map );
	readTypeOfIntegerList( args[5], m_KnotMultiplicities );
	readTypeOfRealList( args[6], m_Knots );
	m_KnotSpec = IfcKnotType::createObjectFromSTEP( args[7], map );
}
void IfcBSplineCurveWithKnots::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcBSplineCurve::getAttributes( vec_attributes );
	if( !m_KnotMultiplicities.empty() )
	{
		shared_ptr<AttributeObjectVector> KnotMultiplicities_vec_object( new AttributeObjectVector() );
		std::copy( m_KnotMultiplicities.begin(), m_KnotMultiplicities.end(), std::back_inserter( KnotMultiplicities_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "KnotMultiplicities", KnotMultiplicities_vec_object ) );
	}
	if( !m_Knots.empty() )
	{
		shared_ptr<AttributeObjectVector> Knots_vec_object( new AttributeObjectVector() );
		std::copy( m_Knots.begin(), m_Knots.end(), std::back_inserter( Knots_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "Knots", Knots_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "KnotSpec", m_KnotSpec ) );
}
void IfcBSplineCurveWithKnots::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcBSplineCurve::getAttributesInverse( vec_attributes_inverse );
}
void IfcBSplineCurveWithKnots::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBSplineCurve::setInverseCounterparts( ptr_self_entity );
}
void IfcBSplineCurveWithKnots::unlinkFromInverseCounterparts()
{
	IfcBSplineCurve::unlinkFromInverseCounterparts();
}
