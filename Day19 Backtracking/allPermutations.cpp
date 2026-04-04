#include<iostream>
using namespace std;

void allPermutations(string str, string ans){
    int n = str.length();
    if(n == 0){
        cout<<ans<<"\n";
        return ;
    }

    for(int i = 0 ; i < n ; i++){
        char ch= str[i];
        string remainingStr = str.substr(0,i) + str.substr(i+1, n-i-1);
        allPermutations(remainingStr, ans + ch);
    }
}

int main(){
    string str = "abc";
    string ans = "";
    allPermutations(str, ans);
    return 0;
}