#include<iostream>
using namespace std;
class Matrix{
    private:
        int A[3][3];
    public:
        void input()
        {
            cout<<"Enter 9 matrix elements row wise";
            for(int i=0;i<=2;i++)
                for(int j=0;j<=2;j++)
                    cin>>A[i][j];
        }
        void display()
        {
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++)
                    cout<<A[i][j]<<"  ";
                cout<<endl;
            }
        }
        Matrix add(Matrix M)
        {
            Matrix temp;
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++)
                    temp.A[i][j]=A[i][j]+M.A[i][j];
            }
            return temp;

        }
        Matrix sub(Matrix M)
        {
            Matrix temp;
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++)
                    temp.A[i][j]=A[i][j]-M.A[i][j];
            }
            return temp;
        }
        Matrix multiply(Matrix M)
        {
            Matrix temp;
            int sum;
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    for(int k=0,sum=0;k<=2;k++)
                        sum+=A[i][k]*M.A[k][j];
                    temp.A[i][j]=sum;
                }
            }
            return temp;
        }
        Matrix transpose()
        {
            Matrix temp;
            for(int i=0;i<=2;i++){
                for(int j=0;j<=2;j++){
                    temp.A[j][i]=A[i][j];
                }
            }
            return temp;

        }
        bool is_singular()
        {
            int s;
            s=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2])-A[0][1]*(A[1][0]*A[2][2]-A[2][0]*A[1][2])+A[0][2]*(A[1][0]*A[2][1]-A[2][0]*A[1][1]);
            if(s==0)
                return true;
            else
                return false;
        }
};

int main()
 {
    Matrix mat1, mat2, result;

    // Input matrices
    cout << "Enter elements for the first matrix:\n";
    mat1.input();
    cout << "Enter elements for the second matrix:\n";
    mat2.input();

    // Display matrices
    cout << "Matrix 1:\n";
    mat1.display();
    cout << "Matrix 2:\n";
    mat2.display();

    // Add matrices
    result = mat1.add(mat2);
    cout << "Addition of the two matrices:\n";
    result.display();

    // Subtract matrices
    result = mat1.sub(mat2);
    cout << "Subtraction of the two matrices:\n";
    result.display();

    // Multiply matrices
    result = mat1.multiply(mat2);
    cout << "Multiplication of the two matrices:\n";
    result.display();

    // Transpose of the first matrix
    result = mat1.transpose();
    cout << "Transpose of the first matrix:\n";
    result.display();

    // Check if the first matrix is singular
    if (mat1.is_singular()) {
        cout << "The first matrix is singular.\n";
    } else {
        cout << "The first matrix is not singular.\n";
    }

    if (mat2.is_singular()) {
        cout << "The first matrix is singular.\n";
    } else {
        cout << "The first matrix is not singular.\n";
    }

    return 0;
}