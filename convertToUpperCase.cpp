#include <iostream>
using namespace std;

void convertToUpperCase(char ch[], int size)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        char currChar = ch[i];
        if (currChar >= 'a' && currChar <= 'z')
        {
            ch[i] = currChar - 'a' + 'A';
        }
        i++;
    }
}

int main()
{
    char ch[20];
    int size = 20;
    cin.getline(ch, 20);
    cout << "original : " << ch << endl;

    convertToUpperCase(ch, size);
    cout << "after converting " << ch << endl;
}