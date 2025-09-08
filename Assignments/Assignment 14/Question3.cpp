#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int a,int b,int c){hr=a; min=b; sec=c;}
        void showTime(){ cout<<"\n"<<hr<<":"<<min<<":"<<sec;}
        friend ostream& operator<<(ostream&,Time);
        friend istream& operator>>(istream&,Time&);
        Time operator=(Time T)
        {
            hr=T.hr;
            min=T.min;
            sec=T.sec;
            return *this;
        }

};
ostream& operator<<(ostream &dout ,Time T)
{
    dout<<"\n"<<T.hr<<":"<<T.min<<":"<<T.sec;
    return dout;
}
istream& operator>>(istream &din,Time &T)
{
    din>>T.hr>>T.min>>T.sec;
    return din;
}