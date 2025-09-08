#include<iostream>
#include<queue>
#include<deque>
using namespace std;
int main()
{
    queue <int,deque<int>> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    cout<<q1.front()<<endl;
    q1.pop();
    cout<<q1.size();
    cout<<endl;
    return 0;
}