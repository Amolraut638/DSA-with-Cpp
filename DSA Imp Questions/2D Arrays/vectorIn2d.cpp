#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /* 
    vector<vector<int> > arr; //bahar wale vector ke andar vector type ka data push hoga aur andar wale vector ke andar int wala

    vector<int> a{1,3,5};
    vector<int> b{4,5,7,5,3};
    vector<int> c{5,9,1};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[i].size(); j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;  
    }
    return 0;
    */
   int row=3;
   int col=5;
   vector<vector<int> > arr(row, vector<int>(col, -1));

   for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[i].size(); j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;  
    }
   return 0; 
}