#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto p = v.begin();
    int c = count(v.begin(), v.end(), *p);
    cout << c << endl;
    // p++;
}