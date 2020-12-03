#include<iostream>
#include<cmath>
//пояснения по решаването на задачата- разделям обхождането на матрицата на рамки, като алгоритъмът за тях е един и същ, 
//разликата е в големината, която всяка итерация намяля с 2 и индексите, които всяка итерация се увеличават с 1.
using namespace std;
int arr[50][50];
int main()
{
	int n;
	cin>>n;
	double size=sqrt(n);
	int counter=1;
	size=ceil(size);
	int displacement=0;
	int sizeI=(int)size;
	while(sizeI>0)
	{
		for(int j=0;j<sizeI;j++)//top rows
		{
			arr[displacement][j+displacement]=counter;
			if(counter==n)
			{
				sizeI=0;
				break;
			}
			counter++;
		}
		for(int i=1;i<sizeI;i++)//right cols
		{
			arr[i+displacement][sizeI-1+displacement]=counter;
			if(counter==n)
			{
				sizeI=0;
				break;
			}
			counter++;
		}
		for(int j=sizeI-2;j>=0;j--)//down rows
		{
			arr[sizeI-1+displacement][j+displacement]=counter;
			if(counter==n)
			{
				sizeI=0;
				break;
			}
			counter++;
		}
		for(int i=sizeI-2;i>=1;i--)//left cols
		{
			arr[i+displacement][displacement]=counter;
			if(counter==n)
			{
				sizeI=0;
				break;
			}
			counter++;
		}
		displacement+=1;
		sizeI-=2;
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr[i][j]==0)
			{
				cout<<"   ";
			}
			else if(arr[i][j]<=9)
			{
				cout<<' '<<arr[i][j]<<' ';
			}
			else 
			{
				cout<<arr[i][j]<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}
