#include<iostream>
using namespace std;
class product
{
    private:
        int a,b,c;
        const int k;  //const var ko bhi reference ki tarah declare karte time initialize karna compulsory hain.idhar nhi kiya kyuki niche initializer ki help se kiya hain
    public:
        product(int x,int y,int z,int w):k(w)    //k ko initializer ki help se hi initialize karna padega
        {
            a=x; b=y; c=z;   //idher k=w assign nhi kar sakte 
        }
        void show()
        {
             cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
            cout<<"k=>"<<k<<endl;
        }

};
int main()
{ 
    product p(10,20,30,25);
    p.show();
    cout<<endl;
    return 0;
} 
