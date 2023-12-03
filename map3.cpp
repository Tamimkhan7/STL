#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> mp;
    mp.insert({3, "Mannan"}); // index holo interger and value holo string
    mp.insert({1, "Tamim"});u
    mp.insert({2, "Hannan"});
    mp.insert({4, "sahin"});

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    // map<string, int> mp;
    // mp.insert({"Mannan", 3}); // index holo interger and value holo string
    // mp.insert({"Tamim", 1});
    // mp.insert({"Hannan", 2});
    // mp.insert({"sahin", 4});

    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
}