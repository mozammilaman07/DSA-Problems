#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ch[20];
    // cin >> ch;
    cin.getline(ch, 20);
    cout << "Printing the char array : " << ch << endl;
    cout << "size of string : " << strlen(ch) << endl;

    //     for (int i = 0; i < 15; i++)
    //     {
    //         cout << "at index : " << i << " " << ch[i] << endl;
    //     }
}