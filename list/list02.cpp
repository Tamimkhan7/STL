#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    list<int>::iterator it;
    it = li.begin();
    // it++;
    advance(it, 2); // ai function kaj kore je koy number index deleted korte cacci
    li.erase(it);
    for (auto it : li)
    {
        cout << it << endl;
    }
}