#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
   vector<set<int>>v;
    int value = 3;
    for (int i = 0; i < n; i++)
    {
        set<int>se;
        for (int j = 0; j < n; j++)
        {
            value += 4;
          se.insert(value);
        }
        v.push_back(se);
    }

    for (auto u : v)
    {
        for (auto x : u)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}