#include <bits/stdc++.h>
using namespace std;
int main()
{
    // LIFO means-list in first out

    stack<int> st; // first stack then variable then once name

    st.push(1); // value initialized from the user
    st.push(2);
    st.push(3);
    st.push(4);

    // // check to the stack whether
    // if (st.empty())
    //     cout << "Empty stack" << endl;
    // else
    //     cout << "Not empty stack" << endl;

    // cout << st.size() << endl; // check the stack size using size function
    //                            // pop function kaj kore sobar age je include hoyece se sobar age delete hobe
    //                            // ar sobar last a je add hoyece se sobar last a delete hobe
    // st.pop();                  // using pop function, delete the last element from the stack

    // cout << st.top() << endl; // check the stack top value using top function

    // cout << "print the stack all value" << endl;

    while (st.size() > 0)
    {
        cout << st.top() << endl;
        st.pop();
    }
}