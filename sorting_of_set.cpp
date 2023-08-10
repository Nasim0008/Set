#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>se;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        se.insert(a);
    }

    vector<int>v;
    v.assign(se.begin(),se.end());
    sort(v.rbegin(),v.rend());

    for(auto u:v)
    {
        cout<<u<<" ";
    }
    cout<<endl;
}