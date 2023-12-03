#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q, q1;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    // back holo sobar last value ar front holo sobar first value
    cout << q.back() << endl;  // check the queue is back value
    cout << q.front() << endl; // check the queue is front value
    q1.push(5);
    q1.push(6);
    q1.push(7);
    q1.push(8);

    swap(q1, q); // swap korci two ta queue ar sathe jeita first thakbe oita tay value cole jabe jeita pore thakbe oitar value
    while (q1.size() > 0)
    {
        cout << q1.front() << " ";
        q1.pop();
    }
}