#include<iostream>
#include<climits>
using namespace std;

int main(){
    int marks[] = {5,64,235,68,73};
    int n = sizeof(marks)/sizeof(int);

    int largest = INT_MIN;
    for(int i = 0;i < n ; i++){
        if(marks[i] > largest){
            largest = marks[i];
        }
    }
    cout<<largest<<endl;
    return 0;
}