/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4X3/include/IfcConnectionSurfaceGeometry.h"
#include "ifcpp/IFC4X3/include/IfcSurfaceOrFaceSurface.h"

// ENTITY IfcConnectionSurfaceGeometry 
IFC4X3::IfcConnectionSurfaceGeometry::IfcConnectionSurfaceGeometry( int tag ) { m_tag = tag; }
void IFC4X3::IfcConnectionSurfaceGeometry::getStepLine( std::stringstream& stream, size_t precision ) const
{
	stream << "#" << m_tag << "=IFCCONNECTIONSURFACEGEOMETRY" << "(";
	if( m_SurfaceOnRelatingElement ) { m_SurfaceOnRelatingElement->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ",";
	if( m_SurfaceOnRelatedElement ) { m_SurfaceOnRelatedElement->getStepParameter( stream, true, precision ); } else { stream << "$" ; }
	stream << ");";
}
void IFC4X3::IfcConnectionSurfaceGeometry::getStepParameter( std::stringstream& stream, bool /*is_select_type*/, size_t /*precision*/ ) const { stream << "#" << m_tag; }
void IFC4X3::IfcConnectionSurfaceGeometry::readStepArguments( const std::vector<std::string>& args, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound )
{
	const size_t num_args = args.size();
	if( num_args > 0 ){m_SurfaceOnRelatingElement = IfcSurfaceOrFaceSurface::createObjectFromSTEP( args[0], map, errorStream, entityIdNotFound );}
	if( num_args > 1 ){m_SurfaceOnRelatedElement = IfcSurfaceOrFaceSurface::createObjectFromSTEP( args[1], map, errorStream, entityIdNotFound );}
	if( num_args != 2 ){ errorStream << "Wrong parameter count for entity IfcConnectionSurfaceGeometry, expecting 2, having " << num_args << ". Entity ID: " << m_tag << std::endl; }
}
void IFC4X3::IfcConnectionSurfaceGeometry::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IFC4X3::IfcConnectionGeometry::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "SurfaceOnRelatingElement", m_SurfaceOnRelatingElement ) );
	vec_attributes.emplace_back( std::make_pair( "SurfaceOnRelatedElement", m_SurfaceOnRelatedElement ) );
}
void IFC4X3::IfcConnectionSurfaceGeometry::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IFC4X3::IfcConnectionGeometry::getAttributesInverse( vec_attributes_inverse );
}
void IFC4X3::IfcConnectionSurfaceGeometry::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcConnectionGeometry::setInverseCounterparts( ptr_self_entity );
}
void IFC4X3::IfcConnectionSurfaceGeometry::unlinkFromInverseCounterparts()
{
	IfcConnectionGeometry::unlinkFromInverseCounterparts();
}
