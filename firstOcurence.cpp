#include<iostream>
using namespace std;

int findFirstOccurence(int arr[],int n,int target){
    int s =0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==target){
            ans = mid;
            e = mid -1;
        }
        else if(target > arr[mid]){
            s = mid +1;
        }
        else if(target < arr[mid]){
            e = mid -1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main(){
    int arr[]={10,30,30,30,30,40,50,60};
    int n=8;
    int target = 30;

    int answer = findFirstOccurence(arr,n,target);

    if(answer == -1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Target found at "<<answer<<endl;
    }
}