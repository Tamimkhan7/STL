#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;//vector decleration
    v.push_back(1);//value initialization
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(5);

    cout<<v[0]<<" ";//vector print
    cout<<v[1]<<endl;
    //cout<<v[2]<<endl;

    cout<<v.at(0)<<" ";//vactor printf
    cout<<v.at(1)<<endl;

    cout<<v.size()<<endl;//size of vector
//loop ar maddome vector print
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.front()<<endl;//vactor ar first value
    cout<<v.back()<<endl;//vactor ar last value
    v.clear();//vactor clear function
    //check vactor clear holo kina
    cout<<v.size()<<endl;
    //vactor empty kina check
    if(v.empty())cout<<"Empty"<<endl;
    else cout<<"Not empty"<<endl;
}
