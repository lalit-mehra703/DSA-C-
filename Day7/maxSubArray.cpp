#include <iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int *arr, int n){
    int maxSum  = INT_MIN;
    for(int start = 0; start <n;start++){
        int sum = 0;
        for(int end = start; end <n; end++){
            sum += arr[end];
            // cout<<sum<<endl;
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;

}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxSubArraySum(arr,n);

    return 0;
}