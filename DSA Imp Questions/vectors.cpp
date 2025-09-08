//vectors are just like arrays but it is dynamic in nature unlike arrays
#include<iostream>
#include<vector>
using namespace std;

/* int main()
{
    //vector<int> vec;  //sintax 1
    //vector<int> vec={1,2,3};    //syntax 2
    vector<int> vec(5,0);   //syntax 3, fisrt value is size of vector and second value is index value 
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;
    return 0;
}
 */
//for loop in vectors
/* int main()
{
    vector<char>vec ={'a','b','c','d','e','f'};

    for(char val:vec)
        cout<<val<<endl;

    return 0;
} */

/*vector functions
1.size
2.push_back
3.pop_back
4.front
5.back
6.at
*/

/* //1.size
int main()
{
    vector<char>vec ={'a','b','c','d','e','f'};
    cout<<"size="<<vec.size();
    return 0;
}
 */

/* //push_back
int main()
{
    vector<int>vec;
    cout<<"size="<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"After push back size="<<vec.size()<<endl;
    for(int val:vec)
        cout<<val<<endl;
    3
    return 0;
} */

/* //pop_back
int main()
{
    vector<int>vec;
    cout<<"size="<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"After push back size="<<vec.size()<<endl;
    vec.pop_back();  //45 going to pop
    cout<<"After pop back size="<<vec.size()<<endl;

    for(int val:vec)
        cout<<val<<endl;
    
    return 0;
} */

//front,back and at (returns values at front,back and at specific index) 
int main()
{
    vector<int>vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);
    cout<<"Front element "<<vec.front()<<endl;
    cout<<"Back element "<<vec.back()<<endl;
    cout<<"Element At 3 "<<vec.at(3)<<endl;
    
    return 0;
}

