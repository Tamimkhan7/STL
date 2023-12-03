#include <bits/stdc++.h>
using namespace std;
int main ()
{
    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    //li.clear();
    for (auto it:li)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    if (li.empty())cout<<"empty file"<<endl;
    else cout<<"not empty"<<endl;


    return 0;
}

