//write a c++ program to find maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;

    if(a>b)
        cout<<a<<" is greater than "<<b;
    else
        cout<<b<<" is greater than "<<a;
        
    return 0;
}