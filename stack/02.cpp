#include <bits/stdc++.h>
using namespace std;
int main()
{ // LIFO- list in first out
    stack<string> st;
    st.push("hello");
    st.push("I'm Tamim khan");
    st.push("best boy");

    cout << st.size() << endl;

    cout << "stack all value print" << endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}