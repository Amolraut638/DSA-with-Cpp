//write a c program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int n,i;
    unsigned long long fact;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1,fact=1;i<=n;i++)
        fact=fact*i;
    printf("The factorial of %d is %llu",n,fact);
    return 0;
}