#include <iostream>
using namespace std;

bool isSorted(int arr[],int n ,int i){
    if(i == n-1)return true;
    if(arr[i] > arr[i+1]) return false;
    return isSorted(arr, n , i+1);
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,4,3,2,5,6};
    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);
    cout<<isSorted(arr1, n1 , 0)<<endl;
    cout<<isSorted(arr2, n2, 0)<<endl;
    return 0;
}