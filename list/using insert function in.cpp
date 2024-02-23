#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;

    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    // normal insert function using the program
    // li.insert(li.begin(), 3);

    list<int>::iterator it;
    it = li.begin();
    advance(it, 1);
    li.insert(it, 7);

    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
}