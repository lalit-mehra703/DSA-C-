#include<iostream>
using namespace std;

void solveMaze(int maze[][4],int n){
}

int main(){
    int n = 4;
    int maze[4][4] = {{1, 0, 0, 0},
                      {1, 1, 0, 1},
                      {1, 1, 0, 0},
                      {0, 1, 1, 1}
                     };
    
    solveMaze(maze, n);
    return 0;
}