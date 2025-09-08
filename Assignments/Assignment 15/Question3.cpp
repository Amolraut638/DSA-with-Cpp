#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int x, y;
    public:
        Coordinate():x(0),y(0){}
        Coordinate(int x,int y):x(x),y(y){}
        Coordinate operator,(Coordinate C)
        {
            return C;
        }
        void show(){ cout<<"\n("<<x<<","<<y<<")";}
};
int main()
{
    Coordinate c1(2,3),c2(5,-1),c3;
    c3=(c1,c2);
    c3.show();
    cout<<endl;
    return 0;
}