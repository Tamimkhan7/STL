#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;  // vector initilaziation
    v.push_back(1); // value assain
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int>::iterator it; // iterator initilaziaton
    it = v.begin();           // first value carry
    cout << *it << endl;      // prints  iterator value

    vector<int>::iterator it1; // iterator initilaziaton

    for (it1 = v.begin(); it1 != v.end(); it1++) // loop use kore iterator print
    {
        cout << *it1 << " ";
    }
    cout << endl;
}
