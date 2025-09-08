//define a function to print all prime numbers between two given numbers.
#include<iostream>
using namespace std;
void isPrime()
{
    int min,max,i,j;
    cout<<"Enter minimum and maximum number:";
    cin>>min>>max;

    for(i=min;i<=max;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
           cout<<i<<" ";
    }
}
int main()
{
    isPrime();
    return 0;
}