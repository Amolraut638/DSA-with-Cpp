#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    private:
        int Book_id;
        float price;
        char title[50];
      
    public:
        Book()  //non-parameterized constructor
        {
            Book_id = 14534;
            price = 455.89;
            strcpy(title,"C fundamentals");

        }
        Book(int id,float p, const char* t)  //parameterized constructor
        {                                    //warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
            Book_id=id;                      //ye error nhi aaye isliye char t[] ki jagah const char* t likha
            price=p;
            strcpy(title,t);

        }

        void show()  //instance member function
        {
            cout<<"Book id="<<Book_id<<endl;
            cout<<"Price="<<price<<endl;
            cout<<"Title="<<title<<endl;
            
        }

};

int main()
{
    Book b1;
    b1.show();
    cout<<endl;
    Book b2(24535,345.65,"C++ made easy");
    b2.show();
    return 0;
}