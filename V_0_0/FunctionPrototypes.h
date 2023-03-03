#pragma once

void MultiplicationByANumber(int, int, float);		//Function 1.cpp
/*
void AdditionOrSubtraction();		//Function 2.cpp
void Multiplication();		//Function 3.cpp
void Transposition();		//Function 4.cpp
void InverseMatrix();		//Function 5.cpp
*/


class Matrix
{
public:
	int line, column;

	Matrix(int m, int n) : line(m), column(n)
	{
	}
};