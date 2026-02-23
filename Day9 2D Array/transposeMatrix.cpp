#include<iostream>
using namespace std; 

void transposeMatrix(int mat[][4], int rows ,int cols){
    int transpose[cols][rows] = {{0}};
    for(int i = 0 ; i < rows ; i++ ){
        for(int j = 0 ; j < cols ; j++){
            transpose[j][i] = mat[i][j];
        }
    }

    //Print transpose matrix
    for(int i = 0 ; i < cols ; i++){
        for(int j = 0 ; j < rows ; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int matrix[][4] = {
        {11,12,13,14},
        {15,16,17,18},
        {19,20,21,22}
    };
    transposeMatrix(matrix,3,4);
    return 0;
}