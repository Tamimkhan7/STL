#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main ()
{
    stack<string>s;
    s.push("tamim");
    s.push("Pulok");
    s.push("Nayon");

    while(!s.empty())
    {
        string x;
        x = s.top();
        cout<<x<<endl;
        s.pop();
    }

    return 0;
}
