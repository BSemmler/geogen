#pragma once

#include "../Serializable.hpp"
#include "../String.hpp"
#include "../InternalErrorException.hpp"

namespace geogen
{
	namespace runtime
	{
		enum ScriptParameterType
		{
			SCRIPT_PARAMETER_TYPE_NUMBER,
			SCRIPT_PARAMETER_TYPE_BOOLEAN,
			SCRIPT_PARAMETER_TYPE_ENUM
		};

		class ScriptParameter : public Serializable
		{
		protected:
			String name;
			String label;
			String description;

		public:
			virtual ~ScriptParameter() {};
			ScriptParameter(String const& name, String const& label, String const& description) : name(name), label(label), description(description) { };

			inline String GetName() const { return this->name; }
			inline String GetLabel() const { return this->label; }
			inline String GetDescription() const { return this->description; }

			virtual ScriptParameterType GetType() const = 0;
			virtual void ResetToDefault() = 0;
			virtual bool EqualsTo(ScriptParameter const* other) const = 0;
			virtual ScriptParameter* Clone() const = 0;

			virtual void Serialize(IOStream& stream) const = 0;
		};

		static inline String ScriptParameterTypeToString(ScriptParameterType dimensions)
		{
			switch (dimensions)
			{
			case SCRIPT_PARAMETER_TYPE_NUMBER: return GG_STR("Number");
			case SCRIPT_PARAMETER_TYPE_BOOLEAN: return GG_STR("Boolean");
			case SCRIPT_PARAMETER_TYPE_ENUM: return GG_STR("Enum");
			default:
				throw InternalErrorException(GG_STR("Invalid ScriptParameterType."));
			}
		}
	}
}