#include<iostream>
using namespace std;

void printArray(int arr[3][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){

    int arr[3][3];
    int row = 3;
    int col = 3;

    cout<<"Enter the value of array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    printArray(arr,row,col);

}




// #include<iostream>
// using namespace std;

// void printArray(int arr[3][4],int row,int col){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// void printbyColumn(int arr[3][4],int row ,int col){
//     cout<<"Printing by column"<<endl;
//     for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){

//     int arr[3][4]={
//         {10,20,30,04},
//         {11,12,13,14},
//         {40,50,60,70}
//     };
//     int row =3;
//     int col=4;
     
//      printArray(arr,row,col);
//      printbyColumn(arr,row,col);
// }