#include<iostream>
using namespace std;

int mul(int a , int b=2){
    return a*b;
}

void oddOrEven(int n){
    if(n%2 == 0){
        cout<<"Even ";
    }else{
        cout<<"Odd";
    }
}


int main(){
    cout<<mul(4)<<endl;
    oddOrEven(4);
    return 0;
}