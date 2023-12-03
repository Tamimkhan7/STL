#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;//vector decleration
    v1.push_back(1);//value initialization
    v1.push_back(5);
    v1.push_back(3);
    v1.push_back(70);
    v1.push_back(100);
    v1.push_back(55);
    v1.push_back(11);
    v1.push_back(85);
    v1.push_back(96);
    //sorting of the given value

    sort(v1.begin(),v1.end());
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

//reverse of the given value

    reverse(v1.begin(),v1.end());
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;


}
