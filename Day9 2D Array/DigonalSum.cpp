#include<iostream>
using namespace std;

int digonalSum(int matrix[][3], int n){
    int Sum  = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i == j){
                Sum += matrix[i][j];
            }else if(j == n-i-1){
                Sum += matrix[i][j];
            }
        }
    }
    return Sum;
}

int main(){
    int matrix[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    int matrix2[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout<<digonalSum(matrix2,3);
    return 0;
}