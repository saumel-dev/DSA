#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> v(5);
    fill(v.begin(), v.end(), 10); // Fills the vector with the value 10
    // STL ranges are usually [first, last) → first included, last excluded.

    iota(v.begin(), v.end(), 1); // Fills the vector with sequentially increasing values starting from 1

    // fill vs iota
    // fill() is used to assign a specific value to all elements in a range, while
    // iota() is used to assign sequentially increasing values to elements in a range, starting from a specified value. fill() is useful when you want to initialize or reset a range of elements to a specific value, while iota() is useful when you want to generate a sequence of values in a range.
}