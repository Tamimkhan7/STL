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
    // map value always pair hisabe thakbes
    map<int, int> mp; // first thakbe key othoba index second ta thakbe value
    // value insert korteci
    mp.insert({1, 10}); // map ar value insert korar somoy must be first paranthesis ar modde second parenthesis use korte hobe
    mp.insert({2, 10});
    // value always sort hoye jabe tobe sort value onujayi hobe na sort hobe index onujayi
    mp.insert({4, 30});
    mp.insert({3, 20});

    for (auto it : mp)
        cout << it.first << " " << it.second << " " << endl; // first means tader index and second means tader value print kora hocce

    // print korar jonno second formula
    cout << endl;
    // firsly we were declare iterator then print the all value
    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}