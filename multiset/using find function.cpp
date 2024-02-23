#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms{1, 1, 2, 2, 3, 4, 5};
    for (auto it : ms)
        cout << it << " ";
    cout << endl;

    auto ps = ms.find(2); // indicated the multiset of the position

    for (auto it = ps; it != ms.end(); it++)
        cout << *it << " ";
    cout << endl;
}