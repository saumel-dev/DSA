#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> v = {1, 5, 3, 2, 5, 4};
    lower_bound(v.begin(), v.end(), 3); // Finds the first position where the value 3 can be inserted in the sorted vector while maintaining the order
    // if output is v.end() then element is not found in the vector otherwise it will
    cout << *lower_bound(v.begin(), v.end(), 3) << endl; // Output: 3
    // time complexity of lower_bound() is O(logn) in average case and O(logn) in worst case.

    upper_bound(v.begin(), v.end(), 3); // Finds the first position where the value 3 can be inserted in the sorted vector while maintaining the order
    // if output is v.end() then element is not found in the vector otherwise it will
    cout << *upper_bound(v.begin(), v.end(), 3) << endl; // Output: 4
    // time complexity of upper_bound() is O(logn) in average case and O(logn) in worst case.
}

// lower_bound() vs upper_bound()
// lower_bound() returns an iterator pointing to the first element in the sorted range that is not less than (i.e., greater or equal to) the specified value, while upper_bound() returns an iterator pointing to the first element in the sorted range that is greater than the specified value. In other words, lower_bound() finds the position where the value can be inserted without violating the order, while upper_bound() finds the position where the value can be inserted while maintaining the order.
// general example of lower_bound() and upper_bound()
// lower_bound() and upper_bound() are used to find the position of a specific value in a sorted range. For example, if we have a sorted vector of integers and we want to find the position of the value 3, we can use lower_bound() to find the first position where 3 can be inserted without violating the order, and upper_bound() to find the first position where 3 can be inserted while maintaining the order. If 3 is already present in the vector, lower_bound() will return an iterator pointing to the first occurrence of 3, while upper_bound() will return an iterator pointing to the position after the last occurrence of 3.
// suppose we have a vector v = {1, 2, 3, 3, 4, 5} and we want to find the position of the value 3. lower_bound(v.begin(), v.end(), 3) will return an iterator pointing to the first occurrence of 3 (i.e., v[2]), while upper_bound(v.begin(), v.end(), 3) will return an iterator pointing to the position after the last occurrence of 3 (i.e., v[4]).