#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        q.push(p);
    }
    while (q.size() > 0)
    {
        cout << q.front() << endl;
        q.pop();
    }
}