#pragma once
#include <iostream>
#include <string>
#include "AutoPart.h"
#include "BasePart.h"

using namespace std;

class EnginePart : AutoPart
{
public:
	int _EngineSpecNo = 0;

	EnginePart(int EngineSpecNo, int partNo, string partDescription, int partMaker) : AutoPart(partNo, partDescription, partMaker)
	{
		_EngineSpecNo = EngineSpecNo;
		cout << "In EnginePart Constructor: " << _EngineSpecNo << endl;
	}

	virtual ~EnginePart()
	{
		cout << "In EnginePart Destructor: " << _EngineSpecNo << endl;
	}
	void PrintPart();
};

