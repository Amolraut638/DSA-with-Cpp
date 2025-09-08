//write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;

int max(int,int);
double max(double,double);

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

double max(double c,double d)
{
    if(c>d)
        return c;
    else
        return d;
}

int main()
{ 
    int a,b;
    cout<<"Enter two integer values:";
    cin>>a>>b;
    cout<<"The greater number is:"<<max(a,b)<<endl;
 
    double c,d;
    cout<<"Enter two real numbers:";
    cin>>c>>d;
    cout<<"The greater number is:"<<max(c,d)<<endl;

    return 0; 
}


