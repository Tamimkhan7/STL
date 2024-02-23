#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> p; // queue declaration in the code
    p.push(1);    // value initialization to the code
    p.push(2);
    p.push(3);
    p.push(5);

    cout << p.size() << endl;      // check the size of the code
    cout << p.front() + 1 << endl; // check the front value of the code

    if (p.empty()) // check the code, what is the whether code empty
        cout << "Empty code" << endl;
    else
        cout << "Not empty code" << endl;

    cout << p.back() - 1 << endl; // use back function to the code
    p.pop();                      // using pop function, this funtion work, deleted to the first value in the code
    cout << p.front() << endl;
    // print all the value in the code
    while (p.size() > 0)
    {
        cout << p.front() << " ";
        p.pop();
    }
}