#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int, greater<int>> s; // set decleration
    s.insert(1);              // insert the value of the set
    s.insert(2);
    s.insert(3);
    s.insert(4);

    cout << s.size() << endl; // cout the set value

    cout << s.max_size() << endl; // cout the maximum value of the set
                                  //                               // print all the value in the set
                                  // for (auto it : s)
                                  // {
                                  //     cout << it << " ";
                                  // }
                                  // cout << endl;
                                  // that is another way to print the set value
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}