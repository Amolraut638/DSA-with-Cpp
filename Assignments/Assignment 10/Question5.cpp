#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        complex(int x,int y)
        {
            a=x;
            b=y;
        }

        void showdata()
        {
            cout<<"\na="<<a<<" b="<<b;
        }

};

int main()
{
    complex c[5]={complex(1,2),complex(2,3),complex(3,4),complex(4,5),complex(5,6)};
    for(int i=0;i<5;i++)
        c[i].showdata();
    return 0;
}