/*
Lydia Pierce
CSCI 182
AutoPart.cpp : This file contains the 'main' function. Program execution begins and ends there.
v2.0 2/19/2020
*/

#include <iostream>
#include <string>
#include "BasePart.h"
#include "AutoPart.h"
#include "EnginePart.h"
using namespace std;




int main()
{
    // BasePart bp(20);

    // Create part on the stack
    cout << "Create a part on the stack." << endl;
    EnginePart part(38, 5, "Steering Wheel", 243);
    part.PrintPart();

    // Create part on the heap
    cout << endl << "Create a part on the heap." << endl;
    EnginePart* pHeapPart = new EnginePart(39, 6, "Gear Shift", 500);
    pHeapPart->PrintPart();
    cout << endl;
    delete pHeapPart;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
