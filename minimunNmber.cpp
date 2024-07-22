#include<iostream>
#include<limits.h>
using namespace std;

    int minimumInArray(int arr[],int size){
        int minNum = INT_MAX;

        for(int i=0;i<size;i++){
            if(arr[i]<minNum){
                minNum = arr[i];
            }
        }
        return minNum;
    }

int main(){

    int arr[8] = {150,10,65,42,02,48,64,102};
    int size = 8;

   int minAns = minimumInArray(arr,size);
   
   cout<<"The minimum number in the array is: "<<minAns<<endl;
}