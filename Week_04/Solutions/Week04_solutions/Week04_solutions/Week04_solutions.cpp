#include <iostream>
using namespace std;
int main()
{/*
	task 1
	int number, factorial = 1;
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		factorial = factorial * i;
	}
	cout << factorial;

	task 2

	int number, countOfDigits = 0;
	cin >> number;
	if (number == 0)
	{
		cout << 1;
	}
	while (number != 0)
	{
		number /= 10;
		countOfDigits++;
	}
	cout << countOfDigits;
	return 0;

	task 3 do while

	int number;
	cin >> number;
	int divisor = 2;
	do
	{
		if (number % divisor == 0)
		{
			cout << divisor << " is a divisor" << endl;
		}
		divisor++;
	} while (divisor <= 10);

	task 3 while

	int number;
	cin >> number;
	int divisor = 2;
	while (divisor <= 10)
	{
		if (number % divisor == 0)
		{
			cout << divisor << " is a divisor" << endl;
		}
		divisor++;
	}
	return 0;

	task 4

	int firstDigit = 0;
	int secondDigit = 1;
	cout << firstDigit <<"  "<< secondDigit << "  ";
	for (int i = 0; i < 18; i++)
	{
		int current = firstDigit + secondDigit;
		cout << current<<"  ";
		firstDigit = secondDigit;
		secondDigit = current;
	}

	 task 5

	for (int  i = 100; i < 1000; i++)
	{
		int thirdDigit = i % 10;
		int secondDifit = i / 10 % 10;
		int firstDigit = i / 100 % 10;
		if (firstDigit != secondDifit && firstDigit != thirdDigit && thirdDigit != secondDifit)
		{
			cout << i << "  ";
		}
	}

	task 6

	int number;
	cin >> number;
	for (int i = number; i < 1000; i++)
	{
		if (i % number == 0)
		{
			cout << i << "  ";
		}
	}

	task 7

	int number, sumOfDeviders = 0;
	cin >> number;
	for (int i = 1; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			sumOfDeviders += i;
		}
	}
	if (sumOfDeviders == number)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	task 8
	*/
	int number, sum = 0, countOfDigits = 0;
	cin >> number;
	int copyOfNumber = number;
	while (copyOfNumber != 0)
	{
		copyOfNumber /= 10;
		countOfDigits++;
	}
	copyOfNumber = number;
	for (int i = 0; i < countOfDigits; i++)
	{
		sum += pow(copyOfNumber % 10,countOfDigits);
		copyOfNumber /= 10;
	}
	if (sum == number)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	return 0;
}

