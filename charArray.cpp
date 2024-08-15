#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char ch[20];
    cin.getline(ch, 20);

    cout << "Printing the char array : " << ch << endl;
    cout << "Printing the char array length : " << strlen(ch) << endl;
}

// #include <iostream>
// #include <string.h>
// using namespace std;

// int findLength(char ch[], int size)
// {
//     // Using while loop

//     int len = 0;
//     int index = 0;
//     while (ch[index] != '\0')
//     {
//         len++;
//         index++
//     }
//     return len;

//     // Using for loop
//     // int length = 0;
//     // for (int i = 0; i < size; i++)
//     // {
//     //     if (ch[i] == '\0')
//     //     {
//     //         break;
//     //     }
//     //     else
//     //     {
//     //         length++;
//     //     }
//     // }
//     // return length;
// }

// int main()
// {
//     char ch[20];
//     // cin >> ch;
//     cin.getline(ch, 20);
//     int length = findLength(ch, 20);
//     cout << "Printing the char array : " << ch << endl;

//     cout << "size of string by functon : " << length << endl;
//     // cout << "size of string : " << strlen(ch) << endl;

//     //     for (int i = 0; i < 15; i++)
//     //     {
//     //         cout << "at index : " << i << " " << ch[i] << endl;
//     //     }
// }