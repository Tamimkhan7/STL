#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int, greater<int>> s; // set decleration
    s.insert(1);              // insert the value of the set
    s.insert(2);
    s.insert(3);
    s.insert(4);

    s.clear(); // using clear function
               // using empty function
    if (s.empty())
        cout << "empty" << endl;
    else
        cout << "Not empty" << endl;
}