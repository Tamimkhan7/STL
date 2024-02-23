#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    list<int>::iterator it, it2;
    it = li.begin();
    // it2 = li.begin();
    advance(it2, 2); // ai function kaj kore je koy number index deleted korte cacci
    li.erase(it, it2);
    for (auto it : li)
    {
        cout << it << endl;
    }
}