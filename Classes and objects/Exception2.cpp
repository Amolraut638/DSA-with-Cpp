#include<iostream>
using namespace std;
void f1()
{
    int age,vote;
    try{
        cout<<"Enter your age:";
        cin>>age;
        if(age<18)
            throw 1;
        cout<<"\nvote for your favorite actor:";
        cout<<"\n1.Amir khan";
        cout<<"\n2.Salman khan";
        cout<<"\n3.Shahrukh khan";
        cout<<"\n4.Akshay kumar"<<endl;
        cin>>vote;
        cout<<"Thank you for your vote"<<endl;
        cout<<"you voted for:"<<vote<<endl;
    }
    catch(int e){
        cout<<"You are not eligible to cast your vote"<<endl;

    }
    cout<<"program ends here";
}
int main()
{
    f1();
    cout<<endl;
    return 0;
}