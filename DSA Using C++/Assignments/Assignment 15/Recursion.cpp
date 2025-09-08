#include<iostream>
using namespace std;

//recursive function to print N natural numbers
void PrintN(int n)
{
    if(n>0)
    {  
        PrintN(n-1);
        cout<<" "<<n; 
    }
}

//recursive funtion to print n natural number in reverse order
void PrintNRev(int n)
{
    if(n>0)
    {  
        cout<<n<<" ";
        PrintNRev(n-1);
    }
}

//recursive funtion to print n odd natural number
void PrintNOdd(int n)
{
    if(n>0)
    {  
        PrintNOdd(n-1);
        cout<<" "<<2*n-1; 
    }
}

//recursive funtion to print n odd natural number in reverse order
void PrintNOddReverse(int n)
{
    if(n>0)
    {  
        cout<<2*n-1<<" "; 
        PrintNOddReverse(n-1);
    }
}

//recursive funtion to print n even natural number
void PrintNEven(int n)
{
    if(n>0)
    {  
        PrintNEven(n-1);
        cout<<" "<<2*n; 
    }
}

//recursive funtion to print n even natural number in reverse order
void PrintNEvenReverse(int n)
{
    if(n>0)
    {  
        cout<<2*n<<" "; 
        PrintNEvenReverse(n-1);
    }
}

//recursive function to print squares of first n natural numbers
void PrintSquareN(int n)
{
    if(n>0)
    {  
        PrintSquareN(n-1);
        cout<<" "<<n*n; 
    }
}

//recursive function to print squares of first n natural numbers
void PrintSquareNrev(int n)
{
    if(n>0)
    { 
        cout<<n*n<<" ";  
        PrintSquareNrev(n-1);
    }
}

//recursive function to print cubes of first n natural numbers
void PrintCubeN(int n)
{
    if(n>0)
    {  
        PrintCubeN(n-1);
        cout<<" "<<n*n*n; 
    }
}

//recursive function to print cubes of first n natural numbers in reverse order
void PrintCubeNrev(int n)
{
    if(n>0)
    { 
        cout<<n*n<<" ";  
        PrintCubeNrev(n-1);
    }
}
