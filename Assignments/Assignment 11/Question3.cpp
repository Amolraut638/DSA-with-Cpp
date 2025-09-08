#include<iostream>
using namespace std;
class Date{
    private:
        int d,m,y;
    public:
        Date():d(1),m(1),y(2000)
        {}
        Date(int d,int m,int y):d(d),m(m),y(y)
        {}
};