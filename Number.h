#pragma once
using namespace std;
#include<iostream>
class Number
{
public:
	Number();
	virtual void print();
	virtual Number add(const Number& other);
	virtual Number multiply(const Number& other);
};


