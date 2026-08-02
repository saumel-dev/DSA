#include <bits/stdc++.h>
using namespace std;    
int main() 
{
    vector<int> v = {1, 5, 3, 2, 4};
    reverse(v.begin(), v.end()); // Reverses the order of elements in the vector

    // STL ranges are usually [first, last) → first included, last excluded.
    reverse(v.begin(), v.begin() + 3); // Reverses the order of the first three elements of the vector

    reverse(v.begin() + 1, v.end()); // Reverses the order of the elements from the second element to the end of the vector

    // time complexity of reverse() is O(n) in average case and O(n) in worst case.

    vector<pair<int, int>> vp = {{1, 2}, {3, 1}, {2, 3}};
    reverse(vp.begin(), vp.end()); // Reverses the order of elements in the vector of pairs
    
}