#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ch[20];
    cin.getline(ch, 20);
    cout << "Before reverse " << ch << endl;

    int length = strlen(ch);
    cout << "Length " << length << endl;
}