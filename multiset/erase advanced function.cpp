#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms{1, 2, 3, 4};
    // ms.erase(3); // that means indicate their value and deleted it
    auto it = ms.begin();
    advance(it, 1); // that means indicate their index
    ms.erase(it);

    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
}