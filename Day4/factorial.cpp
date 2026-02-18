#include<iostream>
using namespace std;


int fact(int n ){
    int ans = 1;
    if(n == 0 || n == 1){
        return 1;
    }
    for(int i = n ;i>=1 ; i--){
        ans *= i;
    }
    return ans;
}

int main(){
    cout<<fact(5);
    return 0;
}