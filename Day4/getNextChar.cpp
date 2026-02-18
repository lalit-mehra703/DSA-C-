#include<iostream>

using namespace std;

char nextChar(char ch){
    if(ch == 'z'){
        return 'a';
    }
    return ch + 1;
    
}

int main(){
    cout<<nextChar('z');
    return 0;
}