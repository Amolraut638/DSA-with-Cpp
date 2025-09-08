#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int marks[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the marks of subject "<<i+1<<":";
        cin>>marks[i];
    }   

    cout<<"The elements of the array is :";
    for(int i=0;i<size;i++){
        cout<<marks[i]<<" ";
    }

    return 0;
}