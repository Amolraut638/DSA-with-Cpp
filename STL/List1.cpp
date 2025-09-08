#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l1={10,30,20};
    
    //1. Implicit Iterator
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;

    //2. Explicit Iterator
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    it=l1.begin();
    it++;
    l1.insert(it,{50,52,54,56});

    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    list<int>::iterator it1,it2;
    it1=l1.begin();
    it2=l1.end();
    l1.erase(++it1);
    l1.remove(53);
    //l1.reverse();
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    cout<<endl;
    return 0;
}