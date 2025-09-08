#include<iostream>
using namespace std;
class Room
{
    private:
        int room_no;
        int room_type;
        bool is_AC;
        double price;
    public:
        Room(int rno,int rtype,bool ac, double p)
        {
            room_no=rno;
            room_type=rtype;
            is_AC=ac;
            price=p;
        }
};