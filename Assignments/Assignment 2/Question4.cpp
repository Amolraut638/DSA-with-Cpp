//write a c++ program to calculate the area of circle.
#include<iostream>
using namespace std;
int main()
{
    int radius;
    float pi=3.14159,area;
    cout<<"Enter the value of radius:";
    cin>>radius;
    
    area=pi*radius*radius;

    cout<<"The area of circle is "<<area<<endl;

    return 0;
}