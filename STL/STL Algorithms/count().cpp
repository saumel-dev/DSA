#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> v = {1, 5, 3, 2, 4};
    count(v.begin(), v.end(), 3); // Counts the number of occurrences of the value 3 in the vector
    // if output is 0 then element is not found in the vector otherwise it will return the number of occurrences of the value 3 in the vector.
    int res = count(v.begin(), v.end(), 3);
    cout << res << endl; // Output: 1
    // time complexity of count() is O(n) in average case and O(n) in worst case.
}