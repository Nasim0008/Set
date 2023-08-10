#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    set<int>se;
    int value =3;
    for(int i=0;i<n;i++)
    {
        value+=3;
        se.insert(value);
    }

    for(auto u:se)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    for(int i=0;i<se.size();i++)
    {
        cout<<*next(se.begin(),i)<<" ";
    }
    cout<<endl;

    for(auto u = se.begin();u!=se.end();u++)
    {
        cout<<*u<< " ";
    }
    cout<<endl;
}