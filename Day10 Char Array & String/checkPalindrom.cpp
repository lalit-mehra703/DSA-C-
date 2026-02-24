#include<iostream>
#include <cstring>
using namespace std;


bool isPalindrom(char *word){
    int n = strlen(word);
    cout<<n<<endl;
    int st = 0, end = n-1;
    while(st < end){
        if(word[st] != word[end]){
            cout<<"Not palindrem\n";
            return false;
        }
        st++,end--;
    }
    cout<<"valid palindrome";
    return true;
}

int main(){
    char word[] = "racecar";
    isPalindrom(word);
    return 0;
}