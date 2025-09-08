#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int total_elements=rows*cols;
        
        int startingRow=0;
        int endingCol=cols-1;//starting 0 se hain isliye -1
        int startingCol=0;
        int endingRow=rows-1;

        int count=0;
        while(count<total_elements)
        {
            //print starting row
            for(int i=startingCol; i<=endingCol && count<total_elements; i++)
            {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            //print ending col
            for(int i=startingRow; i<=endingRow && count<total_elements; i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            //print ending row
            for(int i=endingCol; i>=startingCol && count<total_elements; i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

             //printing starting column
            for(int i=endingRow; i>=startingRow && count<total_elements; i--)
            {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};

int main() 
{
    Solution solution;

    // Input matrix
    vector<vector<int>> matrix = {
        {1, 2, 3, 6, 4},
        {4, 5, 6, 7, 9},
        {7, 8, 9, 2, 1},
        {0, 8, 5, 1, 9}
    };

    // Get the spiral order result
    vector<int> result = solution.spiralOrder(matrix);

    // Print the result
    cout << "Spiral Order: ";
    for (int num : result) 
    {
       cout << num <<" ";
    }

    return 0;
}
