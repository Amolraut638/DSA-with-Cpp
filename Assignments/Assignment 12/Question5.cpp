#include<iostream>
using namespace std;
class matrix
{
    private:
        int A[3][3];
    public:
        void inputMatrix()
        {
            cout<<"Enter 9 elements for matrix:";
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    cin>>A[i][j];
            cout<<endl;
        }

        void showMatrix()
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                    cout<<A[i][j]<<" ";
                cout<<endl;
            }
            cout<<endl;
        }

        matrix operator +(matrix m)
        {
            matrix temp;
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    temp.A[i][j]=A[i][j]+m.A[i][j];
            return temp;
            cout<<endl;
        }

        matrix operator -(matrix m)
        {
            matrix temp;
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    temp.A[i][j]=A[i][j]-m.A[i][j];
            return temp;
            cout<<endl;
        }
        
        matrix operator *(matrix m)
        {
            matrix temp;
            int sum,k;
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++){
                    for(k=0,sum=0;k<3;k++)
                    sum+=A[i][k]*m.A[k][j];
                temp.A[i][j]=sum;
                }
            return temp;
        }  
};

int main()
{
    matrix m1,m2,m3,m4,m5;
    m1.inputMatrix();
    m2.inputMatrix();
    m1.showMatrix();
    m2.showMatrix();
    m3=m1+m2;
    m3.showMatrix();
    m4=m1-m2;
    m4.showMatrix(); 
    m5=m1*m2;
    m5.showMatrix();

    return 0;
}