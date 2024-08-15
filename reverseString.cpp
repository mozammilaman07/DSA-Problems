#include <iostream>
#include <string.h>
using namespace std;

void reverseString(char ch[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main()
{
    char ch[20];
    cin.getline(ch, 20);
    cout << "Before reverse " << ch << endl;

    int length = strlen(ch);

    reverseString(ch, length);

    cout << "After " << ch << endl;
}