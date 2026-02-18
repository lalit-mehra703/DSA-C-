#include<iostream>
using namespace std;

void printArr(int nums[]){
    for(int i = 0 ;i<10;i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    int arr[] = {3,4,5,7,2,56};
    char ch = 'a';
    char *ptr = &ch;
    cout<<sizeof(ptr);
    printArr(arr);
    return 0;
}