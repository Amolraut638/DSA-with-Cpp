#include<iostream>
using namespace std;
class Item
{
    private:
        int a,b; //instance member variables | non-static member variables
        static int k;  //static member variables | class variable ,default value of SMV is 0  
    public:
        void setA(int x) { a=x; }  //instance member variable
        void setB(int y) { b=y; }  //IMV
        int getA() { return a; }   //IMV
        int getB() { return b; }   //IMV
        //void setK(int z) { k=z; }  //IMV
        //int getK() { return k;}   //IMV
        static void setK(int z) { k=z; }  //static member variable, 
        static int getK() { return k;}   //SMV
};
int Item::k;//it is neccessary to write this otherwise static int k variable will not be created
//we have to declare the static variables outside the class if we want to use it
//agar class ke andar static member variable hai to us class ke lie alag se memory milti hain usme hote hai SMV's
//otherwise jbtk objects nhi bante tabtak class ko memory nhi milti
//static member variables class specific hote hain object specific nhi hote so we can direct access it by classname :: 
//instance member function can access instance members and static members both but static member function cannot access instance 
//member function
//Static member functions can be called without objects
//remember example of bank system for SMV and IMV
int main()
{
    Item i1,i2;
    i1.setA(5);
    i1.setB(6);
    cout<<"a="<<i1.getA()<<endl<<"b="<<i1.getB()<<endl;
    //i1.setK(10);
    //cout<<i1.getK();
    Item::setK(10);
    cout<<Item::getK();
    cout<<endl;
    return 0;

}

