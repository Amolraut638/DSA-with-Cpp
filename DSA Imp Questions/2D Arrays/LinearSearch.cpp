#include<iostream>
#include<vector>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key) //arr[][3] me 2nd bracket me value dena imp hain
{
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            if(arr[i][j]==key)
                return true;
    return false;
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
    
    cout<<"Enter the key to find in array:"<<endl;
    cin>>key;

    if(findKey(arr,rows,cols,key))
        cout<<"Key found !";
    else
        cout<<"Key not found !";

    return 0;
}

   
