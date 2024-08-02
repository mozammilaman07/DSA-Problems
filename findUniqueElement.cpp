#include <iostream>
using namespace std;

int uniqueElement(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    int arr[9] = {
        1,
        5,
        4,
        1,
        10,
        4,
        10,
        7,
        7,
    };
    int size = 9;

    int answer = uniqueElement(arr, size);
    cout << "Th unique element is : " << answer << endl;
}