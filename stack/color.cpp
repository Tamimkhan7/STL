#include <bits/stdc++.h>
using namespace std;
void color(stack<string> st) // function a value pass korle variable type and variable name and ki doroner stl use korci oita pass korte hobe
{
    while (st.size() > 0)
    {
        cout << st.top() << endl;
        st.pop();
    }
}
int main()
{
    stack<string> st;
    st.push("Orange");
    st.push("Yellow");
    st.push("Green");
    st.push("Red");

    cout << st.size() << endl;
    cout << "Print all the stack values" << endl;
    color(st);

    st.pop();

    cout << "final stack values" << endl;
    color(st);
    return 0;
}