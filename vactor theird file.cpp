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
    v.push_back(6);


//loop ar maddome vector print
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

//vactor ar jekono value ke deleted kora jay ai function ar maddome
    v.erase(v.begin()+3,v.end());
//prints kore check korlam prints holo kina
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //using insert function//erase function ar moto onekta kaj kore
    v.insert(v.begin()+1,2,5);//akta value insert kora jay onek gula value oh insert kora jay
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+1,2);//akta value insert korlam
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

}
