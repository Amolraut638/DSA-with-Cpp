#include<iostream>
using namespace std;

int Solve(int dividend,int divisor)
{
    int start=0;
    int end=abs(dividend);
    int mid=start+(end-start)/2;
    int ans=0;
    
    while(start<=end)
    {
        //perfect solution
        if(abs(mid*divisor)==abs(dividend)){
            ans=mid;
            break;
        }

        //not a perfect solution
        if(abs(mid*divisor)>abs(dividend)) //left
            end=mid-1;
        else
        {
            //ans store
            ans=mid;
            //right search
            start=mid+1;            
        }
        mid=start+(end-start)/2;
    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0))
        return ans;
    else
        return -ans;

}
int main()
{
    int dividend=-21;
    int divisor=7;

    int ans = Solve(dividend,divisor);
    cout<<"ans is "<<ans<<endl;
    return 0;
}

//agar kisi question me search space pata ho to hum ek answer variable leke usme ans store karte hain