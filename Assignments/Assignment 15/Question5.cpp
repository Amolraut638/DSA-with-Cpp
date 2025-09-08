#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int rollno;
        char name[40];
        int age;
    public:
        void setStudent(int r,char n[],int a)
        {
            rollno=r;
            strcpy(name,n);
            age=a;
        }
        void showStudent()
        {
            cout<<"\n"<<rollno<<" "<<name<<" "<<age;
        }
        bool operator==(Student s)
        {
            return rollno==s.rollno && age==s.age && (!strcmp(name,s.name));
        }
};
