#include <iostream>
#include <string.h>
using namespace std;

void replaceChar(char ch[], int len)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] == '@')
        {
            ch[i] = ' ';
        }
        i++;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);
    cout << "Before " << ch << endl;

    int len = strlen(ch);
    replaceChar(ch, len);
    cout << "After " << ch << endl;
}