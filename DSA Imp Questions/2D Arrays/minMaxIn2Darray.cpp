#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int getMin(int arr[][3],int rows,int cols)
{
    int minimum=INT_MAX;
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            if(arr[i][j] < minimum)
                minimum=arr[i][j];
    return minimum;

}

int getMax(int arr[][3],int rows,int cols)
{
    int maximum=INT_MIN;
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            if(arr[i][j]>maximum)
                maximum=arr[i][j];
    return maximum;

}

int main()
{
    int arr[3][3];
    int rows=3;
    int cols=3;
    int key;

    //row wise input
    cout<<"Enter the array elements:"<<endl;
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            cin>>arr[i][j];
    
    cout<<endl;
    cout<<"The minimum element in the 2d array is : "<<getMin(arr,rows,cols)<<endl;
    cout<<"The maximum element in the 2d array is : "<<getMax(arr,rows,cols)<<endl;
    return 0;
}
