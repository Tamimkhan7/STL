#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;   // map declaration
    mp.insert({1, 10}); // map ar value initiliazation
    mp.insert({2, 20});
    mp[5] = 50; // ai vabe oh value initiliazation kora jay
    mp.insert({3, 30});
    mp.insert({4, 40});
    cout << mp.size() << endl; // using size function of the code
    for (int i = 1; i <= mp.size(); i++)
    {
        cout << mp[i] << endl; // all value print of the code
    }
    // iterator use kore value print kora
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}