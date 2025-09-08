//define a c++ function to calculate the x raised to y power.
#include<iostream>
using namespace std;
float power(float x,float y)
{
    if(y==0)
        return 1;
    if(y>0)
    {
        return power(x,y-1)*x;
    }
    else
    {
        return power(x,y+1)*(1/x);
    }
}
int main()
{
    cout<<power(2,3);
    cout<<endl;
    return 0;
}
    