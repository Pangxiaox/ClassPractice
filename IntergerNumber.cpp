#include"IntegerNumber.h"
#include<iostream>
using namespace std;

IntergerNumber::IntergerNumber(int a)
{
	Interger = a;
}

IntergerNumber IntergerNumber::add(const IntergerNumber&other)
{
	return IntergerNumber(Interger + other.Interger);
}

IntergerNumber IntergerNumber::multiply(const IntergerNumber&other)
{
	return IntergerNumber(Interger*other.Interger);
}

void IntergerNumber::print()
{
	cout << Interger << endl;
}
