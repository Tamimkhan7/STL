#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;   // map declaration
    mp.insert({1, 10}); // map ar value initiliazation
    mp.insert({2, 20});
    mp[5] = 50; // ai vabe oh value initiliazation kora jay
    mp.insert({3, 30});
    mp.insert({4, 40});

   // mp.clear();                                 // used clear function in the program
    map<int, int>::iterator it;                 // useing iterator
    for (it = mp.begin(); it != mp.end(); it++) // begin and end function useing in the code
    {
        cout << it->first << " " << it->second << endl;
    }

    cout << mp.max_size() << endl; // used max function of the code
    if (mp.empty())
        cout << "Empty file" << endl;
    else
        cout << "Not empty file" << endl;

        
}