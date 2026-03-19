#include <iostream>
using namespace std;

int binarySearch(int arr[], int st , int end, int target){
    if(st > end ){
        return -1;
    }

    int mid = st + (end - st)/2;
    if(arr[mid] == target){ // element found
        return mid;
    }else if(arr[mid] > target){
        return binarySearch(arr, st, mid-1, target);
    }else{
        return binarySearch(arr, mid+1, end, target);
    }
}

int main(){
    int arr[] = {1,2,5,7,8,9,11,15,79};
    int n = sizeof(arr)/sizeof(int);
    int target = 9;
    cout<<"index of target : "<<binarySearch(arr, 0,n-1, target);
    return 0;
}