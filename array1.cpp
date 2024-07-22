#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5] = {11,12,13,14,15};
    int size = 5;
    printArray(arr,size);

//     int arr[5];
//     int n = 5;
    
//     for(int i=0;i<n;i++){
//         cout<<"Enter the value of arr for indexing no."<<i<<endl;
//         cin>>arr[i];
//     }
//     cout<<"Print Array"<<endl;

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
}