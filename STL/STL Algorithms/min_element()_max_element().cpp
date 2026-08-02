#include <bits/stdc++.h>
using namespace std;    
int main()
{
    vector<int> v = {1, 5, 3, 2, 4};
    min_element(v.begin(), v.end()); // Finds the minimum element in the vector
    // if output is v.end() then element is not found in the vector otherwise it will return the iterator pointing to the minimum element in the vector. else it will return the iterator pointing to the minimum element in the vector.
    int res = *min_element(v.begin(), v.end());
    cout << res << endl; // Output: 1
    // time complexity of min_element() is O(n) in average case and O(n) in worst case.

    // *min_element(v.begin(), v.end()) returns the minimum element in the vector. It is equivalent to *min_element(v.begin(), v.end()).
    // *min_element(v.begin(), v.end()) - v.begin() returns the index of the minimum element in the vector. It is equivalent to *min_element(v.begin(), v.end()) - v.begin().
    int index = min_element(v.begin(), v.end()) - v.begin();
    cout << index << endl; // Output: 0

    max_element(v.begin(), v.end()); // Finds the maximum element in the vector
    // if output is v.end() then element is not found in the vector otherwise it will
    int res2 = *max_element(v.begin(), v.end());
    cout << res2 << endl; // Output: 5
    // time complexity of max_element() is O(n) in average case and O(n) in worst case.
}