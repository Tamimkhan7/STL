#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;  // set decleration
    s.insert(1); // insert the value of the set
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    // we use erase function of the set
    // s.erase(2);
    // another formula for the erase function

    set<int>::iterator it;
    it = s.begin();
    advance(it, 2);
    s.erase(it);

    for (auto it : s)
        cout << it << " ";
    cout << endl;
}