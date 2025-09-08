#include<iostream>
using namespace std;
class time
{
    private:
        int hr,min,sec;
    public:
        time(int a,int b,int c)
        {
            hr=a;
            min=b;
            sec=c;
        }
        void show()
        {
            cout<<"hr="<<hr<<" min="<<min<<" sec="<<sec<<endl;
        }
};

int main()
{
    time t1(23,12,45);
    t1.show();
    return 0;
}
