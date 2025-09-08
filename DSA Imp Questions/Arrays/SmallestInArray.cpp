#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int nums[]={5,15,22,1,-15,24};
    int size=6;

    int smallest = INT_MAX;

    for(int i=0;i<size;i++)
    {
        //smallest=min(nums[i],smallest);  //we can skipp if block if we use min max functions
        if(nums[i]<smallest)
        {
            smallest=nums[i];
        }
    }
    cout<<"smallest="<<smallest;


    return 0;
}
