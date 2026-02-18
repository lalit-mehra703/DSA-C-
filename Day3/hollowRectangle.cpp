#include<iostream>
using namespace std;

int main(){
    int b,l;
    cout<<"Enter your breadth : ";
    cin>>b;
    cout<<"Enter your length : ";
    cin>>l;

    for(int i = 0;i<l;i++){
        for(int j = 0;j<b;j++){
            if(i == 0 || i == l-1){
                cout<<"* ";
            }else if(j == 0 || j == b-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}