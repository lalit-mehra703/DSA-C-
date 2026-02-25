#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "cat";
    string str2 = "dog";
    cout<<(str1 == str2)<<endl; //false -> 0
    cout<<(str1 > str2)<<endl; // false-> 0
    cout<<(str1 < str2) <<endl;  //ture ->1
    return 0;
}