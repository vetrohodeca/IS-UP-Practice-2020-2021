#include<iostream>
using namespace std;
void printChristmasTree(int n)
{
	for(int i=0;i<=n;i++)
	{
		cout<<" ";
	}	
	cout<<"|"<<endl;
	for(int i=0;i<n;i++)
	{	
		for(int j=n;j>i;j--)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"|";
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
int main()
{
	printChristmasTree(4);
	return 0;
}
