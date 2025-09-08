#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>   
using namespace std;
void f1(char file1[], char file2[])
{
    char ch;
    ifstream fin; //for reading 
    ofstream fout; //for writing
    fin.open(file1, ios::in);
    if(!fin)
        cout<<"File not found!";
    else
    {
        fout.open(file2, ios:: out);
        ch=fin.get();
        while(!fin.eof())
        {
            fout<<ch;
            ch=fin.get();
        }
        fout.close();
    }
    fin.close();
}

void f2(char file1[])
{
    char ch;
    ifstream fin; //for reading 
    fin.open(file1, ios::in);
    if(!fin)
        cout<<"File not found!";
    else
    {
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
    }
    fin.close();
}

class Employee
{
    private:
        int empid;
        char name[30];
        float salary;
    public:
        void input()
        {
            cout<<"Enter the empid,name and salary:";
            cin>>empid;
            cin.ignore();
            cin.getline(name,30);
            cin>>salary;
        }
        void display()
        {
            cout<<endl;
            cout<<empid<<" ";
            cout<<name<<" ";
            cout<<salary<<endl;
        }

        void store();
        void printAll();
        void search(int id);
        void edit(int id);
        void del(int id); 
};

void Employee :: store()
{
    ofstream fout; //ofstream ka object banaya kyuki hume file me write karna hain
    fout.open("EmployeeFile",ios::binary|ios::app);
    fout.write((char*)this,sizeof(*this)); //keyboard se jo data enter hua hain object me usko file me pohchana hain isliye this pointer ka use kiya aur char* typecasting hain
    fout.close();
}

void Employee :: printAll()
{
    ifstream fin;
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<"file not found!";
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            display();
            fin.read((char*)this,sizeof(*this));
        }
    }
    fin.close();
}

void Employee :: search(int id)
{
    ifstream fin; //data read karna hai isliye ifstream ka object banaya
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<"file not found!";
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(empid=id)
            {
                display();
                break;
            }
            fin.read((char*)this,sizeof(*this));
        }
        if(empid!=id)
            cout<<"search failed, record not found";
    }
    fin.close();

}

void Employee :: edit(int id)
{
    Employee e;
    ifstream fin;
    ofstream fout;
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<"file not found!";
    else
    {
        fout.open("tempFile",ios::binary|ios::out);
        fin.read((char*)&e,sizeof(e));
        while(!fin.eof())
        {
            if(id==e.empid)
            {
                cout<<"Enter correct employee name and salary: ";
                cin.ignore();
                cin.getline(e.name,30);
                cin>>e.salary;
            }
            fout.write((char*)&e,sizeof(e));
            fin.read((char*)&e,sizeof(e)); //*this bhi likh sakte the        
        }
        remove("EmployeeFile");
        rename("tempFile","EmployeeFile");
    }
    fin.close();
}

void Employee :: del(int id)
{
    Employee e;
    ifstream fin;
    ofstream fout;
    fin.open("EmployeeFile",ios::binary|ios::in);
    if(!fin)
        cout<<"file not found!";
    else
    {
        fout.open("tempFile",ios::binary|ios::out);
        fin.read((char*)&e,sizeof(e));
        while(!fin.eof())
        {
            if(id!=e.empid)
            {
                fout.write((char*)&e,sizeof(e));
            }
            fin.read((char*)&e,sizeof(e)); //*this bhi likh sakte the        
        }
        remove("EmployeeFile");
        rename("tempFile","EmployeeFile");
    }
    fin.close();

}

int menu()
{
    int choice;
    cout<<"\n1.New Record";
    cout<<"\n2.Edit Record";
    cout<<"\n3.View All Records";
    cout<<"\n4.Search Record";
    cout<<"\n5.Delete Record";
    cout<<"\n6.Exit";
    cout<<"\n\nEnter your choice:";
    cin>>choice;
    return choice;
}
int main()
{
    Employee emp;
    int id;
    while(1)
    {
        switch (menu())
        { 
            case 1:
                emp.input();
                emp.store();
                break;

            case 2:
                cout<<"\nEnter the employee id:";
                cin>>id;
                emp.edit(id);
                break;

            case 3:
                emp.printAll();
                break;

            case 4:
                cout<<"\nEnter employee id to search record:";
                cin>>id;
                emp.search(id);
                break;

            case 5:
                cout<<"\nEnter employee id to delete record:";
                cin>>id;
                emp.del(id);
                break;

            case 6:
                exit(0);
            
            default:
                cout<<"\nInvalid choice!";
                break;
        }
    }

    //char file1[]="demo.c",file2[]="temp.c";
    //f2(file2);
    cout<<endl;
    return 0;
}