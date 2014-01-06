#pragma once

#include "CodeLocation.hpp"
#include "ErrorCode.hpp"
#include "Generator.hpp"
#include "Number.hpp"
#include "compiler/CodeBlock.hpp"
#include "compiler/CompiledScript.hpp"
#include "compiler/Compiler.hpp"
#include "compiler/CompilerException.hpp"
#include "compiler/FunctionDefinition.hpp"
#include "compiler/MetadataKeyValueCollection.hpp"
#include "compiler/MetadataBoolean.hpp"
#include "compiler/MetadataIdentifier.hpp"
#include "compiler/MetadataNumber.hpp"
#include "compiler/MetadataString.hpp"
#include "compiler/MetadataSimpleCollection.hpp"
#include "compiler/MetadataValue.hpp"
#include "compiler/ScriptFunctionDefinition.hpp"
#include "compiler/ScriptVariableDefinition.hpp"
#include "compiler/SymbolDefinitionTable.hpp"
#include "compiler/SymbolNameTable.hpp"
#include "compiler/SymbolRedefinitionException.hpp"
#include "compiler/TypeDefinition.hpp"
#include "compiler/UnexpectedTokenException.hpp"
#include "compiler/VariableDefinition.hpp"

#include "compiler/instructions/Instruction.hpp"
#include "compiler/instructions/BreakInstruction.hpp"
#include "compiler/instructions/CallGlobalInstruction.hpp"
#include "compiler/instructions/CallMemberInstruction.hpp"
#include "compiler/instructions/ContinueInstruction.hpp"
#include "compiler/instructions/IfInstruction.hpp"
#include "compiler/instructions/LoadConstBooleanInstruction.hpp"
#include "compiler/instructions/LoadConstNumberInstruction.hpp"
#include "compiler/instructions/LoadConstStringInstruction.hpp"
#include "compiler/instructions/LoadGlobalValueInstruction.hpp"
#include "compiler/instructions/LoadLocalValueInstruction.hpp"
#include "compiler/instructions/LoadMemberValueInstruction.hpp"
#include "compiler/instructions/LoadNullInstruction.hpp"
#include "compiler/instructions/PopInstruction.hpp"
#include "compiler/instructions/ReturnInstruction.hpp"
#include "compiler/instructions/StoreGlobalValueInstruction.hpp"
#include "compiler/instructions/StoreLocalValueInstruction.hpp"
#include "compiler/instructions/StoreMemberValueInstruction.hpp"
#include "compiler/instructions/WhileInstruction.hpp"
#include "compiler/instructions/YieldAsMainInstruction.hpp"
#include "compiler/instructions/YieldAsNamedInstruction.hpp"