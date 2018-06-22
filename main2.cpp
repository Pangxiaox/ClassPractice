#include"Number.h"
#include"IntegerNumber.h"
#include"ComplexNumber.h"
#include"RealNumber.h"
#include<iostream>
using namespace std;

int main()
{
	RealNumber R1(3.5), R2(5.7);
	RealNumber R3 = R1.add(R2);
	RealNumber R4 = R1.multiply(R2);

	IntergerNumber I1(4), I2(7);
	IntergerNumber I3 = I1.add(I2);
	IntergerNumber I4 = I1.multiply(I2);

	ComplexNumber C1(1, 2), C2(2, 6);
	ComplexNumber C3 = C1.add(C2);
	ComplexNumber C4 = C1.multiply(C2);

	R3.print();
	R4.print();
	I3.print();
	I4.print();
	C3.print();
	C4.print();
}
