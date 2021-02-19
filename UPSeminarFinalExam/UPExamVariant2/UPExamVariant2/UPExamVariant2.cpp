#include <iostream>
#include "UPExamVariant2.h"
using namespace std;
const int MAXSIZE = 100;
void inputMatrix(int matrix[][MAXSIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void inputMatrix(char** matrix, int rows,int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}
}


//task1
//bool areEqualDiagonalsDifference(int matrix[][MAXSIZE], int size)
//{
//	int miniSize = size / 2;
//	int differenceQuadrantOne = 0;
//	int mainDiag = 1;
//	int secondDiag = 1;
//	for (int i = 0; i < miniSize; i++)
//	{
//		for (int j = miniSize + 1; j < size; j++)
//		{
//			if (i == j - miniSize - 1)
//			{
//				mainDiag *= matrix[i][j];
//			}
//			if (i + j == size - 1)
//			{
//				secondDiag *= matrix[i][j];
//			}
//		}
//	}
//	differenceQuadrantOne = mainDiag - secondDiag;
//
//	mainDiag = 1;
//	secondDiag = 1;
//
//	int differenceQuadrantTwo = 0;
//	for (int i = 0; i < miniSize; i++)
//	{
//		for (int j = 0; j < miniSize; j++)
//		{
//			if (i == j)
//			{
//				mainDiag *= matrix[i][j];
//			}
//			if (i + j == miniSize-1)
//			{
//				secondDiag *= matrix[i][j];
//			}
//		}
//	}
//	differenceQuadrantTwo = mainDiag - secondDiag;
//
//	mainDiag = 1;
//	secondDiag = 1;
//	int differenceQuadrantThree = 0;
//	for (int i = miniSize + 1; i < size; i++)
//	{
//		for (int j = 0; j < miniSize; j++)
//		{
//			if (i == j + miniSize + 1)
//			{
//				mainDiag *= matrix[i][j];
//			}
//			if (i + j == size - 1)
//			{
//				secondDiag *= matrix[i][j];
//			}
//		}
//	}
//	differenceQuadrantThree = mainDiag - secondDiag;
//
//	mainDiag = 1;
//	secondDiag = 1;
//	int differenceQuadrantFour = 0;
//
//	for (int i = miniSize + 1; i < size; i++)
//	{
//		for (int j = miniSize + 1; j < size; j++)
//		{
//			if (i == j)
//			{
//				mainDiag *= matrix[i][j];
//			}
//			if (i + j == size+miniSize)
//			{
//				secondDiag *= matrix[i][j];
//			}
//		}
//	}
//	differenceQuadrantFour = mainDiag - secondDiag;
//	bool equalDiferences = differenceQuadrantOne == differenceQuadrantThree && differenceQuadrantTwo == differenceQuadrantFour;
//	return equalDiferences;
//}

//task2

//int findUp(char**matrix, int rows,int cols)
//{
//	int counter = 0;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols - 1; j++)
//		{
//			if (matrix[i][j] == 'u' && matrix[i][j+1] == 'p')
//			{
//				cout << i << " " << j << endl;
//				counter++;
//			}
//		}
//	}
//	for (int i = 0; i < rows-1; i++)
//	{
//		for (int j = 0; j <cols ; j++)
//		{
//			if (matrix[i][j] == 'u' && matrix[i+1][j] == 'p')
//			{
//				counter++;
//				cout << i << " " << j << endl;
//			}
//		}
//	}
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols - 1; j++)
//		{
//			if (matrix[i][j] == 'p' && matrix[i][j + 1] == 'u')
//			{
//				cout << i << " " << j << endl;
//				counter++;
//			}
//		}
//	}
//	for (int i = 0; i < rows - 1; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (matrix[i][j] == 'p' && matrix[i + 1][j] == 'u')
//			{
//				counter++;
//				cout << i << " " << j << endl;
//			}
//		}
//	}
//	return counter;
//}

//task3

int myStrlen(const char* arr)
{
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return i;
}
void mySwap(char& a, char& b)
{
	int temp = a;
	a = b;
	b = temp;
}
struct PermutationArray
{
	char matrix[MAXSIZE][MAXSIZE];
	int size = 0;
	void addElement(const char* element)
	{
		int len = myStrlen(element);
		if ( len> MAXSIZE)
		{
			return;
		}
		for (int i = 0; i < len; i++)
		{
			matrix[size][i] = element[i];
		}
		matrix[size][len] = '\0';
		size++;
	}
	void printElement()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j <myStrlen(matrix[i]) ; j++)
			{
				cout << matrix[i][j];
			}
			cout << endl;
		}
	}
};

void permute(char str[MAXSIZE], int start, int end,PermutationArray& pA)
{
	if (start == end)
	{
		if(strlen(str)== end)
		pA.addElement(str);
	}
	else
	{
		for (int i = start; i <= end; i++)
		{
			mySwap(str[start], str[i]);
			permute(str, start + 1, end, pA);
			mySwap(str[start], str[i]);
		}
	}
}

int main()
{
	//task1

	//int matrix[MAXSIZE][MAXSIZE];
	//int size;
	//do
	//{
	//	cout << "Input size: ";
	//	cin >> size;
	//} while (!(size > 3 && size % 2 == 1));
	//inputMatrix(matrix, size);

	//cout << areEqualDiagonalsDifference(matrix, size) << endl;

	// task 2

	//int rows, cols;
	//do
	//{
	//	cout << "Input rows and cols: ";
	//	cin >> rows>>cols;
	//} while (rows>10||cols>10);

	//char** matrix = new char* [rows]; //allocate matrix
	//for (int i = 0; i < rows; ++i)
	//{
	//	matrix[i] = new char[cols];
	//}

	//inputMatrix(matrix,rows,cols);
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		cout << matrix[i][j]<<" ";
	//	}
	//	cout << endl;
	//}
	//cout << findUp(matrix, rows,cols);

	//for (int i = 0; i < rows; ++i) //delete matrix
	//{
	//	delete[] matrix[i];
	//}
	//delete[] matrix;

	//task3
	PermutationArray pA;

	//pA.addElement("abc");
	char input[MAXSIZE];
	cin >> input;
	int len = myStrlen(input);
	permute(input, 0, len, pA);
	cout << "All permutations are: " << endl;
	pA.printElement();
	return 0;
}

