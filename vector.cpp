#include<iostream>
#include<vector>
using namespace std;


void printVector(vector<int>arr){
    int size=arr.size();

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    vector<int>arr;
    
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int d;
        cin>>d;
        arr.push_back(d);

    }


    printVector(arr);
    
}