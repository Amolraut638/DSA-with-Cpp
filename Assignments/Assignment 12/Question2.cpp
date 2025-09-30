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


    return 0;
}