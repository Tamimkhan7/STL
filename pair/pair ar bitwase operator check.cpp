#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p(20, 30);
    pair<int, int> p2(20, 20);

    // p and p2 value same hole yes print korbe otherwise no prints korbe

    if (p == p2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    // another formula
    if (p != p2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // another formula another conditation

    if (p >= p2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // another formula another conditation

    if (p <= p2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
