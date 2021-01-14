#include<iostream>
using namespace std;
const int MAXSIZE=128;
void sort(int arr[MAXSIZE], int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=i;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void helpSanta(int numberOfHouses, int chimney[MAXSIZE],double chest, int& houses, int& food )
{
	sort(chimney, numberOfHouses);
	for(int i=0;i<numberOfHouses;i++)
	{
		if(chimney[i]*2<chest )
		{
			food=houses*20;
			return;
		}
		else 
		{
			houses++;
			chest+=0.5;
		}
	}
	food=houses*20;
}
int main()
{
	int numberOfHouses;
	int chimney[MAXSIZE];
	double chest;
	int houses, food=0;
	cin>>numberOfHouses;
	for(int i=0;i<numberOfHouses;i++)
	{
		cin>>chimney[i];	
	}
	cin>>chest;
	helpSanta(numberOfHouses,chimney,chest,houses,food);;
	cout<<houses<<"  "<<food;
	return 0;
}
