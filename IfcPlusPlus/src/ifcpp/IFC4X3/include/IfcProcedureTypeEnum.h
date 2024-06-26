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
	// TYPE IfcProcedureTypeEnum = ENUMERATION OF	(ADVICE_CAUTION	,ADVICE_NOTE	,ADVICE_WARNING	,CALIBRATION	,DIAGNOSTIC	,SHUTDOWN	,STARTUP	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcProcedureTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcProcedureTypeEnumEnum
		{
			ENUM_ADVICE_CAUTION,
			ENUM_ADVICE_NOTE,
			ENUM_ADVICE_WARNING,
			ENUM_CALIBRATION,
			ENUM_DIAGNOSTIC,
			ENUM_SHUTDOWN,
			ENUM_STARTUP,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcProcedureTypeEnum() = default;
		IfcProcedureTypeEnum( IfcProcedureTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 3037870609; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type, size_t precision ) const;
		static shared_ptr<IfcProcedureTypeEnum> createObjectFromSTEP( const std::string& arg, const BuildingModelMapType<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream, std::unordered_set<int>& entityIdNotFound );
		IfcProcedureTypeEnumEnum m_enum;
	};
}
