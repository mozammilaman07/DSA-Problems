#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int>arr,int size,int k){
    cout<<"Calling function"<<endl;
    vector<int>ans(size);

    for(int i=0;i<size;i++){
        int j = (i + k) % size;
        ans[j]= arr[i]; 
    }
    // arr=ans;
}

int main(){

    vector<int>arr ={10,20,30,40,50,60};
    int size=arr.size();
    int k=3;
    rotateArray(arr,size,k);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}