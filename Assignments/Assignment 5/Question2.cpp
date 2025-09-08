//write a c++ function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int,int,int=0);
int add(int x,int y,int z)
{
    return x+y+z;
}
int main()
{
    int p,q,r;
    cout<<"Enter two numbers:";
    cin>>p>>q;
    cout<<"the sum is:"<<add(p,q)<<endl;
    cout<<"Enter three numbers:";
    cin>>p>>q>>r;
    cout<<"the sum is:"<<add(p,q,r);
    return 0;
}