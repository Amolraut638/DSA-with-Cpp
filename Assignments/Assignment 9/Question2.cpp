#include<iostream>
using namespace std;
class time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int,int,int);
        void showTime();
        void normalize();
        time add(time);
        bool is_greater(time);

};

void time::setTime(int x,int y,int z)
{
    hr=x;
    min=y;
    sec=z;
}

void time::showTime()
{
    cout<<hr<<" hr "<<min<<" min "<<sec<<" sec "<<endl;
}

void time::normalize()
{
    min+=sec/60;
    sec%=60;
    hr+=min/60;
    min%=60;
}

time time::add(time t)
{
    time temp;
    temp.hr=hr+t.hr;
    temp.min=min+t.min;
    temp.sec=sec+t.sec;
    temp.normalize();
    return temp;
}

bool time::is_greater(time t)
{
    if(hr>t.hr)
        return true;
    else if(hr<t.hr)
        return false;
    else if(min>t.min)
        return true;
    else if(min<t.min)
        return false;
    else if(sec>t.sec)
        return true;
    else 
        return false;
}

int main()
{
    time t1,t2,t3;
    t1.setTime(2,34,45);
    t2.setTime(4,22,105);
    t1.showTime();
    t2.normalize();
    t2.showTime();
    t3=t1.add(t2);
    t3.showTime();
    if(t1.is_greater(t2))
        cout<<"t1 is greater than t2"<<endl;
    else
        cout<<"t2 is greater than t1"<<endl;
    return 0;
}
