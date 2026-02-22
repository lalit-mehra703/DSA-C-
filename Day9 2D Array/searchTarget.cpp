#include<iostream>
using namespace std;

void SortedMatriSearch(int mat[][4], int m , int n, int target){
    for(int i = 0 ; i < n ; i++){
        int scol = 0 , ecol = m-1;

        while(scol <= ecol){
            int mid = (scol + ecol)/2;
            if(mat[i][mid] == target ){
                cout<<"found at : "<< i <<","<<mid;
                return;
            }
            else if(target < mat[i][mid]){
                ecol = mid -1;
            }
            else{
                scol = mid + 1;
            }
        }
    }
    cout<<"Not found";
}

int main(){
    int matrix[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    SortedMatriSearch(matrix,4,4,37);
    //Optimized solution in searchTargetOpt.cpp
    return 0;
}