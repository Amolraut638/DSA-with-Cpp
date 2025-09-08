#include<iostream>
#include<vector>
using namespace std;
void WavePrintMatrix(vector<vector<int>>v)
{
    int rows=v.size();
    int cols=v[0].size();
    for(int startCol=0; startCol<cols; startCol++){
        //even no.of col -> top to bottom
        if((startCol & 1)==0)
        {
            for(int i=0; i<rows; i++)
                cout<<v[i][startCol]<<" ";
        }
        else
        {
        //odd number of col -> bottom to top
        for(int i=rows-1; i>=0; i--)
            cout<<v[i][startCol]<<" "; 
        }
    }
}

int main()
{
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {6,8,4,2}
    };
    WavePrintMatrix(v);
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    cout<<"vedi sakshi";
    return 0;
}