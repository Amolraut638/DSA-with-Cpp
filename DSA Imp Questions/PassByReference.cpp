#include<iostream>
using namespace std;

void changeArray(int arr[],int size)  //array name is passed as an argument so pass by reference is done
{
    int i;
    cout<<"In function\n";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";

    for(i=0;i<size;i++)
        arr[i]=2*arr[i];
}

int main()
{
    int arr[]={2,5,3,7,8};
    int size=5;
    
    changeArray(arr,size);

    cout<<"\nIn main\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}