#include <iostream>
#include<iomanip>
using namespace std;
const int MAXSIZE = 100;
//task1
void swapByPointers(int* a, int* b) // tuk moje da slojim vsichko, random kletka v pametta, null
{
    int* c = a;
    a = b;
    b = c;
}
void swapByReference(int& a, int& b) //restrikcii da se samo promenliva
{
    int c = a;
    a = b;
    b = c;
}

//task2
void print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr+i) << " ";
	}
	cout << endl;
}
int* reverseArray(int* arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - 1 - i]);
	}
	return arr;
}

void printMatrix(int matrix[MAXSIZE][MAXSIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout <<setw(3)<< *(*(matrix + i) + j);
		}
		cout << endl;
	}
}

void transposed(int matrixOne[MAXSIZE][MAXSIZE], int rowsOne, int cowsOne, int matrixTwo[MAXSIZE][MAXSIZE], int rowsTwo, int colsTwo)
{
	for (int i = 0; i < rowsOne; i++)
	{
		for (int j = 0; j < rowsTwo; j++)
		{
			matrixTwo[j][i] = matrixOne[i][j];
		}
	}
}

int* findDigit(int* arr, int size, int number)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			return (arr + i);
		}
	}
	return nullptr;//nullptr
}

int sumOfDigit(int number)
{
	int sum = 0;
	while (number != 0)
	{
		sum += number % 10;
		number /= 10;
	}
	return sum;
}

void sortBySumOfDigits(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (sumOfDigit(arr[i]) > sumOfDigit(arr[j]))
			{
				swap(arr[i], arr[j]);
			}
			if (sumOfDigit(arr[i]) == sumOfDigit(arr[j]))
			{
				if (arr[j] < arr[i])
				{
					swap(arr[i], arr[j]);
				}
			}
		}
	}
}

void merge(int* arr1, int arr1Size, int* arr2, int arr2Size, int* arr3)
{
	int counter1 = 0;
	int counter2 = 0;
	for (int i = 0; i < arr1Size + arr2Size; i++)
	{
		if (counter1 == arr1Size)
		{
			for (int k = counter1 + counter2; k < arr1Size + arr2Size; k++)
			{
				arr3[k] = arr2[counter2];
			}
			return;
		}
		if (counter2 == arr2Size)
		{
			for (int k = counter1 + counter2; k < arr1Size + arr1Size; k++)
			{
				arr3[k] = arr1[counter1];
			}
			return;
		}
		if (arr1[counter1] < arr2[counter2])
		{
			arr3[i] = arr1[counter1];
			counter1++;
		}
		else
		{
			arr3[i] = arr2[counter2];
			counter2++;
		}
	}
}
	

int main()
{
	//1task
	/*int a = 5;
	int b = 6;
	swapByPointers(&a, &b);
	cout << a << "  " << b << endl;
	swapByReference(a, b);
	cout << a << "  " << b;*/
	
	//2task
	//int arr[] = { 1,2,3,4,5 };
	//print(reverseArray(arr, 5), 5);

	int matrix[MAXSIZE][MAXSIZE] = 
	{ { 1,  2,  3,  4},
	{ 5,  6,  7,  8},
	{ 9, 10, 11, 12},
	{13, 14, 15, 16},
	{23, 24, 25, 26} };
	//task 3
	//printMatrix(matrix, 5, 4);
	
	int matrixTwo[MAXSIZE][MAXSIZE];
	
	//task4
	//transposed(matrix,5,4,matrixTwo,5,4);
	//printMatrix(matrixTwo,4,5);

	//task 5
	//int arr[MAXSIZE] = { 16, 74, 32, 95, 28 };
	//cout << findDigit(arr,5, 3);

	//task 6
	//int arr[MAXSIZE] = { 203, 189, 41, 900, 666 };
	//sortBySumOfDigits(arr, 5);
	//print(arr,5);

	//task 7

	int arr1[MAXSIZE] = { 1, 7, 8 };
	int arr2[MAXSIZE] = { 2, 6, 9 };
	int arr3[MAXSIZE];
	merge(arr1, 3, arr2, 3, arr3);
	print(arr3, 6);
	return 0;
}
