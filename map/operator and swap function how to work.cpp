#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    map<int, int> mp, mp1;
    mp.insert({1, 10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({4, 40});
    mp.insert({5, 50});

    mp1.insert({6, 60});
    mp1.insert({7, 20});
    mp1.insert({8, 30});
    mp1.insert({9, 40});

    // how to work = operator tai dekhano holo
    // mp1 = mp;
    // for (auto it : mp1)
    //     cout << it.first << " " << it.second << endl;

    cout << endl;
    // how to work swap operator of the program

    mp.swap(mp1); // aktar value onno tay cole jabe if using swap function
    for (auto it : mp)
        cout << it.first << " " << it.second << endl;

    return 0;
}