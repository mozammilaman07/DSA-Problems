#include<iostream>
using namespace std;

void sortColor(int arr[],int size){
    int i=0;
    int left=0;
    int right=size-1;

    while(i <= right){
        cout<<"No. of times loop chala "<<i<<endl;
        if(arr[i]==0){
            swap(arr[i],arr[left]);
            left++;
            i++;
        }
        else if(arr[i]==2){
            swap(arr[i],arr[right]);
            right--;
        }
        else{
            i++;
        }
    }
}

int main(){

    int arr[]={2,0,1};
    int size =3;

    sortColor(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}