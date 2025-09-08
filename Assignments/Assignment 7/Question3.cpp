//define a function to print a substring from start index to end index .define function in such a way that if 
//second argument is not provided,string will print till the last possible index. 
#include<iostream>
#include<string.h>
using namespace std;

void printSubstring(char,int,int);

void printSubstring(char str[],int startIndex,int endIndex=-1)
{
    if(endIndex==-1)
        endIndex=strlen(str);
    for(int i=startIndex;i<endIndex;i++)
        cout<<str[i];
}

int main()
{
    char str[]="Mysirg Education Services";
    printSubstring(str,3,14);
    cout<<endl;
    return 0;
}