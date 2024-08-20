#include <iostream>
#include <string.h>
using namespace std;

void convertToUpperCase(char ch[], int len)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 'a' + 'A';
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

    convertToUpperCase(ch, len);
    cout << "After " << ch << endl;
}