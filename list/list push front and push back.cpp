#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    li.push_front(4); // using push.front function
    li.push_front(5);

    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
