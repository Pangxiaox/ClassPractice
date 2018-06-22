#pragma once
#include"Number.h"

class IntergerNumber :public Number
{
public:
    IntergerNumber(int a);
   virtual       void print();
   virtual	 IntergerNumber add(const IntergerNumber &other);
   virtual	 IntergerNumber multiply(const IntergerNumber &other);
	int Interger;
};
