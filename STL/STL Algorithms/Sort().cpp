#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 5, 3, 2, 4};
    sort(v.begin(), v.end()); // Sorts the vector in ascending order

    // STL ranges are usually [first, last) → first included, last excluded.
    sort(v.begin(), v.begin() + 3); // Sorts the first three elements of the vector

    sort(v.begin() + 1, v.end()); // Sorts the elements from the second element to the end of the vector

    // time complexity of sort() is O(nlogn) in average case and O(n^2) in worst case.

    sort(v.begin(), v.end(), greater<int>()); // Sorts the vector in descending order

    sort(v.begin(), v.end(), [](int a, int b)
         { return a % 2 < b % 2; }); // Sorts the vector based on the remainder when divided by 2

    vector<pair<int, int>> vp = {{1, 2}, {3, 1}, {2, 3}};
    sort(vp.begin(), vp.end(), [](pair<int, int> a, pair<int, int> b)
    {
        if (a.first == b.first)
            return a.second < b.second; // If first elements are equal, sort by second element
        return a.first < b.first;       // Otherwise, sort by first element
    });
}

/*
sort() rearranges the elements in the supplied range.

STL ranges are usually [first, last) → first included, last excluded.


*/