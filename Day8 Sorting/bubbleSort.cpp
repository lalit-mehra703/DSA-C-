#include<iostream>
using namespace std;

void print(int arr[],int n ){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-2; i++){
        for(int j = 1; j < n-i; j++){
            if(arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    print(arr,n);
}

int main(){
    int arr[] = {4,5,2,1,3,6};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr, n);
    return 0;
}