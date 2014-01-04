#pragma once

#include "Instruction.hpp"

namespace geogen
{
	namespace compiler
	{
		namespace instructions
		{
			class LoadNullInstruction : public Instruction
			{
			private:
			public:
				LoadNullInstruction()
				{
				}

				virtual void Serialize(std::iostream& stream) const { stream << "LoadNull " << std::endl; }
			};
		}
	}
}