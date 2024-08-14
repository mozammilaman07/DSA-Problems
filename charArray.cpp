#include <iostream>
using namespace std;

int main()
{
    char ch[15];
    cin >> ch;
    cout << "Printing the char array : " << ch;

    for (int i = 0; i < 15; i++)
    {
        cout << "at index : " << i << " " << ch[i] << endl;
    }
}