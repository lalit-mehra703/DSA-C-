#include <iostream>
#include<cstring>
using namespace std;

void reverse(char word[]){
    int n = strlen(word);
    int st = 0 , end = n-1;

    while(st < end){
        swap(word[st] , word[end]);
        st++, end--;
    }
}


int main(){
    char word[] = "Lucky hhkjh";
    cout<<strlen(word)<<"\n";
    int arr[] = {1,2,3,4};
    reverse(word);
    cout<<"reverse = "<<word<<endl;
    return 0;
}