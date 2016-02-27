#pragma once
#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
class fraction
{
public:

	int num;
	int den;

	fraction(int, int);
	fraction();

	fraction operator+ (fraction);
	void print();
	fraction Add(fraction y);
	fraction Add(fraction, fraction);

	fraction operator* (fraction);
	fraction Multiply(fraction, fraction);

	fraction subtract(fraction X);
	fraction operator/(fraction);
	fraction Divide(fraction X, fraction Y);
	fraction Divide(fraction X);
	void setNumDenom(int Denominator);
	void setNumNumerator(int Numerator);
	int getNumDenom();
	int getNumNumerator();
	fraction operator-(fraction);
	int gcd(int a, int b);
	fraction Multiply(fraction X);


};







#endif


