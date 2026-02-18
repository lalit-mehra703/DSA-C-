#include<iostream>
using namespace std;

int sum(int a , int b){
    cout<<(a+b)<<endl;
    return a+b;
}

int sum(double a, double b){
    cout<<(a+b)<<endl;
    return a+b;
}



int main(){
    sum(3,7);
    sum(12,15);
    sum(3.0,3.5);
    return 0;
}