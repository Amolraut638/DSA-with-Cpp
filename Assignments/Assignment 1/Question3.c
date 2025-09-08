//write a c program to swap values of two int variables.
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the num1:");
    scanf("%d",&a);
    printf("Enter the num1:");
    scanf("%d",&b);
    printf("Before swapping\n");
    printf("a=%d and b=%d\n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("After swapping\n");
    printf("a=%d and b=%d",a,b);
   
    return 0;
}