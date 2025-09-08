#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Employee
{   
    private:
        int empid;
        string name;
        float salary;
    public:
        Employee(int i, string n, float s) : empid(i), name(n), salary(s){}
        float getSalary()
        {
            return salary;
        }
        void printEmployee()
        {
            cout<<empid<<" "<<name<<" "<<salary<<endl; 
        }
};
class compareSalary  //functor
{
    public:
        bool operator()(Employee &e1, Employee &e2)  
        {
            e1.getSalary() >e2.getSalary(); 
        }
};

int main()
{
    priority_queue <Employee, vector<Employee>, compareSalary> pq1;
    pq1.push(*(new Employee(1,"Dilip",45000))); 
    pq1.push(*(new Employee(2,"Amol",55000))); 
    pq1.push(*(new Employee(1,"Manoj",65000))); 
    pq1.push(*(new Employee(1,"Sairam",90000))); 
    Employee emp=pq1.top();
    emp.printEmployee();
    return 0;

   /*  
    priority_queue <int, vector<int>> pq1;
    pq1.push(20); 
    pq1.push(50);//larger the value of element larger the priority of the element 
    pq1.push(30);
    pq1.push(10);
    cout<<pq1.top()<<endl;
   */

   /*  
    priority_queue <string, vector<string>> pq1;
    pq1.push("Mumbai"); 
    pq1.push("Delhi"); 
    pq1.push("Ujjain");
    pq1.push("Jabalpur");
    cout<<pq1.top()<<endl; 
   */
    return 0;
}