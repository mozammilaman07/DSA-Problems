#include<iostream>
using namespace std;

void printTable(int num){
    
    int table;

    for(int i=1;i<=10;i++){
        table = num * i ;
        
        cout<<num<<" X "<<i<<"= " <<table<<endl;
    }
};


int main(){
    
    printTable(9);

}