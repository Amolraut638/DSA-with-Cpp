#include<iostream>
using namespace std;
template <typename X> //X is the placeholder for datatype

/* 
int big(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

float big(float a,float b)
{
    if(a>b)
        return a;
    else
        return b;
}

//function overloading compile time pe resolve hoti hain to type ko dekh ke compiler samajh jayega konsa function run karna hain 
*/

//this template avoids the repeatition of code  
X big(X a,X b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int x=big(3,4);
    float y=big(3.5f,2.4f);
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}

