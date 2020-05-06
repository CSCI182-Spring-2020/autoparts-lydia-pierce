#include "EnginePart.h"

void EnginePart::PrintPart()
{
	cout << _EngineSpecNo << "\t" << AutoPart::_PartNo << "\t" << AutoPart::_PartMaker << "\t" << AutoPart::_PartDescription << endl;
}