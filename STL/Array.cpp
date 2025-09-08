#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int, 3> a1={12,34,54};
    array<float, 4> a2={2.4,3.5,2.2,7.8};
    array<int, 3> a3=a1;
    //elements access karne ke tarike

    //1/ []
    cout<<a1[1]<<endl; //subscript operator ki overlaoding ki hai array class me 

    //2. at()
    try{
        cout<<a1.at(6)<<endl;
    }
    catch(out_of_range e){
        cout<<"Invalid index"<<endl;
    }

    //3. Implicit iterator | range for loop
    for(int x : a1)  //for(type variable_name : container_name)
        cout<<x<<" ";
    cout<<endl;

    for(auto x : a2)  //for(Auto variable_name : container_name) auto likhne se array ka type specify karne ki jarurat nhi hain
        cout<<x<<" ";
    cout<<endl;

    //4. Explicit Iterator
    /*
    iterator ka object container ke pehle element ko point karega.har container ke liye iterator class alag bani hain
    hume array class ke iterator ka object chahiye.to hum ek function ko call karenge jo yue kam karke dega lekin agar a1 ne us function 
    ko call kiya to to a1 ke hi elements ko access karega
    */
    array<int, 3>:: iterator it;
    for(it=a1.begin(); it!=a1.end(); it++) //++ operator ki overloading ki hogi tabhi hum object ko increament kr pa rhe hain
        cout<<*it<<" ";  //iterator object are like pointers so we use dereferencing  
    cout<<endl;    
    return 0;
}