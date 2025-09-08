//define a c++ function to check whether a given number is a term in a fibonacci series or not.
#include<iostream>
using namespace std;
int inFib(int n)
{
    int a=-1,b=1,c=0,i;
    for(i=0;c<=n;i++)
    {
        c=a+b;
        if(n==c)
            return 1;
        a=b;
        b=c;
    }
    return 0;
}

int main()
{
    int n=55;
    if(inFib(n))
        cout<<n<<" is in fibonacci series";
    else
        cout<<n<<" is not in fibonacci series";
    cout<<endl;
    return 0;
}