#include<iostream>
using namespace std;

//recursive function to calculate the sum of first N natural numbers
int sumN(int n)
{
    if(n==1)
        return 1;
    return n + sumN(n-1); 
}

//recursive function to calculate the sum of first odd N natural numbers
int sumNOdd(int n)
{
    if(n==1)
        return 1;
    return 2*n-1 + sumNOdd(n-1); 
}

//recursive function to calculate the sum of first even N natural numbers
int sumNEven(int n)
{
    if(n==1)
        return 2;
    return 2*n + sumNEven(n-1); 
}

//recursive function to calculate the sum of squares of first N natural numbers
int sumNSquares(int n)
{
    if(n==1)
        return 1;
    return n*n + sumNSquares(n-1); 
}

//recursive function to calculate the factorial of number
int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1); 
}

//recursive function to calculate the sum of the digits of a given number
int sumDigits(int n)
{
    if(n==0)
        return 0;
    return n%10 + sumDigits(n/10); 
}

//recursive function to print binary of a given decimal number
void DtoB(int x)
{
    if(x>0)
    {
        DtoB(x/10);
        cout<<x%10;
    }
}

//recursive function to find nth term of fibbonacci series
int fibN(int n)
{
    if(n==0 || n==1)
        return n;
    return fibN(n-1) + fibN(n-2);
}

//recursive function to calculate the HCF of two numbers
int hcf(int a,int b)
{
    if(a>b){
        if(a%b==0)
            return b;
        return hcf(a%b,b);
    }
    else{
        if(b%a==0)
            return a;
        return hcf(a,b%a);
    }
}

//recursive function to calculate x power y
double power(double x, double y)
{
    if(y==0)
        return 1;
    if(y>0)
        return x*power(x,y-1);
    else
        return 1/x*power(x,y+1);
}