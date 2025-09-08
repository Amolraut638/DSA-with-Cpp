#include<iostream>
using namespace std;
class cuboid
{
    private:
        int length,breadth,height;  //instance member variables
    public:
        cuboid()
        {
            length=0;
            breadth=0;
            height=0;
        }

        cuboid(int x,int y,int z)
        {
            length=x;
            breadth=y;
            height=z;

        }

        void show()
        {
            cout<<" length="<<length<<" breadth="<<breadth<<" height="<<height<<endl;
        }
};
int main()
{
    // Creating an object using the default constructor
    cuboid c1;
    c1.show();  // Should display: length = 0, breadth = 0, height = 0

    // Creating an object using the parameterized constructor
    cuboid c2(5, 10, 15);
    c2.show();  // Should display: length = 5, breadth = 10, height = 15

    return 0;
}