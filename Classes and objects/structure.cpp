#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    int bookid;
    char title[50];
    float price;
};

void input(book *);
void display(book); 

int main()
{
    book b1={1,"C in depth",120.05f};
    book b2,b3;
    b2.bookid=2;
    strcpy(b2.title,"C++ in depth");
    b2.price=603.09;
    input(&b3);
    display(b3);
}

void input(book *p)
{
    cout<<"Enter bookid,title and price:";
    cin>>p->bookid;
    cin.ignore();  //used to skip or discard characters in the input buffer.
    cin.getline(p->title,50);
    cin>>p->price;
}

void display(book b)
{
    cout<<"Book_Id: "<<b.bookid<<"\nBook_Title: "<<b.title<<"\nBook_Price: "<<b.price<<"\n"<<endl;
}