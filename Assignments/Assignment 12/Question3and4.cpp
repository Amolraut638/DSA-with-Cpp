#include<iostream>
using namespace std;
class time
{
    private:
        int hr,min,sec;
    public:
        void setTime(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
        }

        void showTime()
        {
            cout<<endl;
            cout<<"hr="<<hr<<" min="<<min<<" sec="<<sec<<endl;
        }

        bool operator >(time t) //jitne bhi relational operator hain unke liye return type hamesha bool hona chahiye
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

        time operator++(int) //post increment
        {
            time temp=*this;
            sec++;
            min+=sec/60;
            sec=sec%60;
            hr+=min/60;
            min=min%60;
            return temp;
        }
        time operator++() //pre increment
        {
            sec++;
            min+=sec/60;
            sec=sec%60;
            hr+=min/60;
            min=min%60;
            return *this;
        }

        time operator+(time T) //question 4
        {
            time temp;
            temp.hr=hr+T.hr;
            temp.min=min+T.min;
            temp.sec=sec+T.sec;
            temp.min+=temp.sec/60;
            temp.sec=temp.sec%60;
            temp.hr+=temp.min/60;
            temp.min=temp.min%60;
            return temp;
        }
        
};
int main()
{
    time t1,t2,t3;
    t1.setTime(5,34,22);
    t2.setTime(6,45,12);
    if(t1>t2)
        cout<<"t1 is greater than t2";
    else if(t2>t1) 
        cout<<"t2 is greater than t1";
    else
        cout<<"both t1 and t2 are same";
    cout<<endl;
    t1++;
    t1.showTime();  //call for post-increament
    ++t1;
    t1.showTime();  //call for pre-increament
    t3=t1+t2;
    t3.showTime();


    return 0;
}