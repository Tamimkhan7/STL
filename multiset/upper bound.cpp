#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms{1, 2, 3, 4, 5, 6, 6, 8, 8, 9};
    for (auto it : ms)
        cout << it << " ";
    cout << endl;

    auto it = ms.upper_bound(6); // that means we are print the lower value of the indicate position
    cout << *it << endl;
    // we are print of the indicate index and after the all value print the console
    for (auto i = it; i != ms.end(); i++)
        cout << *i << " ";
    cout << endl;

    auto it1 = ms.upper_bound(20); // that is not present of the multiset then access the maximum value of the multiset
    cout << *it1 << endl;
}