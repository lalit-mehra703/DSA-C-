#include <iostream>
using namespace std;

int search(int arr[], int si, int ei, int tar){  // O(log n)

    if(si > ei){ //base case
        return -1;
    }

    int mid = si + (ei - si) / 2;
    if(arr[mid] == tar){
        return mid;
    }

    if(arr[si] <= arr[mid]){ //l1
        if(arr[si] <= tar && tar <= arr[mid]){
            //left half
            return search(arr, si , mid-1, tar);
        }else{ //right half
            return search(arr, mid+1, ei, tar);
        }
    }else{ 
        //l2 
        if(arr[mid] <= tar && tar <= arr[ei]){
            //right half
            return search(arr, mid+1, ei, tar);
        }else{
            //left half
            return search(arr, si, mid-1, tar);
        }
    }
}

int main(){
    int arr[7] = {4,5,6,7,0,1,2};
    int n = 7;

    cout<<"idx : " <<search(arr, 0, n-1, 0);
}