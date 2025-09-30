#include<iostream>
using namespace std;
class time
{
    private:
        int hr,min,sec;

    public:

        time() {
            hr = 0;
            min = 0;
            sec = 0;
        }

        time(int a,int b,int c)
        {
            hr = a;
            min = b;
            sec = c;
        }

        void show()
        {
            cout<<"hr:"<<hr<<" min:"<<min<<" sec:"<<sec<<endl;
        }
    
};

int main()
{
    time t1;
    time t2(23,12,45);
    t1.show();
    t2.show();
    return 0;
}
