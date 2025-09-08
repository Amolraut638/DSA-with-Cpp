//write function using function overloading to add two numbers having different datatypes.
#include<iostream>
using namespace std;
int sum(int,int);
float sum(float,float);

int sum(int a,int b)
{
    return a+b;
}

float sum(float c,float d)
{
    return c+d;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    cout<<"The sum is:"<<sum(a,b)<<endl;

    float c,d;
    cout<<"Enter the value of c and d:";
    cin>>c>>d;
    cout<<"The sum is:"<<sum(c,d)<<endl;

    return 0;
}