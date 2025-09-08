//define a c++ function to swap data of two int variable using call by reference.
#include<iostream>
using namespace std;
void swap(int*,int*);
void swap( int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    cout<<"Enter the values of a and b:";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"After swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}
