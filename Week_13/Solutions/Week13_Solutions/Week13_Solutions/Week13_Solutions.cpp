#include <iostream>
using namespace std;

//task1
bool isOdd(int  n)
{
	if (n % 2 == 1)
	{
		return true;
	}
}

void filter(int* arr1, int* arr2, int& n, bool(*isOdd)(int))
{
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (isOdd(arr1[i]))
		{
			arr2[index] = arr1[i];
			index++;
		}
	}
	n = index;
}

//task2
double devideByTwo(double a)
{
	return a / 2;
}

void map(double* arr, int n, double(*multiplyByTwo)(double))
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = devideByTwo(arr[i]);
	}
}

int main()
{
	//task1
	int size = 10;
	// Създаване
	int** arr = new int* [size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new int;
		*arr[i] = i;
	}
	// Извеждане
	for (int i = 0; i < size; i++)
	{
		cout << *arr[i] << " ";
	}
	// Разрушаване
	for (int i = 0; i < size; i++) 
	{
		delete arr[i];
	}
	delete[] arr;

	//task2
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	int n = 5;
	filter(arr1, arr2, n, isOdd);
	for (int i = 0; i < n; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	//task 3
	double arr3[5] = { 1,2,3,4,5 };
	map(arr3,5, devideByTwo);
	for (int i = 0; i < 5; i++)
	{
		cout << arr3[i] << " ";
	}
	return 0;
}

