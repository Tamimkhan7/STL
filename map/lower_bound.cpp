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
    int a, b, n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        mp.insert(pair<int, int>(a, b));
    }
    for (auto it : mp)
        cout << it.first << " " << it.second << endl;
    cout << endl;

    auto it = mp.lower_bound(30); // lower_bound always tader key niye kaj korbe, if oi index present na thake tahole tar maximum index print korbe jodi tao na thake tahole end value ke indicate korbe and akta garbage value print kore dibe
    cout << (*it).first << " " << (*it).second << endl;

    auto it1 = mp.upper_bound(1); // upper bound always kaj kore tar max value niye ami jei value dei na keno se tar max value niye kaj kore, ar amar key tai max hoye jay ba tar besi hoye jay se kkhette maxi key ke indicate korbe and akta garbage value print korbe
    cout << (*it1).first << " " << (*it1).second << endl;
}
