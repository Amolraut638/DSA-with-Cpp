#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main()
{
    //--------set-----------
    set<int>s1={20,40,30,10};
    set<int>s2;

    for(auto x:s1)
        cout<<x<<" "; //set humesha sorted order me hi print hota hain op=10 20 30 40 
    cout<<endl;

    set<int>::iterator it;
    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<s1.count(10)<<endl;
    cout<<s2.empty()<<endl;
    s1.insert(90);
    for(auto x:s1)
        cout<<x<<" ";
    cout<<endl;
    s1.erase(30);
    for(auto x:s1)
        cout<<x<<" ";
    cout<<endl;
    cout<<"-------------------"<<endl;
    //---------multiset--------------
    multiset<int,greater<int>>s3={20,40,30,20,40,20,10};
    multiset<int>s4;

    for(auto x:s3)
        cout<<x<<" ";
    cout<<endl;

    multiset<int>::iterator it2;
    for(it2=s3.begin();it2!=s3.end();it2++)
        cout<<*it2<<" ";
    cout<<endl;
    cout<<s3.count(10)<<endl;
    cout<<s4.empty()<<endl;
    s3.insert(90);
    for(auto x:s3)
        cout<<x<<" ";
    cout<<endl;
    s3.erase(20);
    for(auto x:s3)
        cout<<x<<" ";
    cout<<endl;
    cout<<"----------------------"<<endl;
    //--------unordered_set-----------------
    unordered_set<int>s5={20,40,30,10,20};
  

    for(auto x:s5)
        cout<<x<<" ";
    cout<<endl;
    unordered_set<int>::iterator it3;
    for(it3=s5.begin();it3!=s5.end();it3++)
        cout<<*it3<<" ";
        
    cout<<"----------------------"<<endl;
    //---------unordered_multiset-----------
    unordered_multiset<int>s6={20,40,30,10,20};
  

    for(auto x:s6)
        cout<<x<<" ";
    cout<<endl;
    cout<<endl;
    return 0;
}