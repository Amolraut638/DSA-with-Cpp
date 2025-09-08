//define a c++ function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int highestvaluedigit(int n)
{
    int maxdigit;
    maxdigit=n%10;
    n=n/10;
    while(n)
    {
        if(maxdigit<n%10)
           maxdigit=n%10;
        n=n/10;
    }
    return maxdigit;
}
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Highest value digit is:"<<highestvaluedigit(a);
    return 0;
}
