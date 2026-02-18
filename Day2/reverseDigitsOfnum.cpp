#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Enter your number : ";
    cin>>num;
    int reverseNum = 0;
    int pow = 10;
    while(num > 0){
        int rem = num % 10;
        reverseNum = (reverseNum*pow) + rem;
        num /= 10;
    }
    cout<<"reverseNum : "<<reverseNum<<endl;
    return 0;
}