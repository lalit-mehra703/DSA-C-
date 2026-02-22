#include<iostream>
using namespace std;

void spiralMatrix(int matrix[][4],int n,int m){
    int srow = 0 , erow = n-1;
    int scol = 0 , ecol = m-1;

    while(srow <= erow && scol <= ecol){

        for(int i = scol ; i <= ecol ; i++){ //top boundry
            cout<<matrix[srow][i]<<" ";
        }

        for(int i = srow+1 ; i <= erow ; i++){ //right boundry
            cout<<matrix[i][ecol]<<" ";
        }

        for(int i = ecol-1 ; i >= scol ; i--){ //bottom boundry 
            if(srow == erow){
                break;
            }
            cout<<matrix[erow][i]<<" ";
        }

        for(int i = erow-1 ; i >= srow+1 ; i--){ // left boundry
            if(scol == ecol){
                break;
            }
            cout<<matrix[i][scol]<<" ";
        }

        srow++,scol++;
        erow--,ecol--;
    }
}

int main(){
    int matrix[3][4] = {
        {1,2,3,4},
        {6,7,8,9},
        {11,12,13,14}
    };
    spiralMatrix(matrix,3 ,4);
    return 0;
}