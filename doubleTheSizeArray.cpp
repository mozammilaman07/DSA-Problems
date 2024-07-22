#include<iostream>
using namespace std;

int main(){

    int arr[10];
    int n = 10;
    for(int i=0;i<n;i++){
        cout<<"Enter the array for index"<<i<<" ";
        cin>>arr[i];
        cout<<endl;
       
    }
    cout<<"Printing the array"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"Printing after the double size"<<endl;

    for(int i=0;i<n;i++){
        arr[i] = 2 * arr[i];
        cout<<arr[i]<<" ";
    
    }
     

}