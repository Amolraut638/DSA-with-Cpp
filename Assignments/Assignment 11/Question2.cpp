#include<iostream>
using namespace std;
class Student{
    private:
        int rollno;
        char name[30];
    public:
        Student()
        {
            cout<<"Enter rollnumber: ";
            cin>>rollno;
            cout<<"Enter name: ";
            cin.ignore();
            cin.getline(name,30);
        }
        void display(){
            cout<<endl<<rollno<<"  "<<name;
        }

};