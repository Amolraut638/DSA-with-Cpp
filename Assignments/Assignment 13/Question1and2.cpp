#include<iostream>
using namespace std;
long hcf(long a,long b)
{
    long h;
    for(h=a<b?a:b;h>=1;h--)
        if(a%h==0 && b%h==0)
            return h;
}
class fraction
{
    private:
        long numerator;
        long denominator;
    public:
        fraction(long n=0,long d=0):numerator(n),denominator(d) { }  //empty body constructor.

        fraction operator +(fraction f)   //Question 1
        {
            fraction temp;
            temp.numerator=numerator*f.denominator+f.numerator*denominator;
            temp.denominator=denominator*f.denominator;
            long h=hcf(temp.numerator,temp.denominator);
            temp.numerator/=h;
            temp.denominator/=h;
            return temp;
        }
        void printFraction()
        {
            cout<<"The sum of given fractions is : "<<numerator<<"/"<<denominator<<endl;
        }

        bool operator >(fraction f)  //Question 2
        {
            return numerator*f.denominator  > f.numerator*denominator;
        }
};

int main()
{
    fraction f1(2,3);
    fraction f2(7,6);
    fraction f3;
    f3=f1+f2;
    f3.printFraction();
    if(f1>f2)
        cout<<"f1 is greater than f2";
    else
        cout<<"f2 is greater than f1";

    return 0;
}