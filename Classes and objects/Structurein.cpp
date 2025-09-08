#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    private:
        int bookid;
        char title[50];
        float price;
    public:
        void setBookid(int id)
        {
            if(id<0)
                bookid=-id;
            else
                bookid=id;
        }

        void input()
        {
            cout<<"Enter bookid,title and price:";
            cin>>bookid;
            cin.ignore();
            cin.getline(title,50);
            cin>>price;
        }

        void display()
        {
            cout<<bookid<<" "<<title<<" "<<price<<endl;
        }
};
int main()
{
    book b1,b2,b3;
    b1.input();
    b2.input();
    b1.display();
    b2.display();
}



