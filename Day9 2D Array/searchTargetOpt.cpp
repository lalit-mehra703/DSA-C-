#include<iostream>
using namespace std;

bool SortedMatriSearch(int mat[][4], int n , int m, int target){
    int row = 0, col = m-1;

    while(row <= n-1 && col >= 0){
        if(mat[row][col] == target){
            cout<<"found at cell (" << row <<","<<col<<")\n";
            return true;
        }else if(mat[row][col] >target){
            col--; //left
        }else{
            row++; //down
        }
    }
    cout<<"not found";
    return false;
}

int main(){
    int matrix[4][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    SortedMatriSearch(matrix,4,4,39);
    return 0;
}