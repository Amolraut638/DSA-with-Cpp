#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1={10,20,30,40};
    vector<int> v2;

    //1. [] no bound checking
    for(int i=0; i<=3; i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    //2. At() with bound checking
    for(int i=0; i<=3; i++)
        cout<<v1.at(i)<<" ";
    cout<<endl;

    //3. Implicit Iterator
    for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;

    //4. Explicit Iterator
    vector<int> :: iterator it;
    for(it=v1.begin(); it!=v1.end(); it++)
    {
        //cout<<*it<<" ";
        *it=*it+5;
        cout<<*it<<" ";
    }
    cout<<endl;

    vector<int>::reverse_iterator itr; //same variable name is not possible so we written variable name as itr
    for(itr=v1.rbegin();itr!=v1.rend();itr++)
    { 
        cout<<*itr<<" ";
    }
    cout<<endl;

    cout<<v2.empty()<<endl;
    cout<<v1.empty()<<endl;

    v1.push_back(70);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;

    v1.pop_back();
    v1.shrink_to_fit(); //this funcion removes all the empty spaces in vector. this saves memory wastage
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;  

    v1.insert(v1.begin(),60);
    for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;

    v1.erase(v1.begin());
    for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;

    v2.insert(v2.begin(),v1.begin(),v1.end()); //copy all the data from v1 to v2
    for(auto x:v2)
        cout<<x<<" ";
    cout<<endl;

    /* 
    v2.insert(v2.begin(),v1.begin(),v1.begin()+2); //copy this range of the data from v1 to v2
    for(auto x:v2)
        cout<<x<<" ";
    cout<<endl;
    */

    return 0;
}