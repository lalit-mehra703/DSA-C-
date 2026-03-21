#include <iostream>
using namespace std;

void allOccurrence(int arr[], int n ,int i, int target ){
    if(i == n ){
        return;
    }

    if(arr[i] == target){
        cout<<i<<" ";
    }
    allOccurrence(arr, n , i+1, target);
}

int main(){
    int arr[] = {3,2,4,5,6,2,7,2,2};
    int n = sizeof(arr)/sizeof(int);
    allOccurrence(arr, n, 0, 2);
    return 0;
}