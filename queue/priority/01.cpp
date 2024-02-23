#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q; // priority queue declaration

    q.push(1); // priority queue value initialization
    q.push(4);
    q.push(3);
    q.push(2); // priority queue modde boro theke choto akare man thake

    cout << q.size() << endl; // check the size of the queue
    q.pop();                  // check the first value and delete it
    // check the all value in the program
    while (q.size() > 0)
    {
        cout << q.top() << " ";
        q.pop();
    }
}