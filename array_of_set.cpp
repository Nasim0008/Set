#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    set<int> se[n + 3];
    int value = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            value += 4;
            se[i].insert(value);
        }
    }

    for (auto u : se)
    {
        for (auto x : u)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}