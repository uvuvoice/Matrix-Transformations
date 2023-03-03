#include <iostream>
#include "FunctionPrototypes.h"
using namespace std;

void MultiplicationByANumber(int m, int n, float number)
{
	const int iSizeMatrix = m * n;		//How much memory to allocate for the matrix

	Matrix matrix(m, n);	//Matrix instantiation

	float **pMatrix = new float*[matrix.line];
	for (int i = 0; i < matrix.line; i++)
	{
		pMatrix[i] = new float[matrix.column];
	}
	
	cout << "Print a values of target matrix by lines:" << endl;
	for (int i = 0; i < matrix.line; i++)
	{
		for (int j = 0; j < matrix.column; j++)
		{
			cin >> pMatrix[i][j];
			pMatrix[i][j] *= number;
		}
	}
	
	cout << "Your matrix:" << endl;
	for (int i = 0; i < matrix.line; i++)
	{
		for (int j = 0; j < matrix.column; j++)
		{
			cout << pMatrix[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < matrix.line; i++)
		delete[] pMatrix[i];
	delete[] pMatrix;

}