#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q; // priority queue declaration

    q.push(1); // priority queue value initialization
    q.push(4);
    q.push(3);
    q.push(2); // priority queue modde boro theke choto akare man thake
               // check_queue if queue is empty print empty queue otherwise print not empty queue
    if (q.empty())
        cout << "Empty priority queue" << endl;
    else
        cout << "Not empty priority queue" << endl;
}