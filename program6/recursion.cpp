/*
Simple program to read in string and check if its a palindrome 
Author: Ethan Dural
12/13/2022
Dr.V
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>

using namespace std;

//recursive function that checks for palindrome

bool isPalindrome(string str) {
//if string is one character is palindrome
    if(str.empty() || str.length() == 1) {
        return true;
    }

//check if first and last characters same 
//and call function on string w/out 1st and last char
   if (str[0] == str[str.length() - 1]) {
    return isPalindrome(str.substr(1, str.length() - 2));
   }
else {
    return false;
}
}

int main() {
//string variable
    string str;

//try and catch for runtime
try {
    cout << "Enter a string: ";
    cin >> str;
//if string is empty error 
    if(str.empty())
        throw runtime_error("The string cannot be empty");
//checks if string is palindrome 
    if(isPalindrome(str))
        cout << "The string is a palindrome" << endl;
    else 
        cout << "The string is not a palindrome" << endl; 
}
catch(const char* msg) {
    cout << msg << endl;
}
return 0;

}