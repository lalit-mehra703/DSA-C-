#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4};
    vector<int>vec1(5, -1);
    cout<<"size of vector : "<<vec.size()<<endl;//4
    cout<<"capacity of vector : " <<vec.capacity()<<endl;//4
    vec.push_back(5);
    cout<<"size of vector : "<<vec.size()<<endl;//5
    cout<<"capacity of vector : " <<vec.capacity()<<endl;//8

    for(int num : vec1){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}