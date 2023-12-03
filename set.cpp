#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;

    s.insert(1);
    s.insert(10);
    s.insert(3);
    s.insert(9);
    s.insert(4);
    s.insert(6);
     int c = s.count(2);
    cout<<c<<<endl;
    
s.erase(10);//check the erase function


    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    for(auto it : s){//value akhn ascending order a print korbe
     cout<<it<<" ";
    }
    cout<<endl;

    set<int, greater<int>>ss;

    ss.insert(1);
    ss.insert(10);
    ss.insert(3);
    ss.insert(9);
    ss.insert(4);
    ss.insert(6);
    ss.erase(6);

    cout<<ss.size()<<endl;
    cout<<ss.max_size()<<endl;
    for(auto it : ss){//value akhn descending order a print korbe
     cout<<it<<" ";
    }
    cout<<endl;

    s.clear();//check the clear function
   // ss.clear();

    if(s.empty())cout<<"Empty"<<endl;
    else cout<<"Not empty"<<endl;

    
    if(ss.empty())cout<<"Empty"<<endl;
    else cout<<"Not empty"<<endl;

   
    
}