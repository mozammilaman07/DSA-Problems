#include <iostream>
using namespace std;

void printArray(int arr[3][3], int col, int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90},
    };
    int col = 3;
    int row = 3;

    printArray(arr, col, row);
}