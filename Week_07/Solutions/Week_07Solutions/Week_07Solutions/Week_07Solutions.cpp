#define MAXSIZE 50
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	//1 task selection
   /* int n;
	int arr[MAXSIZE];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
	}*/
	// 1task buble
	 /* int n;
	  int arr[MAXSIZE];
	  cin >> n;
	  for (int i = 0; i < n; i++)
	  {
		  cin >> arr[i];
	  }
	  for (int i = 0; i < n - 1; i++)
	  {
		  for (int j = 0; j < n-i-1; j++)
		  {
			  if (arr[j] > arr[j+1])
			  {
				  int temp = arr[j+1];
				  arr[j+1] = arr[j];
				  arr[j] = temp;
			  }
		  }
	  }
	  for (int i = 0; i < n; i++)
	  {
		  cout << arr[i] << " ";
	  }*/

	  //2 task
	  /*int matrix[MAXSIZE][MAXSIZE];
	  int n,sum=0;
	  cin >> n;
	  for (int i = 0; i < n; i++)
	  {
		  for (int j = 0; j < n; j++)
		  {
			  cin >> matrix[i][j];
		  }
	  }
	  for (int i = 0; i < n; i++)
	  {
		  for (int j = 0; j < n; j++)
		  {
			  sum += matrix[i][j];
		  }
	  }
	  cout << "Sum of matrix elements : " << sum << " average  of matrix elements :" << setprecision(2)<< sum*1.0 / (n * n);*/
	  //task3
	  /*int minElemnent = INT32_MAX;
	  int maxElement = INT32_MIN;
	  int matrix[MAXSIZE][MAXSIZE];
	  int n, sum = 0;
	  cin >> n;
	  for (int i = 0; i < n; i++)
	  {
		  for (int j = 0; j < n; j++)
		  {
			  cin >> matrix[i][j];
		  }
	  }
	  for (int i = 0; i < n; i++)
	  {
		  for (int j = 0; j < n; j++)
		  {
			  if (matrix[i][j]<minElemnent)
			  {
				  minElemnent = matrix[i][j];
			  }
			  if (matrix[i][j] > maxElement)
			  {
				  maxElement = matrix[i][j];
			  }
		  }
	  }
	  cout << "Min: " << minElemnent << " Max:" << maxElement;*/

	  //task 4

	  /*bool diagonal = true;
	  bool underDiagonal = true;
	  bool overDiagonal = true;
	  int matrix[MAXSIZE][MAXSIZE];
	  int n, sum = 0;
	  cin >> n;
	  for (int i = 0; i < n; i++)
	  {
		  for (int j = 0; j < n; j++)
		  {
			  cin >> matrix[i][j];
		  }
	  }
	  for (int i = 0; i < n; i++)
	  {
		  for (int j = 0; j < n; j++)
		  {
			  if (i == j)
			  {
				  if (matrix[i][j] % 3 != 0)
				  {
					  diagonal = false;
				  }
			  }
			  if (i > j)
			  {
				  if (matrix[i][j] % 2 != 0)
				  {
					  underDiagonal = false;
				  }
			  }
			  if (i < j)
			  {
				  if (matrix[i][j] % 4 != 0)
				  {
					  underDiagonal = false;
				  }
			  }
		  }
	  }
	  if (diagonal && overDiagonal && underDiagonal)
	  {
		  for (int i = 0; i < n; i++)
		  {
			  for (int j = 0; j < n; j++)
			  {
				  if (i == j)
				  {
					  sum += matrix[i][j] / 3;
				  }
				  if (i > j)
				  {
					  sum+=matrix[i][j]/2;
				  }
				  if (i < j)
				  {
					  sum += matrix[i][j] / 4;
				  }
			  }
		  }
		  cout << sum;
	  }
	  else
	  {
		  cout << "Elements does not meet the requirements.";
	  }*/
	  // task 5

	  /*int matrix[MAXSIZE][MAXSIZE];
	  int n;
	  cin >> n;
	  for (int i = 0; i < n; i++)
	  {
		  for (int j = 0; j < n; j++)
		  {
			  cin >> matrix[i][j];
		  }
	  }
	  for (int k = 0; k < n; k++)
	  {
		  int i = -1;
		  do
			  i++;
		  while (matrix[i][k] == matrix[k][i] && i < n - 1);
		  if (matrix[i][k] == matrix[k][i])
		  cout << k;
	  }*/
	  //task 6
	int matrix[MAXSIZE][MAXSIZE];
	int rows, cols;
	cin >> rows>>cols;
	int countOfEqualDigits = 0;
	for (int i = 0; i <rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < rows - 1; i++)
	{
		for (int j = i + 1; j < rows; j++)
		{
			countOfEqualDigits = 0;
			for (int k = 0; k < cols; k++)
			{
				for (int s = 0; s < cols; s++)
				{
					if (matrix[i][k] == matrix[j][s])
					{
						countOfEqualDigits++;
					}
				}
				if (countOfEqualDigits == cols)
				{
					cout << boolalpha << true<<endl;
					return 0;
				}

			}
		}
	}
	cout << boolalpha<<false<<endl;

	return 0;
}

