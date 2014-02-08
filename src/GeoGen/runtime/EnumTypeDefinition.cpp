#include "EnumTypeDefinition.hpp"
#include "../InternalErrorException.hpp"

using namespace std;
using namespace geogen;
using namespace runtime;

EnumTypeDefinition::EnumTypeDefinition(VirtualMachine const& vm, std::string const& name, ValueDefinitions valueDefinitions) : TypeDefinition(name), valueDefinitions(valueDefinitions)
{
	for (ValueDefinitions::const_iterator it = valueDefinitions.begin(); it != valueDefinitions.end(); it++){
		VariableDefinition* variableDefinition = new VariableDefinition(name, true);
		if (!this->GetVariableDefinitions().AddItem(variableDefinition, vm.GetCompiledScript().GetSymbolNameTable().GetNameIndex(name))){
			delete variableDefinition;
			throw InternalErrorException("Bad list of enum values.");
		}
	}
}