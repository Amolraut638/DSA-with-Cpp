#include<iostream>
#include<utility>
#include<tuple>
using namespace std;

int main()
{
    pair <int,string>p1(1,"Arun");
    pair <string,string>p2{"Madhya Pradesh","Bhopal"};
    pair <string,string>p3;
    p3=make_pair("Bihar","Patna");

    cout<<p1.first<<"  "<<p1.second<<endl;
    cout<<p2.first<<"  "<<p2.second<<endl;
    cout<<p3.first<<"  "<<p3.second<<endl;
    
    tuple <int,float,string> t1(1,4.5f,"Java");
    tuple <string,string,int> t2;
    t2=make_tuple("winter","India",5);

    cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<endl;
    cout<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2)<<endl;
    
    
    cout<<endl;
    return 0;
}