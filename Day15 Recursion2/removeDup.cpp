#include <iostream>
using namespace std;

void removeDup(string str,int i ,string ans ,bool isDuplicate[]){
    if(i == str.length()){
        cout<<ans<<endl;
    }

    char ch = str[i];
    int idx = ch - 'a';
    if(isDuplicate[idx] == true){
        removeDup(str, i+1, ans, isDuplicate);
    }else{
        isDuplicate[idx] = true;
        removeDup(str, i+1, ans+str[i], isDuplicate);
    }
}

int main(){
    string str = "myyynaaammmeeee";
    bool isDuplicate[26] = {false};
    string ans = "";
    removeDup(str, 0 , ans , isDuplicate);
    return 0;
}