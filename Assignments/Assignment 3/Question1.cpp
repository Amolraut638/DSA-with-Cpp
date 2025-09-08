//write a c++ program to calculate the average of three numbers.
#include<iostream>
using namespace std;
void average()
{
    int a,b,c;
    float avg;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    avg=(a+b+c)/3.0;
    cout<<"The average of three numbers is: "<<avg;

}
int main()
{
    average();
    cout<<endl;
    return 0;
}