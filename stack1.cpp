#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s; // stack declaration
    s.push(1);    // value initilaization
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.size() << endl; // check the stack size of the code
    if (s.empty())            // check the empty function of the code, whether file is empty
        cout << "Empty file" << endl;
    else
        cout << "Not empty file" << endl;
    // check the top value of the code
    cout << s.top() << endl; // top hole sobar nicer ta ai file ta hoy LIFO

    // s.pop(); // using pop function in the code
    // s.pop();

    cout << s.top() << endl;
    while (s.empty() == false) // 4 3 2 1  in the code output
    {
        cout << s.top() << " ";
        s.pop();
    }
}