#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q, p;
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    // jeita swap korbo oita age cole jabe ar jeitar value swap korteci oita brackt ar modde thake
    q.swap(p); // useing swap function in the code

    while (q.size() > 0)
    {
        cout << q.front() << " ";
        q.pop();
    }
}