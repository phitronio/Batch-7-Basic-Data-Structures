#include<bits/stdc++.h>
using namespace std;

void rec(int i, int n)
{
    // base case
    if(i>n)
    {
        return;
    }
    rec(i+1,n);
    cout << i << endl;
}

int main()
{
    int n = 5;
    rec(1,n);
    return 0;
}