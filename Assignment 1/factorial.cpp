#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;

    if(n<0){
        cout<<"the number is negative";
    }

    int fact = 1;
    while(n>=1){
        fact *= n;
        n--;
    }
    cout<<fact;
    return 0;
}