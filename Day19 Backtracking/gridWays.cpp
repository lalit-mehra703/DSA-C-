#include<iostream>
#include <vector>
using namespace std;

int gridWays(int row, int col, int n, int m){

    if(row == n-1 && col == m-1){ //Base case for destination
        return 1;
    }

    if(row >= n || col >= m){ //base case for invalid shell
        return 0;
    }

    int val1 = gridWays(row, col + 1, n, m); // right move

    int val2 = gridWays(row + 1 , col , n , m); //down move

    return val1 + val2;
}

int main(){
    int rows = 3;
    int cols = 3;
    cout<<"total possible ways in the "<<rows<< " * "<<cols<<" grid = "<<gridWays(0, 0 , rows, cols);
    return 0;
}