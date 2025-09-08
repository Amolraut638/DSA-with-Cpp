#include<iostream>
using namespace std;

int balance=5000;
void withdraw(int amt)
{
    if(amt<=balance)
    {
        if(amt%100)
            throw 1.0;
        balance=balance-amt;
    }   
    else
        throw 1;                
}
int main()
{
    int amt=6000;
    try
    {
        withdraw(amt);
        cout<<"money withdrawn :"<<amt<<endl;   
        cout<<"available balance :"<<balance<<endl;
    }
    catch(int e)
    {
        cout<<"Insufficiant balance !!"<<endl;
    }
    catch(double e)
    {
        cout<<"Amount is not in multiple of 100 !!"<<endl;
    }
    catch(...)   //this is called catch all.koi bhi catch block match nhi hua to ye by default chalega
    {
        cout<<"some problem"<<endl;
    }
    cout<<"Thank you,visit again !";
    return 0;
}