#include<iostream>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.size() - 1;

    while(left < right) {
        if(str[left] == str[right]) {
            left++;
            right--;
        }
        else {
            return 0;
        }

        return 1;
    }
}

void isPalindrome1(string s) {
    int n = s.size();
    string str = s;
    int start = 0;
    int end = n - 1;

    while(start < end) {
        char temp;
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    if(s == str)
        cout<<"palindrome !";
    else
        cout<<"Not a palindrome !";

}

void fun1() {

    string str;
    cout<<"Enter a string :";
    getline(cin, str);

    if(isPalindrome(str)) 
        cout<<"Palindrome";
    else 
        cout<<"Not a palindrome";

}

void fun2() {

    string str;
    cout<<"Enter a string :";
    getline(cin, str);

    isPalindrome1(str);
}



int main() {
    fun2();
    return 0;
}