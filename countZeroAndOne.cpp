#include<iostream>
using namespace std;

void countZeroAndOne(int arr[],int size){
    int countZero=0;
    int countOne=0;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            countZero++;
        }
        if(arr[i]==1){
            countOne++;
        }
    }
    cout<<"Count Zero: "<<countZero<<endl;
    cout<<"Count One: "<<countOne<<endl;
}

int main(){

    int arr[11]={0,0,1,1,1,1,0,1,0,0,1};
    int size = 11;

    countZeroAndOne(arr,size);
}