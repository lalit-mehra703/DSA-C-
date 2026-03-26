#include<iostream>
#include <vector>
using namespace std;

void merge(string arr[], int st, int mid, int end){
    vector<string> temp;
    int i = st;
    int j = mid+1;

    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int i = st,x = 0; i <= end; i++){
        arr[i] = temp[x++];
    }
}

void mergeSort(string arr[], int st, int end){
    if(st >= end){
        return;
    }

    int mid = st + (end - st)/2;

    mergeSort(arr, st, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, st, mid, end);
}

int main(){
    string arr[] = {"sun", "earth", "mara", "mercury","mana"};
    int n = sizeof(arr)/sizeof(string);
    mergeSort(arr, 0 , n-1);

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}