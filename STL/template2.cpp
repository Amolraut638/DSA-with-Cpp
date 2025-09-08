#include<iostream>
using namespace std;  
#define OVERFLOW 1
#define INVALID_INDEX 2
template <typename T>
class Array  
{
  private:
    int capacity; //capacity and last index always remains integer values so we dont generalize it 
    int last_index;
    T *ptr; //pointer bhi usi type ka hona chahiye jis type ka array rehne wala hain
  public:
    Array(int);     
    bool isEmpty();  
    void append(T); 
    bool isFull(); 
    void insert(int,T);  
    void edit(int,T);
    void dlt(int); 
    T getValue(int); 
    int count();  
    void showArr();
    ~Array(); 
    int find(T); 

};

template<typename T> //ye likhna bhi compulsory hain    
Array<T> :: Array(int cap)
{   
  capacity=cap;
  last_index=-1; //-1 indicate kr raha hain ki array me koi value rakhi hi nhi hain
  ptr=new T[capacity];
}

template<typename T>
bool Array<T> :: isEmpty() //membership label lagate hain to wo ye dikhata hain ki ye kis class ka member hain 
{                          //to hume ye bhi batana padega ki ye class konse type ke array wali class hain
  return last_index==-1;
}

template<typename T>
bool Array<T> :: isFull()
{
  return last_index==capacity-1;
}

template<typename T>
void Array<T> :: append(T data)
{
  if(isFull())
    throw OVERFLOW;
  else
    ptr[last_index+1]=data;
    last_index++;
}

template<typename T>
void Array<T> :: insert(int index,T data)
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

template<typename T>
void Array<T> :: edit(int index,T data)
{
  if(index<0 || index>last_index)
    throw INVALID_INDEX;
  ptr[index]=data;
}

template<typename T>
void Array<T> :: dlt(int index)
{
  if(index<0 || index>last_index)
    throw INVALID_INDEX;
  for(int i=index;i<last_index;i++)
    ptr[i]=ptr[i+1];
  last_index--;
}

template<typename T>
T Array<T> :: getValue(int index)
{
  if(index<0 || index>last_index)
    throw INVALID_INDEX;
  return ptr[index];
}

template<typename T>
int Array<T> :: count()
{
  return last_index+1;
}

template<typename T>
Array<T> :: ~Array()
{
  delete []ptr;
}

template<typename T>
int Array<T> :: find(T data)
{
  int index;
  for(index=0;index<=last_index;index++)
    if(ptr[index]==data)
      return index;
  return -1;   
}

template<typename T>
void Array<T> :: showArr()
{
    for(int i=0;i<=last_index;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Array<int> arr1(4); //object banate time type bhi specify karna padega
    //cout<<arr1.isEmpty()<<endl;
    //cout<<arr1.isFull()<<endl;
    arr1.append(10);
    arr1.append(20);
    arr1.append(30);
    arr1.append(40);
    cout<<arr1.getValue(3)<<endl;
    cout<<arr1.count()<<endl;
    cout<<arr1.find(20)<<endl;
    Array<double> arr2(5);
    arr2.append(2.3);
    arr2.append(12.4);
    arr2.append(17.1);
    arr2.append(45.4);
    arr2.append(32.9);
    cout<<arr2.getValue(2)<<endl;
    arr1.showArr();
    arr2.showArr();
    
    return 0;
}
