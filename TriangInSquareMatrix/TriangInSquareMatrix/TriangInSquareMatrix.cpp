#include <iostream>
using namespace std;

void SqrtMatrixTri1(int arr[][4], int row, int col) {
    /*
    This function Print The Triangles form in the square matrix like
    1 2 3   1 ,2 ,3 ,4
    4 5     5 ,6 ,7
    7       9 ,10
            13
*/
    for (int i = 0; i < row; i++)
    {
        int a = 0;
        for (int j = row; j > i; j--)
        {
            cout << arr[i][a] << " ";
            a++;
        }
        cout << endl;
    }
}
void SqrtMatrixTri2(int arr[][4], int row, int col) {
    /*
    This function Print The Triangles form in the square matrix like
    1       1
    4 5     5  6
    7 8 9   9  10 11
            13 14 15 16
*/
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j || i>j)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}
void SqrtMatrixTri3(int arr[][4], int row, int col) {
    /*
    This function Print The Triangles form in the square matrix like
    1       1
    4 5     5  6
    7 8 9   9  10 11
            13 14 15 16
*/
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j || i<j)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    const int row = 4;
    const int col = 4;
    int arr[row][col] = { { 1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };

    //SqrtMatrixTri1(arr, row, col);
    //SqrtMatrixTri2(arr, row, col);
    SqrtMatrixTri3(arr, row, col);

    return 0;
}
