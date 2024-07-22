#include<iostream>
using namespace std;

int main(){
    
    int arr[5];
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<"Enter the value of arr of index "<<i<<" ";
        cin>>arr[i];
    }
    int sum =0;
    for(int i=0;i<n;i++){
        
        sum = sum + arr[i];
        
    }
    cout<<"the sum of arr is: "<<sum<<endl;
}