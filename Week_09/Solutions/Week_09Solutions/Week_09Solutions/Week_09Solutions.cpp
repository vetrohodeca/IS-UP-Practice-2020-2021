#include <iostream>
using namespace std;
const int arrSize = 10;
const int MAXSIZE = 128;
int pow(int number, int power)
{
	int result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= number;
	}
	return result;
}

int max(int number1, int number2)
{
	if (number1 > number2)
	{
		return number1;
	}
	else return number2;
}

bool isLetter(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c < 'Z')
	{
		return true;
	}
	return false;
}

bool isDigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return true;
	}
	return false;
}

int digitsSum(int number)
{
	int sum = 0;
	for (; number != 0; number /= 10)
	{
		sum += number % 10;
	}
	return sum;
}

int reverseNumber(int number)
{
	int result = 0;
	while (number != 0)
	{
		result = result * 10 + number % 10;
		number /= 10;
	}
	return result;
}
void printReverseArray(int arr[arrSize], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		while (arr[i] % 10 == 0)
		{
			cout << '0';
			arr[i] /= 10;
		}
		arr[i] = reverseNumber(arr[i]);
		cout << arr[i] << " ";
	}
}
void printMultiplicationTable()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (i * j > 9)
				cout << i << "*" << j << "=" << i * j << " ";
			else
				cout << i << "*" << j << "=" << i * j << "  ";
		}
		cout << endl;
	}
}



bool IncreasingElemnetns(int arr[MAXSIZE],int n)
{
	bool ascending = true;
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			ascending = false;
		}
	}
	return ascending;
}
void  DecToBin(int number)
{
	int digitCounter = 0;
	int arr[MAXSIZE];
	while (number != 0)
	{
		arr[digitCounter] = number % 2;
		digitCounter++;
		number = number / 2;
	}
	for (int i = digitCounter - 1; i >= 0; i--)
	{
		cout << arr[i];
	}

}
int main()
{

	//cout << pow(5, 0);
	//cout << max(3, 3);
	//cout << boolalpha << isLetter('k');
	//cout << boolalpha <<isDigit ('f');
	//cout << digitsSum(123456789);
	int arr[] = { 1230, 205, 845, 36, 147, 596, 23, 1598, 61, 5011 };;
	printReverseArray(arr, 10);
	//printMultiplicationTable();
	/*int arr[] = { 1,22,3,4,5 };
	cout << boolalpha << IncreasingElemnetns(arr, 5);*/
	DecToBin(10);
	return 0;
}
