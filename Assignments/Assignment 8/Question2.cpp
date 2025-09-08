#include<iostream>
using namespace std;
class time
{
    private:
        int hr,min,sec;  //instance member variables
    public:
        void setData(int,int,int);
        void getData();


};

void time::setData(int x,int y,int z)
{
    hr=x;
    min=y;
    sec=z;
}

void time::getData()
{
    cout<<hr<<" hr "<<min<<" min "<<sec<<" sec "<<endl;
}

int main()
{
    time t1;
    t1.setData(3,45,20);
    t1.getData();
    return 0;
}