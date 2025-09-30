#include<iostream>
#include<string.h>
using namespace std;
class customer
{
    private:

        int cust_id;
        char name[20];
        char email[30];
        char mobile[15];

    public:

        customer()  //non-parameterized constructor
        {
            cust_id=1;
            strcpy(name,"Amol");
            strcpy(email,"amolraut9991@gmail.com");
            strcpy(mobile,"7666824989");
        }

        customer(int id,char n[],char e[],char m[])  //parameterized constructor
        {
            cust_id=id;
            strcpy(name,n);
            strcpy(email,e);
            strcpy(mobile,m);

        }

        void show()  //instance member function
        {
            cout<<"Customer id="<<cust_id<<endl;
            cout<<"Name="<<name<<endl;
            cout<<"Email="<<email<<endl;
            cout<<"Mobile="<<mobile<<endl;
            
        }
    

};

int main()
{
    customer c1;
    c1.show();
    
    cout<<endl;

    customer c2(2,"Rohit","rohit07@gmail.com","9678787847");
    c2.show();
    

    return 0;
}