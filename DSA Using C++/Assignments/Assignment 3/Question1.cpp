#include<iostream>
using namespace std;
#define OVERFLOW 1
#define INVALID_INDEX 2
class DynArray
{
    private:
        int capacity;
        int last_index;
        int *ptr;
    protected:   //doubleArray directly call na ho isliye protected bana diya
        void doubleArray();
        void halfArray();
        
    public:
        DynArray(int);  //Question 2
        void doubleArray();   //Question 3
        bool isEmpty();
        bool isFull();
        void append(int);
        void insert(int,int);
        void edit(int,int);
        int getValue(int);
        int count();
        ~DynArray();
        int find(int);
        void dlt(int);
        ~DynArray();

};

DynArray :: DynArray(int size)
{
    capacity=size;
    last_index=-1;
    ptr=new int[size];

}

bool DynArray :: isEmpty()
{
  return last_index==-1;
}

bool DynArray :: isFull()
{
  return last_index==capacity-1;
}

void DynArray :: append(int data)
{
  if(isFull())
    doubleArray();
  else
    ptr[last_index+1]=data;
    last_index++;
}

void DynArray :: insert(int index,int data)
{
  if(index<0 || index>last_index+1)
    throw INVALID_INDEX;
  if(isFull())
    doubleArray();
  for(int i=last_index;i>=index;i--)
    ptr[i+1]=ptr[i];
  ptr[index]=data;
  last_index++;
}

void DynArray :: doubleArray()
{
    int *temp;
    temp=new int[capacity*2];
    for(int i=0;i<=last_index;i++)
        temp[i]=ptr[i];
    delete [] ptr;  
    ptr=temp;  //pointer temp ko point kare isliye ye likha,temp jis array ko point karta tha usko ab ptr point kr raha hain
    capacity*=2; 
}

void DynArray :: doubleArray()
{
    int *temp;
    temp=new int[capacity/2];
    for(int i=0;i<=last_index;i++)
        temp[i]=ptr[i];
    delete [] ptr;  
    ptr=temp; 
    capacity/=2; 
}

void DynArray :: edit(int index,int data)
{ 
  if(index<0 || index>last_index)
    throw INVALID_INDEX;
  ptr[index]=data;
}

int DynArray :: getValue(int index)
{
  if(index<0 || index>last_index)
    throw INVALID_INDEX;
  return ptr[index];
}

int DynArray :: count()
{
  return last_index+1;
}

DynArray :: ~DynArray()
{
  delete []ptr;
}

int DynArray :: find(int data)
{
  int index;
  for(index=0;index<=last_index;index++)
    if(ptr[index]==data)
      return index;
  return -1;   
}

void DynArray :: dlt(int index)
{
  if(index<0 || index>last_index)
    throw INVALID_INDEX;
  for(int i=index;i<last_index;i++)
    ptr[i]=ptr[i+1];
  last_index--;
  if(capacity>1 && count()==capacity/2)
    halfArray();
}

DynArray :: ~DynArray()
{
  delete []ptr;
}