#include<iostream>
#include<climits>
using namespace std;

int maxProfit(int *arr, int n){
    int maxPro = INT_MIN;
    for(int i = 0 ; i < n; i++){
        for(int j = i+1; j<n ; j++){
            int Profit = arr[j] - arr[i];
            maxPro = max(Profit, maxPro);
        }
    }
    if(maxPro<0){
        return -1;
    }
    return maxPro;
}

int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxProfit(arr,n);
    return 0 ;
}