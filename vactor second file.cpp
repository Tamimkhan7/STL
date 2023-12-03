#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;  // vector decleration
    v.push_back(1); // value initialization
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    // loop ar maddome vector print
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // pop_back function ar sahajje vactor ar last value ta deteled kore dite pari and check it
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // vector ar maximum value check
    cout << v.max_size() << endl;
    // resize of the vector size to 4
    v.resize(2);
    // printfs the vector size after the resize
    cout << v.size() << endl;
    // vactor ar jekono value ke deleted kora jay ai function ar maddome
    v.erase(v.begin() + 2);
    // prints kore check korlam prints holo kina

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
