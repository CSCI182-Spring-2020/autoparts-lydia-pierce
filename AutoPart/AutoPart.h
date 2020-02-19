#pragma once
#include <iostream>
#include <string>
#include "BasePart.h"
using namespace std;

class AutoPart : BasePart
{
//private:
    // string _PartDescription = "";
    // int _PartMaker = 0;
public:
    string _PartDescription = "";
    int _PartMaker = 0;

    AutoPart(int partNo, string partDescription, int partMaker) : BasePart(partNo)
    {
        //   _PartNo = partNo;
        _PartDescription = partDescription;
        _PartMaker = partMaker;
        cout << "In AutoPart Constructor: " << _PartDescription << endl;
    }

    virtual ~AutoPart()
    {
        cout << "In AutoPart Destructor: " << _PartDescription << endl;
    }
    //void PrintPart();
};
