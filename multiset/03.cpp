#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ml;
    ml.insert(1);
    ml.insert(1);
    ml.insert(2);
    ml.insert(2);
    ml.insert(3);
    ml.insert(3);

    for (auto it : ml)
    {
        cout << it << " ";
    }
    cout << endl;

    auto it = (ml.begin());
    advance(it, 3);
    ml.erase(it);
    for (auto it : ml)
    {
        cout << it << " ";
    }
    cout << endl;
}