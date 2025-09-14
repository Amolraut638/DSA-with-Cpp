//define a function to calculate the HCF of two numbers.
#include<iostream>
using namespace std;

int hcf(int,int);

int hcf(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0&&b%H==0)
            return H;
    }
    return 1;
}

int main()
{
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    cout<<"The HCF of "<<a<<" and "<<b<<" is :"<<hcf(a,b);
    return 0;
    
}