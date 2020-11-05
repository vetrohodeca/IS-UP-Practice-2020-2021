// Tasks_Solutions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*1 task
    cout << "Hello, I`m Alex!";
    */

    /*2 task
    double BGN, EUR;
    cin >> BGN;
    EUR = BGN * 0.511292;
    cout << EUR;
    */

    /* 3 task
    double height, width, length,volume;
    cin >> length >> width >> height;
    volume = length * width * height;
    cout << volume;
    */

    /* 4 task
    double startMoney;
    int interest, period;
    cin >> startMoney >> interest >> period;
    double endMoney = startMoney +(startMoney * (double)interest/100 *(double) period / 12);
    cout << endMoney;
    */

    /* 5 task
    int number;
    cin >> number;
    cout << number % 10;
    number = number / 10;
    cout << number % 10;
    number = number / 10;
    cout << number % 10;
    number = number / 10;
    cout << number % 10;
    number = number / 10;
    return 0;
    */

    int a, b;
    cin >> a >> b;
    cout <<boolalpha<< !(a ^ b);
}
