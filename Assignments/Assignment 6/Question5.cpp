//define a function to print all prime factors of a given number.(for example num=36 then prime factors are 2,3)
#include<iostream>
using namespace std;
int isPrime(int);
int nextPrime(int);
void printPrimeFactors(int);

int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int nextPrime(int n)
{
    for(n++;!isPrime(n);n++);
    return n;
}

void printPrimeFactors(int n)
{
    int i=2,flag=1;
    while(n>1)
    {
        while(n%i==0)
        {
            n=n/i;
            flag=0;
        }
        if(flag==0)
            cout<<i<<"  ";
        i=nextPrime(i);
    }
}

int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    printPrimeFactors(num);
    return 0;
}

