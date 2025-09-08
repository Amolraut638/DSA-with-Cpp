#include<iostream>
#include<fstream>
#include<string.h>
using namespace std; 
//int f1()
/*
{
    ofstream fout;
    fout.open("file1.txt",ios::out); //out mode me previous data eraze ho jata hai aur naya data override hota hain
    fout<<" my friends";             //isliye hun append use karte hain
    fout.close();
    return 0; 

    ofstream fout;
    fout.open("file1.txt",ios::app);
    fout<<" my friends";
    fout.close();
    return 0;
}
*/

int f2()
{
    ifstream fin;
    fin.open("file1.txt",ios::in);   //in,out,app,binary these are the file opening modes
    if(!fin){                       //ios::out is default value for the ofstream class
        cout<<"file not found";     //fin agar file already present hogi to hi data show karega.fout agar hogi to usme changes karta hain ya fir nhi banata hain 
        return 0;
    }
    char ch;
    ch=fin.get();  //get function characters ko read karega aur return karega
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();  //agla character read karne ke kiye ye likha
    }                   //input ke liye cin>>ch bhi kr sakte the pr wo delimeters(space,newline) ko ignore karta hain
    fin.close();
    cout<<endl;
    return 0;
}

/* class employee 
{
    private:
        int empid;
        char name[40];
        float salary;
    public:
        void setEmployee(int id,char n[],float s)
        {
            empid=id;
            strcpy(name,n);
            salary=s;
        }
        void showEmployee()
        {
            cout<<empid<<" "<<name<<" "<<salary<<endl;
        }
        void storeEmployee()
        {
            ofstream fout;
            fout.open("empfile",ios::app);
            fout.write((char*)this,sizeof(*this));  //insertion operator nhi use kr rhe kyuki hme object store karna hain.write function 2 argument leta hain
            fout.close();                           //1st argument is jis data ko file me rakhna chahte hain wo abhi kaha rakha hain uska address                                         
        }                                          //aur dusra argument hota hain size of the data

        
        void printAllEmployees()
        {
            ifstream fin;
            fin.open("empfile",ios::in);
            if(!fin)
            {
                cout<<"File not found";
            }
            else
            {
                fin.read((char*)this,sizeof(*this));
                while(!fin.eof())
                {
                    showEmployee();
                    fin.read((char*)this,sizeof(*this));
                       
                }
            }
            fin.close();
        }

};
int main()
{
    employee e1;
    e1.setEmployee(3,"amol",65000);
    //e1.storeEmployee();
    e1.printAllEmployees();
    //e1.showEmployee();
    return 0;
}  */
int main()
{
    /* fstream fin;
    fin.open("file1.txt",ios::in);
    if(!fin){
        cout<<"file not found";
        return 0;
    }
    char ch;
    fin.seekg(5);
    cout<<fin.tellg();
    ch=fin.get();  //get function characters ko read karega
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }
    fin.close();
    cout<<endl; */
    f2();
    return 0;
}