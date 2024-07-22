#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[5] = {10,20,30,40,50};
    int size = 5;
    int target = 31;

    bool ans = linearSearch(arr,size,target);
    
    if(ans == 1){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }

    // bool flag = 0;
    // for(int i=0;i<n;i++){

    //     if(arr[i]==target){
    //         flag = 1;
    //         break;
    //     }
    // }

    // if(flag==1){
    //     cout<<"Target found"<<endl;
    // }
    // else{
    //     cout<<"Target not found"<<endl;
    // }

}