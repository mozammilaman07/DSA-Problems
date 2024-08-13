#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void takeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int arr[6];
    int n = 6;
    takeArray(arr, n);
    printArray(arr, n);
}