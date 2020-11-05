#include <iostream>
using namespace std;

int main()
{
	/*
	task1

	int x,y;
	cin >> x>>y;
	cout <<(bool) (x > y);

	task2
	int x;
	cin >> x;
	bool isEven = x % 2 == 0;
	cout << isEven;

	task3
	int x;
	cin >> x;
	cout << (bool)(x % 2 == 0 && x % 3 == 0 && x % 5 != 0);

	task4
	int x, y;
	cin >> x >> y;
	cout << (bool)(y == 2 * x + 5);

	task5
	int x;
	cin >> x;
	cout << (bool)(x % 10 == x / 1000 % 10 && x / 10 % 10 == x / 100 % 10);


	task6
	int x, y;
	cin >> x >> y;
	cout << (bool)(x * x + y * y <= 36);


	task7
	int x;
	cin >> x;
	cout << (bool)(x != 0 && !(x & (x - 1)));
	*/
 
	//task 8
	int a, b;
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << "  " << b;
	return 0;
}
