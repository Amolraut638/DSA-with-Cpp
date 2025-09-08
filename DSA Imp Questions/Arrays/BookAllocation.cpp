#include<iostream>
#include<vector>
#include <numeric>
#include <algorithm>
using namespace std;
class Solution
{
    public:
        bool isPossibleSolution(vector<int>array,int books,int students,int sol)
        {
            int pageSum=0; //this variable is for storing current sum
            int count=1; //this variable to store the number of allocations of book to the students 

            for(int i=0;i<books;i++)
            {
                if(array[i]>sol) //sol==mid that means the pages is atmost equal to mid and if the single book's pages is greater than mid then return false
                    return false;
                if(pageSum+array[i]>sol){
                    count++;
                    pageSum=0; //for next student the pageSum is reseted
                    pageSum=pageSum+array[i];
                    if(count>students)
                        return false;
                    }
                else
                    pageSum=pageSum+array[i];
            }
            return true;  //means allocation is completed
        }

        int findPages(vector<int> &array, int students) 
        {
            int books=array.size();//number of books
            if(students>books)
                return -1;
            int start=0;
            int end=accumulate(array.begin(),array.end(), 0); //this function give the sum of all elemets of the array syntax (first value,last value,initialize)
            int ans=-1;
            while(start<=end)
            {
                int mid=start+(end-start)/2;
                if(isPossibleSolution(array,books,students,mid))
                {
                    ans=mid;
                    end=mid-1;
                }
                else
                    start=mid+1;
            }
            return ans;
        }
};

int main() {
    Solution sol;
    vector<int> array = {12, 34, 67, 90};
    int students = 2; // Number of students
    cout << "Minimum number of pages: " << sol.findPages(array,students)<< endl;
    return 0;
}