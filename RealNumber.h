#pragma once
#include"Number.h"
class RealNumber :public Number
{
public:
	RealNumber(double a);
       virtual   void print();
       virtual	 RealNumber add(const RealNumber& other);
       virtual	 RealNumber multiply(const RealNumber& other);
	double   Realnumber;
};
