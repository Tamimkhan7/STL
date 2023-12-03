#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p(50, 20);
    pair<int, int> p2(80, 30);
    p.swap(p2);
    cout << p2.first << " " << p2.second << endl;
}
