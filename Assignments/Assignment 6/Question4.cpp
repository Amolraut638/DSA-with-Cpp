//define a function to calculate the LCM of three numbers
#include<iostream>
using namespace std;

int lcm(int a,int b,int c);

int lcm(int a,int b,int c)
{

    int L;
    for(L=a > b ? a>c ? a : c : b>c ? b : c; L <= a*b*c; L++)
        if(L%a==0&&L%b==0&&L%c==0)
            return L;
    return 0;
}

int main()
{
    int a,b,c;
    cout<<"Enter the Three numbers:";
    cin>>a>>b>>c;
    cout<<"The LCM of the three numbers "<<a<<","<<b<<","<<c<<" is:"<<lcm(a,b,c)<<endl;
    return 0;
}