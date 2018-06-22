#include"ComplexNumber.h"
using namespace std;
#include<iostream>

ComplexNumber::ComplexNumber(double a, double b)
{
	Re = a;
	Im = b;
}

ComplexNumber ComplexNumber::add(const ComplexNumber&other)
{
	return ComplexNumber(Re + other.Re, Im + other.Im);
}

ComplexNumber ComplexNumber::multiply(const ComplexNumber&other)
{
	double Real = (Re*other.Re)-(Im*other.Im);
	double Imagine = Re*other.Im + Im*other.Re;
	return ComplexNumber(Real, Imagine);
}

void ComplexNumber::print()
{
	cout << Re << "+" << Im <<"i"<< endl;
}
