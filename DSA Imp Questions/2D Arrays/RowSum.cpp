#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[3][3];
    int rows=3;
    int cols=3;
    
    //row wise input
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            cin>>arr[i][j];

    //row wise printing 
    cout<<"Printing row wise"<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    //col wise printing 
    cout<<"Printing col wise"<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
            cout<<arr[j][i]<<" ";
        cout<<endl;
    }
    
    cout<<"Printing row sum"<<endl;
    for(int i=0; i<rows; i++)
    {
        int sum=0;
        for(int j=0; j<cols; j++)
            sum=sum+arr[i][j];
        
        cout<<"row"<<i+1<<"sum = "<<sum<<" ";   
        cout<<endl;
    }

    cout<<"printing col sum"<<endl;
    for(int i=0; i<rows; i++)
    {
        int sum=0;
        for(int j=0; j<cols; j++)
            sum=sum+arr[j][i];
        
        cout<<"row"<<i+1<<"sum = "<<sum<<" ";   
        cout<<endl;
    }

    return 0;
}