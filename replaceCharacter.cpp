#include <iostream>
#include <string.h>
using namespace std;

void replaceCharacter(char ch[], int size)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        char curr = ch[i];
        if (curr == '@')
        {
            curr = ' ';
        }
        i++;
    }
}

int main()
{
    char ch[50];
    int size = 50;
    cin.getline(ch, size);
    cout << "before " << ch << endl;
    replaceCharacter(ch, size);
    cout << "after " << ch << endl;
}