// Week05_Solutions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	/* task 1

	 int n;
	 cin >> n;
	 for (int i = 0; i < n; i++)
	 {
		 for (int j = 0; j < i+1; j++)
		 {
			 cout << '#';
		 }
		 cout << endl;
	 }

	 task 2

	 int n;
	 do
	 {
		 cin >> n;
	 } while (n % 2 == 0);
	 for (int i = 0; i < n; i++)
	 {
		 for (int j = n-i-1; j >0; j--)
		 {
			 cout << ' ';
		 }
		 for (int j =0 ; j <=i; j++)
		 {
			 cout << '#'<<' ';
		 }
		 cout << endl;
	 }

	 task 3

	   int number;
	 cin >> number;
	 int countOfPrinted = 0;
	 int elemtnsInRow = 1;
	 while(number> countOfPrinted)
	 {
		 for (int j = 1; j < elemtnsInRow; j++)
		 {
			 countOfPrinted++;
			 cout << countOfPrinted << " ";
			 if (countOfPrinted >= number)
			 {
				 break;
			 }
		 }
		 elemtnsInRow++;
		 cout << endl;
	 }

	 task 4
		int a, b, countOfDigits=0,countOfEquals=0;
	 cin >> a >> b;
	 int copyOfA = a;
	 while (copyOfA != 0)
	 {
		 countOfDigits++;
		 copyOfA /= 10;
	 }
	 for (int i = 0; i < countOfDigits; i++)
	 {
		 if (a % 10 == b % 10)
		 {
			 countOfEquals++;
		 }
		 a /= 10;
		 b /= 10;
	 }
	 cout << countOfEquals;
	 
task 5

int n;
cin >> n;
for (int i = 0; i < n - 1; i++)
{
	for (int j = 0; j < i;j++)
	{
		cout << " ";
	}
	for (int j = i + 1; j <= n; j++)
	{
		cout << j;
	}
	cout << endl;
}
for (int i = 0; i < n-1; i++)
{
	cout << " ";
}
cout << n << endl;
for (int i = 0; i < n - 1; i++)
{
	for (int j = n - 1 - i; j > 1; j--)
	{
		cout << ' ';
	}
	for (int j =n-i-1 ; j <=n ; j++)
	{
		cout << j;
	}
	cout << endl;
}
 
task 6

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j >1; j--)
		{
			cout << " ";
		}
		cout << '/';
		for (int j = 2*n-2*i; j < 2 * n; j ++)
		{
			cout << ' ';
		}
		cout << '\\';
		cout << endl;
	}
	for (int i = 0; i < 2*n; i++)
	{
		cout << '-';
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << '|';
		for (int j = 0; j < 2*n-2; j++)
		{
			cout << ' ';
		}
		cout << '|';
		cout << endl;
	}
	for (int j = 0; j < 2 * n; j++)
	{
		cout << '=';
	}
	task 7

	 int num1, num2,sumOfEven,sumOfOdd, productOfEven, producOfOdd;
	 cin >> num1 >> num2;
	 for (int i = num1; i < num2; i++)
	 {
		 int number = i;
		 productOfEven = 1;
		 sumOfEven = 0;
		 producOfOdd = 1;
		 sumOfOdd = 0;
		 for (int j = 0; j < 6; j++)
		 {
			 if (j % 2 == 0)
			 {
				 productOfEven *= number % 10;
				 sumOfEven += number % 10;
			 }
			 else
			 {
				 producOfOdd *= number % 10;
				 sumOfOdd += number % 10;
			 }
			 number /= 10;
		 }
		 if (sumOfOdd == sumOfEven&&producOfOdd==productOfEven)
		 {
			 cout << i << " ";
		 }
	 }

	 */

//task 8
double x, y;
cin >> x >> y;
bool isInCircle = ((x + 1) * (x + 1) + (y - 1) * (y - 1) < 1);  // Compare radius of circle with distance of its center from given point 
bool isAboveLine = y > -x - 1;
bool isUnderLine = y < -1 / 3 * x - 1;
cout << isInCircle&&isAboveLine&& isUnderLine;

return 0;
}



