#include<iostream>
using namespace std;
#define OVERFLOW 1
#define INVALID_INDEX 2
class Array  //question 1
{
  private:
    int *ptr;
    int capacity;
    int last_index;
  public:
    Array(int);  //question 2
    Array(Array&); // copy constructor assign 2  
    Array& operator=(Array&);//copy assignment operator ,call cascading ke liye return type Array  
    //reference isliye liya kyuki nhi liya to object create hoga aur copy constructor unneccessary call hoga           
    bool isEmpty();  //question 3
    void append(int); //question 4
    bool isFull();  //question 5
    void insert(int,int);  //question 6
    void edit(int,int);  //question 7
    void dlt(int);  //question 8
    int getValue(int); //question 9
    int count();  //question 10
    ~Array();  //question 11  (destructor)
    int find(int); //question 12

};

Array :: Array(int cap)
{
  capacity=cap;
  last_index=-1; //-1 indicate kr raha hain ki array me koi value rakhi hi nhi hain
  ptr=new int[capacity];
}

Array :: Array(Array &arr)
{
  capacity=arr.capacity;
  last_index=arr.last_index;
  ptr=new int[capacity];               //ptr ka data copy nhi kar sakte old object se kyuki shallow copy ho jayega
  for(int i=0;i<=last_index;i++)
      ptr[i]=arr.ptr[i];
}

Array& Array :: operator=(Array &arr)
{
  if (ptr!=nullptr)
  {
    delete[] ptr;  //ptr kisi pointer ko point kr rha hoga to uski memory release karni hogi
  }
  capacity=arr.capacity;
  last_index=arr.last_index;
  ptr=new int[capacity];           
  for(int i=0;i<=last_index;i++)
      ptr[i]=arr.ptr[i];
  return *this; //current object ke reference ko return kiya
  
}

bool Array :: isEmpty()
{
  return last_index==-1;
}

bool Array :: isFull()
{
  return last_index==capacity-1;
}

void Array :: append(int data)
{
  if(isFull())
    throw OVERFLOW;
  else
    ptr[last_index+1]=data;
    last_index++;
}

void Array :: insert(int index,int data)
{
  if(index<0 || index>last_index+1)
    throw INVALID_INDEX;
  if(isFull())
    throw OVERFLOW;
  for(int i=last_index;i>=index;i--)
    ptr[i+1]=ptr[i];
  ptr[index]=data;
  last_index++;
}

void Array :: edit(int index,int data)
{
  if(index<0 || index>last_index)
    throw INVALID_INDEX;
  ptr[index]=data;
}

void Array :: dlt(int index)
{
  if(index<0 || index>last_index)
    throw INVALID_INDEX;
  for(int i=index;i<last_index;i++)
    ptr[i]=ptr[i+1];
  last_index--;
}

int Array :: getValue(int index)
{
  if(index<0 || index>last_index)
    throw INVALID_INDEX;
  return ptr[index];
}

int Array :: count()
{
  return last_index+1;
}

Array :: ~Array()
{
  delete []ptr;
}

int Array :: find(int data)
{
  int index;
  for(index=0;index<=last_index;index++)
    if(ptr[index]==data)
      return index;
  return -1;   
}

int main()
{
    Array arr(4);
    cout<<arr.isEmpty()<<endl;
    cout<<arr.isFull()<<endl;
    arr.append(10);
    arr.append(20);
    arr.append(30);
    arr.append(40);
    cout<<arr.getValue(3)<<endl;
    cout<<arr.count()<<endl;
    cout<<arr.find(20);
    return 0;
}