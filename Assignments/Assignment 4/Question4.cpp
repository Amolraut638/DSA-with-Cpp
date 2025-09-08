//define a c++ function to print pascal triangle up to N lines.
#include<iostream>
using namespace std;

int fact(int n)
{
    int fact=1;
    while(n)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}

int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}

void printPascaltriangle(int lines)
{
    int i,j,flag,r;
    for(i=1;i<=lines;i++)
    {
        flag=1;
        r=0;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i)
            {
                if(flag)
                    cout<<combi(i-1,r++);
                else
                    cout<<" ";
                flag=1-flag;   //flag 0 hain to 1 ho jayega and 1 hain to 0 ho jayega
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}

int main()
{
    printPascaltriangle(5);
    return 0;
}