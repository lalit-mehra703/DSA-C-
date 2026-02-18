#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int sum = 0;
    while(num>0){
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    cout<<"sum : "<<sum ;
    return 0;
}