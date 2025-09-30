#include<iostream>
using namespace std;
//class Dealer;   
class product
{
    private:
        int p1,p2,p3;
    public:
        void show()
        {
            cout<<"p1="<<p1<<" p2="<<p2<<" p3="<<p3<<endl;
        }
        //friend void Dealer::Dost();  //agar dost function kisi dusre class ka member hain to yaha pe declare karte time membership operator lagake
                                        //batana pdega ki wo konse class ka member hai 
        friend void Dost(product &);
};

/* class Dealer
{
    private:
        int d1;
    public:
        void Dost();
}; */
//Dost function ko membership lebel nhi lagela kyuki wo class ka member nhi hain
//ek function ek time pe ek hi class ka member ho sakta hain
void Dost(product &obj1)   //Dost() function me bana object values print karke destroy ho raha tha 
{
    obj1.p1=10; //isme values rakhne ke liye reference dena jaruri tha
    obj1.p2=20;
    obj1.p3=30;
}

int main()
{
    product obj,obj2; // Dost function ko is object ko access karana hain taki 
    Dost(obj);
    //Dost(obj2);
    obj.show();
    //obj2.show();
    return 0;
}