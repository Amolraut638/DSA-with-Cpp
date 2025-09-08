#include<iostream>
using namespace std;
class Distance
{
    private:
        int km,m,cm;
    public:
        void setDistance(int x,int y,int z)
        {
            km=x;
            m=y;
            cm=z;

        }

         void getDistance()
        {
            cout<<"km="<<km<<" m="<<m<<" cm="<<cm<<endl;
        }

        void normalize()
        {
            m=m+cm/100;
            cm=cm%100;
            km=km+m/1000;
            m=m%1000;

        }
        
        Distance operator +(Distance d)
        {
            Distance temp;
            temp.km=km+d.km;
            temp.m=m+d.m;
            temp.cm=cm+d.cm;
            temp.normalize(); 
            return temp;
        }

         
};

int main()
{
    Distance d1,d2,d3;
    d1.setDistance(12,800,70);
    d2.setDistance(4,900,48);
    d1.getDistance();
    d2.getDistance();
    cout<<"The addition of the distances is :"<<endl;
    d3=d1+d2;
    d3.getDistance();
    cout<<endl;
    return 0;
}