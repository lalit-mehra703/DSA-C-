#include<iostream>
using namespace std;

int binToDecimal(int binNum ){
    int n = binNum;
    int ans = 0;
    int pow = 1;
    while( n > 0 ){
        int rem = n % 10 ;
        ans += rem*pow;
        n /= 10;
        pow *= 2;

    }
    return ans;
}

int main(){
    cout<<binToDecimal(1010);
    return 0;
}