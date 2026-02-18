#include<iostream>
using namespace std;

int main(){
    int n ;
    do{
        cout<<"Enter the number : "<<endl;
        cin>>n;
        if(n%10 == 0){
            break;
        }
        cout<<"you entered number : "<<n;
    }while(true);
    return 0;
}