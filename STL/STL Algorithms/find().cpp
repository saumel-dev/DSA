#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> v = {1, 5, 3, 2, 4};
    
    find(v.begin(), v.end(), 3); // Searches for the value 3 in the vector
    // if output is v.end() then element is not found in the vector otherwise it will return the iterator pointing to the first occurrence of the value 3 in the vector. else it will return the iterator pointing to the first occurrence of the value 3 in the vector.
    int res = *find(v.begin(), v.end(), 3);
    cout << res << endl; // Output: 3
}