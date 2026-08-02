#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int> v = {1, 5, 3, 2, 4};
    stable_sort(v.begin(), v.end()); // Sorts the vector in ascending order while maintaining the relative order of equal elements

    // STL ranges are usually [first, last) → first included, last excluded.
    stable_sort(v.begin(), v.begin() + 3); // Sorts the first three elements of the vector while maintaining the relative order of equal elements

    stable_sort(v.begin() + 1, v.end()); // Sorts the elements from the second element to the end of the vector while maintaining the relative order of equal elements

    // time complexity of stable_sort() is O(nlogn) in average case and O(nlogn) in worst case.

    stable_sort(v.begin(), v.end(), greater<int>()); // Sorts the vector in descending order while maintaining the relative order of equal elements

    stable_sort(v.begin(), v.end(), [](int a, int b)
         { return a % 2 < b % 2; }); // Sorts the vector based on the remainder when divided by 2 while maintaining the relative order of equal elements

    vector<pair<int, int>> vp = {{1, 2}, {3, 1}, {2, 3}};
    stable_sort(vp.begin(), vp.end(), [](pair<int, int> a, pair<int, int> b)
    {
        if (a.first == b.first)
            return a.second < b.second; // If first elements are equal, sort by second element while maintaining the relative order of equal elements
        return a.first < b.first;       // Otherwise, sort by first element
    });

    // example of stable_sort() 
    // stable_sort() is a sorting algorithm that maintains the relative order of equal elements in the sorted output. This means that if two elements are considered equal according to the sorting criteria, their order will remain the same as it was in the original input. for example, if we have a list of students with the same grade, stable_sort() will ensure that their order in the sorted list is the same as their order in the original list.
    // sort() vs stable_sort()
    // sort() is a general-purpose sorting algorithm that does not guarantee the preservation of the relative order of equal elements. It may rearrange equal elements in the sorted output, which can lead to unexpected results in certain scenarios. On the other hand, stable_sort() is specifically designed to maintain the relative order of equal elements, making it suitable for situations where the order of equal elements matters.
}