#include <iostream>
using namespace std;

void func(){
    cout<<"function called..\n"; // No base case in this function so the recursion call infinite time which cause stack overflow
    func();
}

int main(){
    func();
    return 0;
}