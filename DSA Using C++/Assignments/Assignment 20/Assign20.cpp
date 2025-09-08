#include<iostream>
#define EMPTY_HEAP 1
using namespace std;
class Heap
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    protected:
        void doubleArray();
        void halfArray();
    public:
        Heap(int);
        Heap(Heap &);
        Heap& operator=(Heap &);
        void insert(int);
        bool isFull();
        bool isEmpty();
        int max();
        int del();
        ~Heap();
};
Heap::Heap(int cap)
{
    capacity=cap;
    lastIndex=-1;
    ptr=new int[capacity];
}
Heap::Heap(Heap &h)
{
    capacity=h.capacity;
    lastIndex=h.lastIndex;
    ptr=new int[capacity];
    for(int i=0;i<=lastIndex;i++)
        ptr[i]=h.ptr[i];
}
Heap& Heap::operator=(Heap &h)
{
    capacity=h.capacity;
    lastIndex=h.lastIndex;
    if(ptr!=nullptr)
        delete []ptr;
    ptr=new int[capacity];
    for(int i=0;i<=lastIndex;i++)
        ptr[i]=h.ptr[i];
    return *this;
}
bool Heap::isEmpty()
{
    return lastIndex==-1;
}
int Heap::max()
{
    if(!isEmpty())
        return ptr[0];
    else
        throw EMPTY_HEAP;
}
void Heap::doubleArray()
{
    int *temp=new int[capacity*2];
    for(int i=0;i<=lastIndex;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
    capacity*=2;
}
void Heap::halfArray()
{
    int *temp=new int[capacity/2];
    for(int i=0;i<=lastIndex;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
    capacity/=2;
}
bool Heap::isFull()
{
    return lastIndex+1==capacity;
}
void Heap::insert(int data)
{
    int i,index,parIndex;
    if(isFull())
        doubleArray();
    for(index=lastIndex+1;index>0;index=parIndex)
    {
        parIndex=(index-1)/2;
        if(ptr[parIndex]<data)
            ptr[index]=ptr[parIndex];
        else    
            break;
    }
    ptr[index]=data;
    lastIndex++;
}
int Heap::del()
{
    int i,item,temp,index,leftIndex,rightIndex;
    if(isEmpty())
        throw EMPTY_HEAP;
    else
    {
        item=ptr[0];
        temp=ptr[lastIndex];
        lastIndex--;
        index=0;
        leftIndex=1;
        rightIndex=2;
        while(leftIndex<lastIndex)
        {
            if(ptr[leftIndex]>ptr[rightIndex])
            {
                if(temp<ptr[leftIndex])
                {
                    ptr[index]=ptr[leftIndex];
                    index=leftIndex;
                }
                else 
                    break;
            }
            else
            {
                if(temp<ptr[rightIndex])
                {
                    ptr[index]=ptr[rightIndex];
                    index=rightIndex;
                }
                else 
                    break;
            }
            leftIndex=2*index+1;
            rightIndex=2*index+2;
        }
        if(leftIndex==lastIndex && temp<ptr[leftIndex])
        {
            ptr[index]=ptr[leftIndex];
            index=leftIndex;
        }
        ptr[index]=temp;
        if(capacity/2>=lastIndex+1 && capacity>1)
            halfArray();
        return item;
    }
    
}
Heap::~Heap()
{
    delete []ptr;
}

void heap_sort(int A[],int N)
{
    Heap obj(N);
    for(int i=0;i<N;i++)
        obj.insert(A[i]);
    for(int i=N-1;i>=0;i--)
        A[i]=obj.del();
}