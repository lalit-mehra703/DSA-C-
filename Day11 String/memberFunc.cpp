#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "hello word";
    cout<<str1.length()<<endl; // length is the member function inside the string class
    cout<<str1.at(3)<<endl; // it is also a member function which give the value at the particular index
    cout<<str1.substr(1,6)<<endl; // give the substring of the original string
    cout<<str1.find("lo")<<endl; // give the index of the 1st occourance, if not exist then give -1
    return 0;
}