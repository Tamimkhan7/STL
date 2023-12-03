#include <bits/stdc++.h>
using namespace std;
int main ()
{
    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    li.pop_front();//use first value deleted
    li.pop_back();//use last value deleted

    for (auto it:li)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}
