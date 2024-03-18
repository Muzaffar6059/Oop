#include<iostream>
#include<iostream>
using namespace std;

bool checkMat(int** arr, int size) {
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i==j)
			{
				sum1 = sum1 + arr[i][j];
			}
			if (i+j == size-1)
			{
				sum2 = sum2 + arr[i][j];
			}
		}
	}
	if (sum1== sum2)
	{
		return true;
	}	
	else
	{
		return false;
	}
}

int main() {

	int size;
	do
	{
		cout << "Enter the size of an array: " << endl;
		cin >> size;
	} while (size<0 || size>10);
	int** mat = new int* [size];
	for (int i = 0; i < size; i++)
	{
		mat[i] = new int[size];
		for (int j = 0; j < size; j++)
		{
			cin >> mat[i][j];
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}


	if (checkMat(mat, size))
	{
		cout << "Yes The diagonals sum is same:" << endl;
	}
	else
	{
		cout << "No diagonals have differnt sum:" << endl;
	}

	for (int i = 0; i < size; i++)
	{
		delete [] mat[i];
	}
	delete[] mat;

	return 0;
}