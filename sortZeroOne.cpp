#include<iostream>
using namespace std;

void sortZeroOne(int arr[],int size){
    int countZero =0;
    int countOne =0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            countZero++;
        }
        if(arr[i]==1){
            countOne++;
        }
    }
        int i;
        for(i=0;i<countZero;i++){
            arr[i]=0;
        }
        for(;i<size;i++){
            arr[i]=1;
        }
    
}
int main(){

    int arr[]={0,1,1,1,0,0,1,0,1};
    int size = 9;

    sortZeroOne(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}