#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list <int> fl1={15,30,68,42,28};
    forward_list <int> fl2,fl3;
    fl2.assign({6,12,18});
    fl3.assign(4,20);

    //1. implicit iterator
    for(auto x:fl1)
        cout<<x<<" ";
    cout<<endl;
    for(auto x:fl2)
        cout<<x<<" ";
    cout<<endl;
    for(auto x:fl3)
        cout<<x<<" ";
    cout<<endl;
    //2. explicit iterator
    forward_list <int>::iterator it;
    for(it=fl1.begin();it!=fl1.end();it++)
        cout<<*it<<" ";

    cout<<endl;
    fl1.pop_front();
    fl1.emplace_front(10);
    
     for(auto x:fl1)
        cout<<x<<" ";
    cout<<endl;

    fl1.insert_after(fl1.before_begin(),25);
     for(auto x:fl1)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}