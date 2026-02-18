#include<iostream>
using namespace std;

int main(){
    int income;
    cout<<"Enter your income : ";
    cin>>income;

    if(income>=1000000){
        cout<<"30 % ";
    }else if(income>=500000){
        cout<<"20 %";
    }else{
        cout<<"0 %";
    }
    return 0;
}