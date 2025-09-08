//write a c function to check whether the given number is prime number or not.(TSRS)
#include<stdio.h>
void checkPrime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            {
                printf("%d is not a prime number",num);
                break;
            }
        
    }
    if(i==num)
        printf("%d is a prime number",num);      
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    checkPrime(num);
    return 0;
}