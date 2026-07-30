#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p1; // creates a pair of int and string
    p1.first = 10; // assigns value to the first element of the pair
    p1.second = "Hello"; // assigns value to the second element of the pair
    cout << p1.first << " " << p1.second << endl; // prints the values of the pair

    pair<int, string> p2(20, "World"); // creates a pair with given values
    cout << p2.first << " " << p2.second << endl; // prints the values of the pair

    pair<int, string> p3 = make_pair(30, "C++"); // creates a pair using make_pair function
    p3.first = 40; // modifies the first element of the pair
    p3.second = "Programming"; // modifies the second element of the pair
    cout << p3.first << " " << p3.second << endl; // prints the values of the pair

    vector<pair<int, string>> v; // creates a vector of pairs
    v.push_back(make_pair(50, "Vector")); // adds a pair to the vector
    v.push_back(make_pair(60, "STL")); // adds another pair to the vector
    for(auto u : v) cout << u.first << " " << u.second << endl; // prints the values of the pairs in the vector
    return 0;
}