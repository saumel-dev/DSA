#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10); // adds a new element at the end of the vector
    v.push_back(5);
    cout << v.at(0) << " " << v[0] << endl; //gives access to the element
    cout << v.front() << " " << v.back() << endl; //gives access to the front and back element
    v.pop_back(); // removes the last element of the vector
    cout << v.empty() << endl; // returns if the vector is empty or not
    v.push_back(5);
    for(auto u : v) cout << u << " ";
    cout << endl;
    v.clear();
    cout << v.size() << endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(20);
    cout << v.size() << endl;
    cout << v.capacity() << endl; // returns the extra memory allocated
}