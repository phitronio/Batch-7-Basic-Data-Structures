#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40,20,20,70};
    // list<int> l2 = {100,200};
    // vector<int> v = {2,3,4};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(),l.end());

    // l.push_back(40);
    // l.push_front(100);

    // l.pop_back();
    // l.pop_back();
    // l.pop_front();

    //l.insert(next(l.begin(),2), v.begin(),v.end());
    // l.erase(next(l.begin(),2), next(l.begin(),5));
    // cout << *next(l.begin(),1);

    // replace(l.begin(), l.end(),20,100);

    auto it = find(l.begin(), l.end(), 20);
    if(it == l.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    for(int val : l)
    {
        cout << val << endl;
    }
    return 0;
}