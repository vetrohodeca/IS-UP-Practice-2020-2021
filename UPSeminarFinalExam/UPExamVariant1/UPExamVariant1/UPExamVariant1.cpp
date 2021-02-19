#include <iostream>
const int MAXSIZE = 20;
using namespace std;

void inputMatrix(int matrix[][MAXSIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void inpuBorderedMatrix(int matrix[][MAXSIZE], int borderedMatrix[][MAXSIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || j == 0 || i == size - 1 || j == size - 1)
            {
                borderedMatrix[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < size - 1; i++)
    {
        for (int j = 1; j < size - 1; j++)
        {
            borderedMatrix[i][j] = matrix[i - 1][j - 1];
        }
    }
}

//task1

//bool areEqualDiagonals(int matrix[][MAXSIZE], int size)
//{
//    int quadrantOneDiagonals = 0;
//    int miniSize = size / 2;
//    for (int i = 0; i < miniSize; i++) 
//    {
//        for (int j = miniSize + 1; j < size; j++)
//        {
//            if (i == j - miniSize - 1)
//            {
//                quadrantOneDiagonals += matrix[i][j];
//            }
//        }
//    }
//
//    int quadrantTwoDiagonals = 0;
//    for (int i = 0; i < miniSize; i++)
//    {
//        for (int j =0; j < miniSize; j++)
//        {
//            if (i == j )
//            {
//                quadrantTwoDiagonals += matrix[i][j];
//            }
//        }
//    }
//
//    int quadrantThreeDiagonals = 0;
//    for (int i = miniSize+1; i < size; i++)
//    {
//        for (int j = 0; j < miniSize; j++)
//        {
//            if (i == j+miniSize+1)
//            {
//                quadrantThreeDiagonals += matrix[i][j];
//            }
//        }
//    }
//
//    int quadrantFourDiagonals = 0;
//    for (int i = miniSize + 1; i < size; i++)
//    {
//        for (int j = miniSize + 1; j < size; j++)
//        {
//            if (i == j )
//            {
//                quadrantFourDiagonals += matrix[i][j];
//            }
//        }
//    }
//    bool areEqualDiagonals = quadrantFourDiagonals == quadrantThreeDiagonals &&
//                             quadrantThreeDiagonals == quadrantTwoDiagonals && 
//                             quadrantTwoDiagonals == quadrantOneDiagonals;
//    return areEqualDiagonals;
//}

//task3
struct coordinates
{
    int x;
    int y;
};

int maxOfFour(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > a && b > c && b > d)
    {
        return b;
    }
    else if (c > b && c > a && c > d)
    {
        return c;
    }
    else return d;
}

bool used[MAXSIZE][MAXSIZE];

void countOfMoovesToCoverSquare(coordinates currCoordinates, int matrix[MAXSIZE][MAXSIZE], int counter)
{
    if (matrix[currCoordinates.x][currCoordinates.y] == 0)
    {
        return;
    }
    else if (!used[currCoordinates.x][currCoordinates.y] || matrix[currCoordinates.x][currCoordinates.y] > counter)
    {
        matrix[currCoordinates.x][currCoordinates.y] = counter;

        used[currCoordinates.x][currCoordinates.y] = true;
        coordinates c1;
        c1.x = currCoordinates.x + 1;
        c1.y = currCoordinates.y;
        coordinates c2;
        c2.x = currCoordinates.x - 1;
        c2.y = currCoordinates.y;
        coordinates c3;
        c3.x = currCoordinates.x;
        c3.y = currCoordinates.y - 1;
        coordinates c4;
        c4.x = currCoordinates.x;
        c4.y = currCoordinates.y + 1;

        countOfMoovesToCoverSquare(c1, matrix, counter + 1);
        countOfMoovesToCoverSquare(c2, matrix, counter + 1);
        countOfMoovesToCoverSquare(c3, matrix, counter + 1);
        countOfMoovesToCoverSquare(c4, matrix, counter + 1);
    }
}

void fillUsedMatrix(int borderMatrix[][MAXSIZE], bool used[][MAXSIZE], int size)
{
    for (int i = 1; i < size + 2; i++)
    {
        for (int j = 0; j < size + 2; j++)
        {
            if (borderMatrix[i][j] == 1)
            {
                used[i][j] = false;
            }
            else {
                used[i][j] = true;
            }
        }
    }
}
int main()
{
    //task1
    /*int matrix[MAXSIZE][MAXSIZE];
    int size;
    do
    {
        cout << "Input size: ";
        cin >> size;
    } while (!(size > 3 && size % 2 == 1));
    inputMatrix(matrix, size);
    cout<<areEqualDiagonals(matrix, size)<<endl;
    */

    //task2
    /*
    int size;
    cin >> size;
    char* X = new char[size];
    char* N = new char[size];
    cin >> X >> N;
    cout << X << endl;;
    bool isCorrect = true;
    for (int i = 0; i < size-1; i++)
    {
        if (X[i]!=(char)(N[i]+49))
        {
            isCorrect= false;
        }
    }
    cout << isCorrect;
    delete[] X;
    delete[] N;*/

    //task3
    int size, x, y;
    int matrix[MAXSIZE][MAXSIZE];
    int borderMatrix[MAXSIZE][MAXSIZE];

    coordinates startCoordinates;
    cin >> size;
    cin >> x >> y;
    startCoordinates.x = x + 1;
    startCoordinates.y = y + 1;
    coordinates coordAre[MAXSIZE];
    inputMatrix(matrix, size);
    inpuBorderedMatrix(matrix, borderMatrix, size + 2); 
    fillUsedMatrix(borderMatrix, used, size);

    countOfMoovesToCoverSquare(startCoordinates, borderMatrix, 0);// replace matrix elements with step that they are fulfilled
    int max = borderMatrix[1][1];

    //iterate over matrix and find biggest number
    bool found = true;
    for (int i = 1; i < size + 2; i++)
    {
        for (int j = 1; j < size + 2; j++)
        {
            if (max < borderMatrix[i][j]) 
            {
                max = borderMatrix[i][j];
            }
            found = found && used[i][j];// if there is empty place
        }
    }
    
    if (!found) 
    {
        cout << -1 << endl;
        return 0;
    }

    cout << max << endl;
    return 0;
}