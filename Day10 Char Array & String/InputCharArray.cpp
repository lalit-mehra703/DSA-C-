#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // char word[30]; 
    // cin>>word;  //My name is Lucky
    // cout<<"your word was : "<<word<<endl; //My

    char sentence[50];
    cin.getline(sentence,50);  // my name is lalit 
    cout<<"your word was : "<<sentence<<endl; //my name is lalit
    return 0;
}