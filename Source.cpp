include<iostream>
#include"fraction.h"

using namespace std;

int main()
{

	fraction sub(3, 9);
	fraction mult(4, 13);
	fraction div(1, 12);
	fraction ad(5, 20);

	sub = sub.subtract(ad);
	mult = mult.Multiply(ad);
	div = div.Divide(ad);
	mult = mult.Add(ad);

	ad.print();
	sub.print();
	mult.print();
	div.print();


	system("PAUSE");

	return 0;
}