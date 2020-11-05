#include <iostream>
using namespace std;
int main()
{
	/*
	task1

	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		cout << a;
	}
	else if (b > a && b > c)
	{
		cout << b;
	}
	else
	{
		cout << c;
	}
	task2

	int a, b;
	cin >> a >> b;
	if (b % a == 0)
	{
		cout << boolalpha << 1;
	}
	task 3

	int number;
	cin >> number;
	switch (number)
	{
	case 1: cout << "monday"; break;
	case 2: cout << "tuesday"; break;
	case 3: cout << "wednesday"; break;
	case 4: cout << "thursday"; break;
	case 5: cout << "friday"; break;
	case 6: cout << "saturday"; break;
	case 7: cout << "sunday"; break;
	default:cout << "there is no such day!"; break;
	}

	task4
	int year;
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		cout << "Leap";
	}
	else
	{
		cout << "Not leap";
	}

	task5

	int number;
	cin >> number;
	int thirdDigit = number % 10;
	number /= 10;
	int secondDigit = number % 10;
	number /= 10;
	int firstDigit = number % 10;
	if (thirdDigit > secondDigit && secondDigit > firstDigit)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	task6
	int number;
	cin >> number;
	int digit1, digit2, digit3, digit4;
	digit4 = number % 10;
	number /= 10;
	digit3 = number % 10;
	number /= 10;
	digit2 = number % 10;
	number /= 10;
	digit1 = number % 10;
	if (digit1 + digit2 + digit3 + digit4 < 10)
	{
		cout << "false";
	}
	else
	{
		cout << "true";
	}
	task7

	char symbol;
	int digit1;
	int digit2;
	cin >> symbol >> digit1 >> digit2;
	if (symbol == '+')
	{
		cout << digit1 + digit2 << endl;
	}
	else if (symbol == '-')
	{
		cout << digit1 - digit2 << endl;
	}
	else if (symbol == '*')
	{
		cout << digit1 * digit2 << endl;
	}
	else if (symbol == '/')
	{
		cout << digit1 *1.0/ digit2 << endl;
	}
	else if (symbol == '%')
	{
		cout << digit1 % digit2;
	}
	else
	{
		cout << "Invalid operator";
	}

	task8

	double a, b, c;
	cin >> a >> b >> c;

	if (a == 0)
	{
		cout << "x1->" << -c / b << endl;
	}
	else
		if (b * b - 4 * a * c >= 0)
		{
			double D = sqrt(b * b - 4 * a * c);
			if (D != 0)
			{
				cout << "x1->" << (-b - D) / 2 * a << endl;
				cout << "x2->" << (-b + D) / 2 * a;
			}
			else cout << "x1,x2->" << b / 2 * a;
		}
		else
		{
			cout << "No solution!";
			return 0;
		}
		task9

		int number;
		cin>>number;
		switch (number)
		{
			case 1:
			cout<<"31"<<endl;break;
		case 2:
			cout<<"28"<<endl;break;
		case 3:
			cout<<"31"<<endl;break;
		case 4:
			cout<<"30"<<endl;break;
		case 5:
			cout<<"31"<<endl;break;
		case 6:
			cout<<"30"<<endl;break;
		case 7:
			cout<<"31"<<endl;break;
		case 8:
			cout<<"31"<<endl;break;
		case 9:
			cout<<"30"<<endl;break;
		case 10:
			cout<<"31"<<endl;break;
		case 11:
			cout<<"30"<<endl;break;
		case 12:
			cout<<"31"<<endl;break;
		default:
			cout<<"There is no such month"<<endl;
		}

		task10
		int number;
		cin>>number;
		switch (number)
		{
			case 1:
			cout<<"winter"<<endl;break;
		case 2:
			cout<<"winter"<<endl;break;
		case 3:
			cout<<"winter"<<endl;break;
		case 4:
			cout<<"spring"<<endl;break;
		case 5:
			cout<<"spring"<<endl;break;
		case 6:
			cout<<"spring"<<endl;break;
		case 7:
			cout<<"summer"<<endl;break;
		case 8:
			cout<<"summer"<<endl;break;
		case 9:
			cout<<"summer"<<endl;break;
		case 10:
			cout<<"winter"<<endl;break;
		case 11:
			cout<<"winter"<<endl;break;
		case 12:
			cout<<"winter"<<endl;break;
		default:
			cout<<"There is no such month"<<endl;
		}


	task11
	char c;
	cin >> c;
	if (c > '0' && c < '9')
	{
		cout << c << " is a digit.";
	}
	if (c >= 'a' && c <= 'z')
	{
		cout << c << " is a lowercase letter";
	}
	if (c >= 'A' && c <= 'Z')
	{
		cout << c << " is a uppercace letter";
	}

	task12
		*/
	char c;
	cin >> c;
	if (c > '0' && c < '9')
	{
		int d = c- '0';
		cout << d * d;
	}
	if (c >= 'a' && c <= 'z')
	{
		cout <<(char) (c - ' ');
	}
	if (c >= 'A' && c <= 'Z')
	{
		cout << (char)(c + ' ');
	}

	/*
		task13

		int month;
		int day;
		cin >> day >> month;
		int remeaningDays;
		if (day <= 0 || day > 31)
		{
			cout << "There is no such day";
			return 0;
		}
		if (month <= 0 || month > 12)
		{
			cout << "There is no such month";
			return 0;
		}
		int daysInMonth;
		switch (month)
		{
		case 1:
			remeaningDays = 335;
			daysInMonth = 31; break;

		case 2:
			daysInMonth = 29;
			remeaningDays = 306; break;
		case 3:
			daysInMonth = 31;
			remeaningDays = 275; break;
		case 4:
			remeaningDays = 245;
			daysInMonth = 30; break;
		case 5:
			remeaningDays = 214;
			daysInMonth = 31; break;
		case 6:
			remeaningDays = 183;
			daysInMonth = 30; break;
		case 7:
			remeaningDays = 153;
			daysInMonth = 31; break;
		case 8:
			remeaningDays = 122;
			daysInMonth = 31; break;
		case 9:
			remeaningDays = 92;
			daysInMonth = 30; break;
		case 10:
			remeaningDays = 61;
			daysInMonth = 31; break;
		case 11:
			daysInMonth = 30;
			remeaningDays = 31; break;
		case 12:
			remeaningDays = 0;
			daysInMonth = 31; break;
		}
		remeaningDays += daysInMonth - day;
		cout << remeaningDays << endl;
		*/
	return 0;
}
