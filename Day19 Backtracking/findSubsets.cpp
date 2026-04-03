#include<iostream>
using namespace std;

void allSubset(string str, int i, string ans){
    if(str.length() == i){
        cout<<ans<<endl;
        return;
    }
    allSubset(str, i+1,ans+str[i]);
    allSubset(str, i+1, ans);
}

int main(){
    string str = "abc";
    allSubset(str, 0, "");
    return 0;
}