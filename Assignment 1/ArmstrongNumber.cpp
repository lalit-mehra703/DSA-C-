#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter your number : ";
    cin >> n;

    int result = n;
    int temp = n;
    int digits = 0;

    // Count digits
    while(temp > 0){
        digits++;
        temp /= 10;
    }

    int ans = 0;

    temp = n;
    while(temp > 0){
        int rem = temp % 10;
        ans += pow(rem, digits);
        temp /= 10;
    }

    if(ans == result){
        cout << "Yes, Armstrong number";
    } else {
        cout << "Not an Armstrong number";
    }

    return 0;
}
