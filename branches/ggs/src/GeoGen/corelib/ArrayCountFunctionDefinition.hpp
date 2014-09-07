#pragma once

#include <vector>

#include "../runtime/MemberNativeFunctionDefinition.hpp"
#include "../CodeLocation.hpp"
#include "ArrayTypeDefinition.hpp"

namespace geogen
{
	namespace corelib
	{
		/// Definition for function Array.Count.
		class ArrayCountFunctionDefinition : public runtime::MemberNativeFunctionDefinition
		{
		private:
		public:
			ArrayCountFunctionDefinition(ArrayTypeDefinition const* owningType) : MemberNativeFunctionDefinition(GG_STR("Count"), owningType) {};
			
			virtual runtime::ManagedObject* CallNative(CodeLocation location, runtime::VirtualMachine* vm, runtime::ManagedObject* instance, std::vector<runtime::ManagedObject*> arguments) const;

			virtual runtime::MethodType GetMethodType() const { return runtime::METHOD_TYPE_INSTANCE; };
		};
	}
}