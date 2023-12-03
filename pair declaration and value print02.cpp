#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p1(10, 50); // another way value initializer
    pair<int, int> p2(p1);
    cout << p2.first << " " << p2.second << endl;
}
