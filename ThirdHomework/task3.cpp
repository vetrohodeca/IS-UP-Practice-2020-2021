#include<iostream>
#include<cstring>
using namespace std;
const int MAXSIZE = 1024;
char* makeNames(char* firstNames, char* lastNames)
{
	char result[MAXSIZE];
	int i = 0;
	int j = 0;
	int t = 0;
	while (i < strlen(firstNames) && j < strlen(lastNames))
	{
		while (firstNames[i] != ' '&&firstNames[i]!='\0')
		{
			result[t] = firstNames[i];
			t++;
			i++;
		}
		result[t] = ' ';
		t++;

		while (lastNames[j] != ' '&&result[j]!='\0')
		{
			result[t] = lastNames[j];
			t++;
			j++;
		}
		result[t] = ' ';
		t++;
		i++;
		j++;
	}
	result[t] = '\0';
	return result;
}
int main()
{
	char firstNames[MAXSIZE];
	char lastNames[MAXSIZE];
	char* result;
	cin.getline(firstNames,1024);
	cin.getline(lastNames,1024 );
	result = makeNames(firstNames, lastNames);
	cout << result;
	return 0;
}
