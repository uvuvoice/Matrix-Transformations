#include <iostream>
#include "FunctionPrototypes.h"
using namespace std;

int main()
{
	int iVariant, m = 0, n = 0;
	float fNumber;

	cout << "Variants: \n"
		"1. Multiplication by a number \n"
		"2. Addition (subtraction) \n"
		"3. Multiplication \n"
		"4. Transposition \n"
		"5. Inverse matrix \n" << endl;

	cout << "Enter your choice: " << endl;
		cin >> iVariant;

	switch (iVariant)		//calling the desired function, that creates an instance of a class Matrix
	{
	case 1:
		cout << "Enter the number of lines and columns: " << endl;
		cin >> m;
		cin >> n;
		cout << "Enter the number to multiply: " << endl;
		cin >> fNumber;

		MultiplicationByANumber(m, n, fNumber);
		break;

		/*
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
		*/
	}








	return 0;
}
