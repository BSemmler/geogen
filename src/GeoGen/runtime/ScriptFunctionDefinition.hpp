#pragma once

#include <vector>

#include "FunctionDefinition.hpp"
#include "VariableDefinition.hpp"
#include "SymbolDefinitionTable.hpp"
#include "CodeBlock.hpp"
#include "../CodeLocation.hpp"

namespace geogen 
{
	namespace runtime
	{
		class ScriptFunctionDefinition : public FunctionDefinition
		{
		private:
			int parameterCount;
			SymbolDefinitionTable<VariableDefinition> localVariableDefinitions;
			CodeBlock rootCodeBlock;
			CodeLocation location;
		public:
			ScriptFunctionDefinition(String const& name, CodeLocation location, int parameterCount) 
				: FunctionDefinition(name), location(location), parameterCount(parameterCount)
			{
			}

			inline CodeLocation GetLocation() const { return this->location; }

			inline int GetParameterCount() const { return this->parameterCount; }

			inline CodeBlock& GetRootCodeBlock() { return this->rootCodeBlock; }
			inline CodeBlock const& GetRootCodeBlock() const { return this->rootCodeBlock; }

			virtual void Call(CodeLocation location, VirtualMachine* vm, ManagedObject* instance, unsigned numberOfArguments) const;

			virtual void Serialize(IOStream& stream) const;
		};
	}
}