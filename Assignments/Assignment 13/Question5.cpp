#include<iostream>
using namespace std;
class Array
{
    private:
        int *p;
        int size;
    public:
        Array(int s)
        {
            size=s;
            p=new int[size];

        }

        int& operator [](int index)
        {
            if(index>0 && index<size)
                return p[index];
            cout<<"Invalid array index";
            return p[0];
        }

        ~Array()
        {
            delete []p; 
        }


};