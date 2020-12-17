#include <iostream>
using namespace std;
const int MAXSIZE=100;
int len(const char str[MAXSIZE] )
{
    int counter = 0;
    while (str[counter] != '\0')
    {
        counter++;
    }
    return counter;
}
void smallLeters(char source[MAXSIZE], char* result)
{
    int i = 0, j=0;
    while (source[i] != '\0')
    {
        if (source[i] >= 'a' && source[i] <= 'z')
        {
            result[j] = source[i];
            j++;
        }
        i++;
        result[j] = '\0';// vajno
    }
}
void replaceSymbol(char* str, char oldSymbol, char newSymbol)
{
    for (int i = 0; i < len(str); i++)
    {
        if (str[i] == oldSymbol)
        {
            str[i] = newSymbol;
        }
    }
}

void removeSymbol(char* str, char symbol)
{
    int i = 0;
    int length = len(str);
    while (str[i] != '\0')
    {
        if (str[i] == symbol)
        {
            for (int j = i; j < length - 1; j++)
            {
                str[j] = str[j + 1];
            }
            str[length - 1] = '\0';
        }
        i++;
    }
}

bool isPalindrome(const char* str)// ako iskame da go podavame v konzolata
{
    int length = len(str);
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length -1 - i])
        {
            return false;
        }
    }
    return true;
}
char getFirstUniqueChar(const char* str)
{
    bool isUnique=true;
    int length = len(str);
    for (int i = 0; i < length-1; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (str[i] == str[j])
            {
                isUnique = false;
            }
        }
        if (isUnique == true)
        {
            return str[i];
        }
        isUnique = true;
    }
}
void swap(char& a, char& b)
{
    char temp = a;
    a=b;
    b = temp;
}
void reverseString(char* str)
{
    int length = len(str);
    for (int i = 0; i < length / 2; i++)
    {
        swap(str[i], str[length - 1 - i]);
    }
}
void concat(char* str1, char* str2, char* result)
{
    int len1 = len(str1);
    int len2 = len(str2);
    for (int i = 0; i < len1; i++)
    {
        result[i] = str1[i];
    }
    for (int i = len1; i < len1 + len2; i++)
    {
        result[i] = str2[i - len1];
    }
    result[len1 + len2 ] = '\0';
}
int main()
{
    char str[MAXSIZE] = "Gosho42";
    char str2[MAXSIZE] = "0";
    cout <<"Lennght: "<< len(str)<<endl;
    char result[MAXSIZE];
    smallLeters(str, result);
    cout << result << endl;
    replaceSymbol(str, 'o', 'u');
    cout << str<<endl;
    removeSymbol(str,'o');
    cout << str<<endl;
    cout<<boolalpha<<isPalindrome("abac")<<endl;
    concat(str, str2, result);
    cout << result<<endl;
    char strRev[MAXSIZE] = "stressed";
    reverseString(strRev);
    cout << strRev<<endl;
    char test[MAXSIZE] = "GG";
    cout << getFirstUniqueChar(strRev);
    return 0;
}
