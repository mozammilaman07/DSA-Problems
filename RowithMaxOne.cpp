#include<iostream>
using namespace std;

void rowithMaxOne(int arr[4][4],int row,int col){
    int count=-2;
    int name;
    for(int i=0;i<row;i++){
        int countOne=0;
        for(int j=0;j<col;j++){
            if(arr[i][j]==1){
                countOne++;
            }
       
        }
            
            if(countOne>=count){
                count = countOne;
                name = i;
            }
        
    }
    cout<<count<<endl;
    cout<<name<<endl;
}

int main(){
    int arr[4][4]={
        {0,0,1,0},
        {1,0,0,1},
        {1,0,1,1},
        {0,0,1,0},
    };
    int row = 4;
    int col =4;

    rowithMaxOne(arr,row,col);
}