#include<iostream>
using namespace std;

void func(int mat[][4]){
    cout<<"call func \n";
    cout<<"0th row ptr " <<mat<<endl;    //0th row ptr 0x61fee0
    cout<<"1th row ptr " <<mat+1<<endl;  //1th row ptr 0x61fef0
    cout<<"12 row ptr " <<mat+2<<endl;   //12 row ptr 0x61ff00

    cout<<"0th row value " << *mat<<endl;       //0th row value 0x61fee0
    cout<<"1th row value " << *(mat+1)<<endl;   //1th row value 0x61fef0
    cout<<"2th row value " << *(mat+2)<<endl;   //2th row value 0x61ff00
}

void func2(int (*mat)[4]){
    cout<<"call func2 \n";
    cout<<*(*(mat + 2) + 2)<<endl;  //value at ptr[i][j] = *( *( ptr + i ) + j)
}

int main(){
    int matrix[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    func(matrix);
    func2(matrix);
    return 0;
}