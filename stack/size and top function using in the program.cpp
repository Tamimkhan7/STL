#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> st;
    st.push("Res");
    st.push("Oranges");
    st.push("blue");

    cout << "Size of the stack : ";
    int size = st.size();
    cout << size << endl;

    cout<<"stack top elements check in the program : ";
    string top = st.top();
    cout<<top << endl;
}