#include<iostream>
using namespace std;

int countFunc(int mat[][4], int n , int m){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(mat[i][j] == 7){
                count += 1;
            }
        }
    }
    return count;
}

int main(){
    int matrix[3][4] = {
        {1,2,4,7},
        {3,5,7,2},
        {5,7,7,2}
    };
    cout<<countFunc(matrix , 3 , 4);
    return 0;
}