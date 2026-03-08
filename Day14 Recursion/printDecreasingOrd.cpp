#include<iostream>
using namespace std;

void printN(int n ){
    if(n == 1){
        cout<<n<<" ";
        return ;

    }
    cout<< n <<" ";
    printN(n-1);
}

int main(){
    printN(15);
    return 0;
}