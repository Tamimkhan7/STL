#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ml;
    ml.insert(1);
    ml.insert(1);
    ml.insert(2);
    ml.insert(2);
    ml.insert(3);
    ml.insert(3);

    multiset<int>::iterator it;
    for (it = ml.begin(); it != ml.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}