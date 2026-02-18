#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int pencil,pen,eraser;
    cout<<"Enter the cost of the Pencil = ";
    cin>>pencil;
    cout<<"Enter the cost of the Pen = ";
    cin>>pen;
    cout<<"Enter the cost of the eraser = ";
    cin>>eraser;
    int total_cost = pencil+pen+eraser;
    float GST = (total_cost*18)/100;
    float total_costWithGST = total_cost+GST;
    float PI =3.144454;
    cout<<"the total cost without GST = "<<total_cost<<"\n";
    cout<<"the GST amout = "<<GST<<"\n";
    cout<<"total cost with 18% GST = " <<total_costWithGST<<"\n";
    cout<<setprecision(12)<<"total cost with 18% GST = " <<PI<<"\n";
    return 0;
}