#include<iostream>
using namespace std;

int main(){

    int n=5;
    int &c = n;
    int &d = n;
    cout<<"n = "<<n<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
}