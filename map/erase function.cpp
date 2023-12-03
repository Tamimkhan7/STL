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
    // all index value one time thakbe alada ar thakbe na
    map<int, int> mp;
    mp.insert({1, 10});
    // mp.insert({1, 50});
    mp.insert({2, 10});
    mp.insert({4, 30});
    mp.insert({3, 20});
    // akta value erase korte caile aktaii index jei index ta deleted korte cacci oita dile hoye jabe
    // mp.erase(1); // erase funciton korar jonno parameter ar modde just index ta diye dile oi value ta deleted hoye jabe

    // another way te erase kora jay

    // auto it = mp.find(2); // find function ar kaj holo index khoja index ace kina jodi thake tahole oi index ke mention kore ar baki ta porer index ar aj projnto mention kore oi projnto kaj korar jonno bole
    // auto it1 = mp.find(4);
    // mp.erase(it, it1);
    // count function kaj kore kore value ta koybar ace tar jonno
    int cnt = mp.count(1);
    cout << cnt << endl;
    for (auto it : mp)
        cout << it.first << " " << it.second << " " << endl; // first means tader index and second means tader value print kora hocce
}