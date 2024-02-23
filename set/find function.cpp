#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);

    set<int>::iterator it;
    it = s.find(15);

    if (it != s.end())
        cout << "Find" << endl;
    else
        cout << "Not find" << endl;
}