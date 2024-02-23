#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<long long int> ml;
    ml.insert(1);
    ml.insert(1);
    ml.insert(2);
    ml.insert(2);
    ml.insert(3);
    ml.insert(3);
    // print taken value usign auto iterator
    for (auto it : ml)
        cout << it << " ";
    cout << endl;
    // size of the multiset
    cout << ml.size() << endl;

    // which value store of the multiset using function
    cout << ml.max_size() << endl;
}