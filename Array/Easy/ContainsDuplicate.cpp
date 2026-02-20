#include<iostream>
#include<algorithm>
using namespace std;

bool containsDulplicate(int *arr, int n){
    
    sort(arr,arr+n);
    for(int i = 0 ; i< n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] == arr[i-1]){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<containsDulplicate(arr,n);
    return 0;
}