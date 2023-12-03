#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    mp[1] = 100;
    mp[2] = 80;
    mp[3] = 90;
    mp[4] = 50;
    mp[5] = 30;

    mp.erase(2); // useing erase function of the code
    for (auto it : mp)
    {
        // print all value of the code
        cout << it.first << " " << it.second << endl;
    }

    int c = mp.count(3); // using count function, count function ta value ber kore dibe if value thake tahole 1 dibe otherwise 0 dibe, value gula unique thakbe
    cout << c << endl;

    // Using find function of the program

    auto it = mp.find(20); // must be use of key in the bracket
    if (it != mp.end())
        cout << "Find" << endl;
    else
        cout << "Not find" << endl;

    // lower_bound and upper_bound using in the program and check all value

    // lower_bound check,
    //  lower bound basically oder index check kore and oi index ar value point kore, arh oi index jodi na thake tahole ar kace kace after value ta indecated kore

    auto it = mp.lower_bound(3);
    cout << (*it).first << " " << (*it).second << endl;

    // useing upper_bound in the program, this function working in the program, if we can of any value that's we have mention, then we can count that the value of given index. if we take  big than our given index, then we should break the code

    auto it = mp.upper_bound(4);
    cout << (*it).first << " " << (*it).second << endl;
}
