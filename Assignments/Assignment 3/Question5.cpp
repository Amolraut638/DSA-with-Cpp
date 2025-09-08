//write a c++ program to add all the numbers of array of size 10.
#include<iostream>
using namespace std;
void addArr()
{
    int Arr[10]={1,2,5,4,3,2,1,2,3,3},i,sum=0;
    for(i=0;i<=9;i++)
    {
        sum=sum+Arr[i];
    }
    
    cout<<"The sum of array is :"<<sum;
}
int main()
{
    addArr();
    return 0;
}