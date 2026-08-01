#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "Hello, World!"; // creates a string
    string s2("C++ Programming");  // creates a string using constructor
    string s3{"STL String"};       // creates a string using initializer list
    cout << str1 << endl;          // prints the string
    cout << str1.size() << endl;   // gets the size of the string
    str1.empty();                  // checks if the string is empty
    cout << str1.empty() << endl;  // prints 0 (false) since the string is not empty
    str1.clear();                  // clears the string 
    cout << str1.empty() << endl;  // prints 1 (true) since the string is now empty
    str1.front();                  // gets the first character of the string
    str1.back();                   // gets the last character of the string
    str1.push_back('!'); // adds a character to the end of the string
    str1.pop_back();    // removes the last character of the string
    str1 += " C++"; // appends a string to the end of the string
    // str1.push_back("STL"); // invalid, push_back expects a single character, not a string
    for(auto c : str1) cout << c << " "; // prints each character of the string
    str1.append(" is powerful"); // appends a string to the end of the string
    
    return 0;
}