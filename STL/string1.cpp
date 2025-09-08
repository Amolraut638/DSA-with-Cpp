#include<iostream>
#include<string>
using namespace std;
int main()
{
    char str[]="Amol";
    string s1="Amol";  
    string s2;
    cout<<s1<<endl;

    string :: iterator it;
    for(it=s1.begin(); it!=s1.end(); it++)
        cout<<*it;
    cout<<endl;

    cout<<s1.at(3)<<endl; 
    cout<<s1[2]<<endl;
    cout<<s1.front()<<" "<<s1.back()<<endl;
    cout<<s2.empty()<<endl;
    cout<<s1.length()<<endl;
    s1.append(" Raut");
    cout<<s1<<endl;
    s1.insert(4," Vishnu");
    cout<<s1<<endl;

    s2.insert(0,s1,5,6);
    cout<<s2<<endl;

    cout<<s1.find("Raut")<<endl;
    cout<<(int)s1.find("raut")<<endl; //raut humare string me present nhi hain isliye wo garbage value return karega pr (int) se typecast karne pr -1 return karega
    
    s1.replace(0,4,"AMOL");
    cout<<s1<<endl;
    return 0;
}