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
    map<int, int> mp;
    int a, b, n;
    cin >> n; // size of the map, how to time input from user that the means

    for (int i = 0; i < n; i++)
    {
        // a input ney key ba index and b input ney index ar value
        cin >> a >> b;
        mp.insert(pair<int, int>(a, b));
    }
    for (auto it : mp)
        cout << it.first << " " << it.second << endl;

    return 0;
}