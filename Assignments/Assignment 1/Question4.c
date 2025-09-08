//write a function to calculate the LCM of two numbers (TSRS).
#include <stdio.h>
int calculateLcm(int n1,int n2)
{

    int max;
    // maximum number between n1 and n2 is stored in max
    for(max=(n1>n2)?n1:n2 ; max<n1*n2 ; max++)
        if(max%n1==0 && max%n2==0)
        break;
    return max;
}
int main()
{
    int n1,n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("the lcm is %d",calculateLcm(n1,n2));
    return 0;
}