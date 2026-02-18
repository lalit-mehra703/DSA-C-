#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int target){
    cout<<sizeof(arr)<<endl;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int target;
    cout<<"Enter the target value : ";
    cin >> target;
    int n = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr,n,target);
    return 0;
}