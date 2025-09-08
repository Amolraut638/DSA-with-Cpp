//write a c++ program to swap values of two int variables without using third variable.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    
    cout<<"before swapping:";
    cout<<"\na="<<a<<"\nb="<<b;

    a=a+b; 
    b=a-b;
    a=a-b;
    
    cout<<"\nafter swapping:";
    cout<<"\na="<<a<<"\nb="<<b;

    return 0;
}


