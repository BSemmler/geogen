#pragma once

#include "../../Number.hpp"
#include "Instruction.hpp"

namespace geogen 
{
	namespace compiler 
	{
		namespace instructions
		{
			class LoadConstNumberInstruction : public Instruction
			{
			private:
				Number constNumber;
			public:				
				LoadConstNumberInstruction(CodeLocation location, Number constNumber) : Instruction(location)
				{
					this->constNumber = constNumber;
				}

				virtual void Serialize(std::iostream& stream) const { stream << "LoadConstNumber " << constNumber << std::endl; }
			};
		}
	}
}