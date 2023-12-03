#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms{1, 1, 5, 3, 3, 4, 5, 6}; // that means multiset always value store sorted akare

    // auto it = ms.end(); // kokhono erase korte picon theke ase na, always smne theke move kore
    // auto it = ms.begin();
    // advance(it, 2);
    // ms.erase(it);
    for (auto it : ms)
        cout << it << " ";
    cout << endl;

    // // find function

    // auto it2 = ms.find(3);
    // if (it2 == ms.end())
    //     cout << "Not find" << endl;
    // else
    //     cout << "find" << endl;

    // another formula used for find function
    auto it2 = ms.find(5); // find the value from the multiset and deleted it
    ms.erase(it2);
    for (auto it2 : ms)
        cout << it2 << " ";
    cout << endl;
}