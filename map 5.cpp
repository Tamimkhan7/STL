#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp, m;
    mp[1] = 10;
    mp[2] = 20;
    mp[3] = 30;
    mp[4] = 40;
    mp[5] = 50;

    m[6] = 60;
    m[7] = 70;
    m[8] = 80;
    // useing = operator
    // m = mp; // useing = operator, we can use everytime in the operator of every function, like that if else etc

    // for (auto it : m)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // using swap function in the program

    mp.swap(m); // jeita bracket ar bitore thakbe oitay bahirer value ta cole asbe

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}