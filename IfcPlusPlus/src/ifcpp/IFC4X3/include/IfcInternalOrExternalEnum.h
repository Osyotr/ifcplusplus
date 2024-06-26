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
	// TYPE IfcInternalOrExternalEnum = ENUMERATION OF	(EXTERNAL	,EXTERNAL_EARTH	,EXTERNAL_FIRE	,EXTERNAL_WATER	,INTERNAL	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcInternalOrExternalEnum : virtual public BuildingObject
	{
	public:
		enum IfcInternalOrExternalEnumEnum
		{
			ENUM_EXTERNAL,
			ENUM_EXTERNAL_EARTH,
			ENUM_EXTERNAL_FIRE,
			ENUM_EXTERNAL_WATER,
			ENUM_INTERNAL,
			ENUM_NOTDEFINED
		};

		IfcInternalOrExternalEnum() = default;
		IfcInternalOrExternalEnum( IfcInternalOrExternalEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1687521235; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcInternalOrExternalEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcInternalOrExternalEnumEnum m_enum;
	};
}
