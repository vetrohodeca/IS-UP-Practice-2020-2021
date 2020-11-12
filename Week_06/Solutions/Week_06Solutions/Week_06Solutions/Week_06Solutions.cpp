#include <iostream>
const int MAXSIZE = 50;
const int MAXINTVALYE = 2147483647;
using namespace std;
int main()
{

	//task1 
	/*int n;
	cin >> n;
	int arr[MAXSIZE];
	if (n > 50)
	{
		cout << "Invalid input";
	}
	else
	{
		for (int i = 0; i < n; i++)
	   {
			cin >> arr[i];
		}
		int maxValue = INT32_MIN;
		int minValue = INT32_MAX;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < minValue)
			{
				minValue = arr[i];
			}
			if (arr[i] > maxValue)
			{
				maxValue = arr[i];
			}
		}
		int secondMinValue = INT32_MAX;
		int secondMaxValue = INT32_MIN;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < secondMinValue && arr[i] != minValue)
			{
				secondMinValue = arr[i];
			}
			if (arr[i] > secondMaxValue && arr[i] != maxValue)
			{
				secondMaxValue = arr[i];
			}
		}
		cout << minValue << " " << maxValue<<endl;
		cout << secondMinValue << " " << secondMaxValue;
	}

	task 2

	int n;
	cin >> n;
	int arr[MAXSIZE];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	bool isUnique = true;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				isUnique = false;
			}
		}
	}
	cout << boolalpha << isUnique;

	task 3
	int n, number;
	cin >> n;
	int counter = 0;
	int arr[MAXSIZE];
	int indexes[MAXSIZE];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> number;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == number)
		{
			indexes[counter] = i;
			counter++;
		}
	}
	if (counter == 0)
	{
		cout << number << " is present 0 times in the array";
	}
	else
	{
		cout << number << " is present " << counter << " times in the array at  positions: ";
		for (int i = 0; i < counter-1; i++)// for comma
		{
			cout << indexes[i] << ", ";
		}
		cout << indexes[counter - 1];
	}
	task 4

	int n;
	cin >> n;
	double average;
	int sum=0;
	double difference = INT32_MAX;
	int closest=0;
	int arr[50];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	average = sum * 1.0 / n;
	for (int i = 0; i < n; i++)
	{
		if (abs(arr[i] - average) * 1.0 < difference * 1.0)
		{
			closest = arr[i];
			difference = abs(average - arr[i]);
		}
		if (abs(arr[i] - average) * 1.0 == difference * 1.0 && closest > arr[i])
		{
			closest = arr[i];
		}
	}
	cout << endl<< closest;
	*/
	int arr[MAXSIZE];
	int n;
	cin >> n;
	bool isMirror = true;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0, j = n - 1; i<n / 2 - 1, j>n / 2 - 1; i++, j--)
	{
		if (arr[i] != arr[j])
		{
			isMirror = false;
			break;
		}
	}
	cout << boolalpha << isMirror << endl;
	return 0;
}
