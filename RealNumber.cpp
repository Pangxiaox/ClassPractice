#include"RealNumber.h"
#include<iostream>
using namespace std;

RealNumber::RealNumber(double a)
{
	Realnumber = a;
}
RealNumber RealNumber::add(const RealNumber&other)
{
	return RealNumber(Realnumber + other.Realnumber);
}
RealNumber RealNumber::multiply(const RealNumber&other)
{
	return RealNumber(Realnumber*other.Realnumber);
}
void RealNumber::print()
{
	cout << Realnumber << endl;
}
