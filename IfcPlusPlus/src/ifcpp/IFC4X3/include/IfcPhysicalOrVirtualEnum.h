/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcPhysicalOrVirtualEnum = ENUMERATION OF	(PHYSICAL	,VIRTUAL	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcPhysicalOrVirtualEnum : virtual public BuildingObject
	{
	public:
		enum IfcPhysicalOrVirtualEnumEnum
		{
			ENUM_PHYSICAL,
			ENUM_VIRTUAL,
			ENUM_NOTDEFINED
		};

		IfcPhysicalOrVirtualEnum() = default;
		IfcPhysicalOrVirtualEnum( IfcPhysicalOrVirtualEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 64643665; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcPhysicalOrVirtualEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcPhysicalOrVirtualEnumEnum m_enum;
	};
}
