#include<iostream>
using namespace std;
int main()
{
	char arr[100];
	int n;
	cin>>n;
	cin>>arr;
    int positionOfStudent;
    int leftObstacles=0, rightObstacles=0,minObstacles;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]=='S')
	 	{
	 		positionOfStudent=i;	
		}
	 }
	 for(int i = positionOfStudent;arr[i]!='\0';i++ )
	 {
	 	if(arr[i]=='#')
	 	{
	 		rightObstacles++;
		}
	 }
	 for(int i=positionOfStudent;i>=0;i--)
	 {
	 	if(arr[i]=='#')
	 	{
	 		leftObstacles++;
		}
	 }
	 if(leftObstacles<rightObstacles)
	 {
	 	minObstacles=leftObstacles;
	 }
	 else
	 {
	 	minObstacles=rightObstacles;
	 }
	 cout<<"Min number of obstacles you needs to blow is: "<<minObstacles;
	return 0;
}
