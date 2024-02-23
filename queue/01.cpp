#include <bits/stdc++.h>
using namespace std;
// queue ta holo fifo = first in first out
int main()
{
    queue<int> q; // queue declaration

    q.push(1); // queue value initalization
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.front() << " " << endl; // check the queue front value in the program
    cout << q.size() << endl;         // check the queue size
    // check the queue, whay is empty whather

    if (q.empty())
        cout << "Empty queue" << endl;
    else
        cout << "Not empty queue" << endl;

    while (q.size() > 0)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    // loop ar modde sob value delete hoye gece
    if (q.empty())
        cout << "Empty queue" << endl;
    else
        cout << "Not empty queue" << endl;

    cout << q.size() << endl; // ai khane queue empty
}