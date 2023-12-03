#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    // li.push_front(4); // using push.front function
    // li.push_front(5);

    // li.pop_front();//use first value deleted
    // li.pop_back();//use last value deleted

    for (auto it : li)
    {
        cout << it << " ";
    }
    cout << endl;
    int len = li.size();
    cout << len << endl;
    /// cout<<li.front()<<endl;//first value print
    // cout<<li.back()<<endl;//last value print
    return 0;
}
/*list<int>::iterator it;
for (it = li.begin(); it!= .end(); it++)
{
    cout<<*it<<" ";
}*/
