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
        friend ostream& operator<<(ostream&,Coordinate);
        friend istream& operator>>(istream&,Coordinate&);
};
ostream& operator<<(ostream &dout,Coordinate C)
{
    cout<<"\n("<<C.x<<","<<C.y<<")";
    return dout;
}
istream& operator>>(istream &din,Coordinate &C)
{   
    din>>C.x>>C.y;
    return din;
} 