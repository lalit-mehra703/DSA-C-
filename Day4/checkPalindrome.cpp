#include<iostream>
using namespace std;

int reverse(int n){
    int ans = 0;
    while (n > 0 ){
        int rem = n % 10;
        ans = ans*10 +rem;
        n /= 10;
    }
    cout<<ans;
    return ans;
}

void isPalindrome(int n){
    int revNum = reverse(n);
    if(revNum == n){
        cout<<"Palindrome number";
    }else{
        cout<<"not a Palindrome number";
    }
}

int main(){
    isPalindrome(121);
    return 0;
}