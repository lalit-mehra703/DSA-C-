#include<iostream>
using namespace std;

int main(){
    int n,sum = 0;
    cout<<"Enter the last number of natual number : ";
    cin>>n;

    for(int i = 1;i<=n;i++){
        sum += i;
    }
    cout<<"sum : "<<sum;
    return 0;
}