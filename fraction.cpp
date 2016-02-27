#include "fraction.h"
#include <iostream>
#include <stdio.h>


using namespace std;


fraction::fraction()
{
}



fraction::fraction(int a, int b){
	num = a;
	den = b;
}

void fraction::setNumDenom(int Denominator)
{
	den = Denominator;
}

void fraction::setNumNumerator(int Numerator)
{
	num = Numerator;
}

int fraction::getNumDenom()
{
	return den;
}

int fraction::getNumNumerator()
{
	return num;
}

fraction fraction::operator+(fraction X){
	fraction ans;
	ans.num = num*X.den + X.num*den;
	ans.den = X.den*den;

	return ans;
}


fraction fraction::operator*(fraction X){
	fraction ans;
	ans.num = num*X.num;
	ans.den = den*X.den;
	return ans;
}

fraction fraction::Multiply(fraction z, fraction y)
{
	return (z*y);
}

fraction fraction::operator-(fraction X)
{
	fraction ans;
	ans.num = num*X.den - den*X.num;
	ans.den = den*X.den;
	return ans;
}

fraction fraction::subtract(fraction X)
{
	fraction ans;
	ans.num = num*X.den - den*X.num;
	ans.den = den*X.den;
	return ans;
}

fraction fraction::Add(fraction y, fraction z)
{
	return y + z;
}

fraction fraction::Add(fraction y)
{
	fraction ans;
	ans.num = (num*y.den) + (y.num*den);
	ans.den = y.den*den;
	return ans;
}

void fraction::print()
{
	int WholeNo = 0;

	if (num / den >= 1)
	{
		WholeNo = num / den;
		num = num - den*WholeNo;
	}

	if (num / den <= -1)
	{
		num = abs(num);
		den = abs(den);

		WholeNo = num / den;
		num = num - den*WholeNo;
		WholeNo = WholeNo*-1;
	}


	int temp = num;
	num = num / gcd(num, den);
	den = den / gcd(temp, den);

	cout << WholeNo << " " << num << "/" << den << endl;
}

int fraction::gcd(int a, int b)
{
	int c;
	while (a != 0) {
		c = a; a = b%a;  b = c;
	}
	return b;
}



fraction fraction::operator/(fraction X)
{
	fraction ans;
	ans.num = (num)*X.den;
	ans.den = den*X.num;

	return ans;
}

fraction fraction::Divide(fraction X, fraction Y)
{
	return X / Y;
}

fraction fraction::Divide(fraction X)
{
	fraction ans;
	ans.num = (num)*X.den;
	ans.den = den*X.num;

	return ans;

}

fraction fraction::Multiply(fraction X)
{
	fraction ans;
	ans.num = num*X.num;
	ans.den = den*X.den;
	return ans;

};




