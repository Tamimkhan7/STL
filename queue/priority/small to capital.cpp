#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(1);
    q.push(4);
    q.push(3);
    q.push(2);

    while (q.size() > 0)
    {
        cout << q.top() << " ";
        q.pop();
    }
}