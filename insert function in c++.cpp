#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    li.insert(li.begin(), 5);
    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    int len = li.size();
    cout << len << endl;

    return 0;
}
