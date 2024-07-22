#include<iostream>
using namespace std;

// void rightShift(int arr[],int size){
//     int temp = arr[size-1];
    
//     for(int i=size-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0] = temp;
// }


void leftShift(int arr[],int size){
    int temp = arr[0];
    for(int i=0;i<size;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
}

void rightShiftByTwo(int arr[],int size){

    int temp1=arr[size-1];
    int temp2=arr[size-2];

    for(int i=size-1;i>=2;i--){
       
        arr[i]=arr[i-2];
    }

    arr[0]=temp2;
    arr[1]=temp1;

}

int main(){

    int arr[]={10,20,30,40,50,60};
    int size =6;

    // rightShift(arr,size);
    // leftShift(arr,size);
    rightShiftByTwo(arr,size);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}