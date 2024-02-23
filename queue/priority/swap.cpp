#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q, q1;
    q.push(1);
    q.push(4);
    q.push(3);
    q.push(2);

    q1.push(10);
    q1.push(11);
    q1.push(12);
    q1.push(13);

    swap(q, q1);

    while (q.size() > 0)
    {
        cout << q.top() << " ";
        q.pop();
    }
}