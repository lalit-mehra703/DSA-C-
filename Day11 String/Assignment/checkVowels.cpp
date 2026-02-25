#include<iostream>
#include<string>
using namespace std;

int checkVowels(string str){
    int count = 0;
    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
}

int main(){
    string str1;
    cout<<"Enter your string : ";
    getline(cin,str1);

    cout<<checkVowels(str1);

    
    return 0;
}