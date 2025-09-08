#include<iostream>
using namespace std;
class Array 
{
    private:
        int *p;
        int size; 
    public:
        Array operator=(const Array arr)
        {
            size=arr.size;
            p=new int[size];
            for(int i=0;i<size;i++)
                p[i]=arr.p[i];
            return *this;
        }
        friend Array* operator+(Array,Array);

};
Array* operator+(Array a1,Array a2)
{
    Array *arrptr=new Array();
    arrptr->size=a1.size+a2.size;
    arrptr->p=new int[arrptr->size];
    int i,k;
    for(i=0,k=0;i<a1.size;i++,k++)
        arrptr->p[k]=a1.p[i];
    for(i=0;i<a2.size;i++,k++)
        arrptr->p[k]=a2.p[i];
    return arrptr;
}