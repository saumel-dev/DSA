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
    string s;
    s = str1.substr(0, 5); // gets a substring of the string
    // s.substr(start, length) // gets a substring of the string
    cout << s << endl;
    // s.find() returns the index of the first occurrence of a substring in the string
    cout << str1.find("World") << endl; // prints the index of the first occurrence of "World"
    // if the substring is not found, find() returns string::npos
    cout << str1.find("Python") << endl; // prints string::npos since "Python" is not found in the string
    s.erase(0, 5); // erases a substring from the string
    s.insert(0, "Hello"); // inserts a substring into the string
    s.replace(0, 5, "Hi"); // replaces a substring in the string
    // s.replace(start, length, new_string) // replaces a substring in the string
    s.compare("Hi") == 0 ? cout << "Strings are equal" << endl : cout << "Strings are not equal" << endl; // compares two strings
    // isDigit('5') ? cout << "Character is a digit" << endl : cout << "Character is not a digit" << endl; // checks if a character is a digit
    // isAlpha('A') ? cout << "Character is an alphabet" << endl : cout << "Character is not an alphabet" << endl; // checks if a character is an alphabet
    // isLower('a') ? cout << "Character is a lowercase alphabet" << endl : cout << "Character is not a lowercase alphabet" << endl; // checks if a character is a lowercase alphabet
    // isUpper('A') ? cout << "Character is an uppercase alphabet" << endl : cout << "Character is not an uppercase alphabet" << endl; // checks if a character is an uppercase alphabet
    // string s[] = "Hello, World!"; // creates a string, it creates a \0 null character at the end of the string, which is not needed in C++ strings
    return 0;
}