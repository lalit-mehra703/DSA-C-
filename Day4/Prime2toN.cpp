#include<iostream>
#include<cmath>
using namespace std;


bool isPrime(int n ){
    if(n == 1){
        return 1;
    }

    for(int i = 2;i<=sqrt(n);i++){
        if(n % i  == 0){
            return false;
        }
    }
    return true;
}

void printPrime(int n ){
    for(int i = 2; i<= n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    printPrime(50);
    return 0;
}