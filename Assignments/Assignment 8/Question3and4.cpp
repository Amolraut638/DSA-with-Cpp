#include<iostream>
using namespace std;
class date
{
    private:
        int day,month,year;  //instance member variables
    public:
        void setDate(int x,int y,int z)
        {
            day=x;
            month=y;
            year=z;
        }
        
        /* void getmonthname()
        {
            switch (month)
            {
            case 1:
                cout<<"jan";
            case 2:
                cout<<"feb";
            case 3:
                cout<<"mar";
            case 4:
                cout<<"apr";
            case 5:
                cout<<"may";
            case 6:
                cout<<"jun";
            case 7:
                cout<<"jul";
            case 8:
                cout<<"aug";
            case 9:
                cout<<"sep";
            case 10:
                cout<<"oct";
            case 11:
                cout<<"nov";
            case 12:
                cout<<"dec";
               
            }
        } */
        string getMonthName(int monthNumber)
        {
        string monthNames[] = {"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};
        return monthNames[monthNumber - 1];
        }

        void getData(int format=1)
        {
            if(format==1)
            {
                cout<<"d="<<day<<" m="<<month<<" y="<<year<<endl;
            }
            else if(format==2)
            {
            cout<<day<<"-"<<month<<"-"<<year<<endl;
            }
            else if(format==3)
            {
                cout<<day<<" "<<getMonthName(12)<<" "<<year<<endl;
            }    
        }


};

int main()
{
    date d;
    d.setDate(19,10,2002);
    d.getData(3);
    return 0;
}