//define a c++ function to sort an array of strings in ascending or descending order depending on bool type arguments.
//true for ascending and false for descending,use defualt arguments to implement it.
#include<iostream>
#include<string.h>
using namespace std;
void sortStrings(char A[][20],int size,bool asc=true);
void sortStrings(char A[][20],int size,bool asc)
{
    int r,i;
    char temp[100];
    for(r=1;r<size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(asc==true&&strcmp(A[i],A[i+1])>0)
            {
                strcpy(temp,A[i]);
                strcpy(A[i],A[i+1]);
                strcpy(A[i+1],temp);
            }
            else if(asc==false && strcmp(A[i],A[i+1])<0)
            {
                strcpy(temp,A[i]);
                strcpy(A[i],A[i+1]);
                strcpy(A[i+1],temp);
            }
        }
    }
    
}
int main()
{
    // Example array of strings
    char arr[5][20] = {"banana", "apple", "cherry", "date", "elderberry"};
    int size = 5;

    cout << "Original array:" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    // Sort in ascending order
    sortStrings(arr, size, true);
    cout << "\nSorted array in ascending order:" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    // Sort in descending order
    sortStrings(arr, size, false);
    cout << "\nSorted array in descending order:" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    
    return 0;
}