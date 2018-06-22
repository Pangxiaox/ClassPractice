#pragma once
#include"Number.h"

class ComplexNumber :public Number
{
public:
	ComplexNumber(double a, double b);
	virtual void print();
	virtual ComplexNumber add(const ComplexNumber&other);
	virtual ComplexNumber multiply(const ComplexNumber&other);
	double Re, Im;
};
