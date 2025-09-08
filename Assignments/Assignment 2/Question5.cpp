//write a c++ program to calculate the volume of the cuboid.
#include<iostream>
using namespace std;
int main()
{
    int length,breadth,height,volume;

    cout<<"Enter the value of length:";
    cin>>length;
    cout<<"Enter the value of breadth:";
    cin>>breadth;
    cout<<"Enter the value of height:";
    cin>>height;
    volume=length*breadth*height;

    cout<<"The volume of cuboid is "<<volume<<" m^3"<<endl;

    return 0;
}