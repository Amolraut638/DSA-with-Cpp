#include<iostream>
#include<string.h>
using namespace std;
class Numbers{
    private:
        int size;
        int *arr;
    public:
        Numbers(int s){
            size=s;
            arr=new int[size];
        }
        ~Numbers(){
            delete []arr;
        }
        Numbers(Numbers &n){
            size=n.size;
            arr=new int[size];
            for(int i=0;i<size;i++)
                arr[i]=n.arr[i];
        }
};