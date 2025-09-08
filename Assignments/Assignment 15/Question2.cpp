#include<iostream>
using namespace std;
class Integer
{
    private:
        int a;
    public:
        friend bool operator!(Integer);
        friend bool operator==(Integer,Integer);
};
bool operator!(Integer I)
{
    return !(I.a);
}
bool operator==(const Integer I1,const Integer I2)
{
    return I1.a==I2.a;
}