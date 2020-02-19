#pragma once
#include <iostream>
#include <string>
using namespace std;

class BasePart
{
// private:

protected:
    // int _PartNo = 0;
 
public:
    int _PartNo = 0;

    BasePart(int PartNo)
    {
        _PartNo = PartNo;
        cout << "In BasePart Constructor: " << _PartNo << endl;
    }
    virtual ~BasePart()
    {
        cout << "In BasePart Destructor: " << _PartNo << endl;
    }

    // Set the class to always have to be overridden
    // virtual void PrintPart() = 0;
};

