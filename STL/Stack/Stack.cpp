#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1); // Pushes the value 1 onto the stack
    st.push(2); // Pushes the value 2 onto the stack
    // time complexity of push() is O(1) in average case and O(1) in worst case.
    cout << st.top() << endl; // Output: 2, returns the top element

    st.pop(); // Removes the top element from the stack
    // time complexity of pop() is O(1) in average case and O(1) in worst case.

    cout << st.top() << endl; // Output: 1, returns the top element

    st.empty(); // Checks if the stack is empty

    st.size(); // Returns the number of elements in the stack
}