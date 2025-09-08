#include<iostream>
#include<vector>
using namespace std;

void findMissing(int *a,int n)
{
    int i=0;
    while(i<n)
    {
        int index=a[i]-1; //array ka har element index ki tarah behave kr raha hain aur hume wo element uske respective index pe pahuchana hain
                        //5 ko pohchana hai to 5 jaisa kuch nhi hain bulky 5-1=4 index hain isliye 1 se minus kiya

        if(a[i]!=a[index])
            swap(a[i],a[index]);
        else
            i++;
    }

    //for(int i=0; i<n; i++)
    //  cout<<a[i]<<" ";
    for(int i=0; i<n; i++){
        if(a[i]!=i+1)
        cout<<i+1<<" "; 
    }
}
int main()
{
    int a[]={1,3,5,3,4};
    int n=sizeof(a)/sizeof(int);
    findMissing(a,n);
    return 0;
}

//this solution gives the wrong answer on leetcode
