#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li, li2;
    for (int i = 0; i < 5; i++)
    {
        li.push_back(i);
    }
    for (int i = 10; i < 15; i++)
    {
        li2.push_back(i);
    }
    li.merge(li2);
    for (auto it : li)
        cout << it << " ";
    cout << endl;
    // for (auto it: li2)
    //     cout << it << " ";
    // cout << endl;
}