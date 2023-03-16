#include "pointers.h"

void PointersDriver()
{
	int i{ 1 };
	int* p1 = &i;
	cout << "p1 = " << p1 << endl;
	cout << "*p1 = " << *p1 << endl;

	int* p2 = new int;
	int* p3 = new int{ 36 };

	PointersBadFunc();	

	cout << "Returned from PointersBadFunc()\n";
}

void PointersBadFunc()
{
	int* p4 = new int{ 42 };
	delete p4;
	*p4 = 99; // illegal move
	return;
}