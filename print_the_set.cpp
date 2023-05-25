#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    set<int>se;
    for(int i=2;i<=30;i++)
    {
        se.insert(i);
    }
    for(int i=0;i<se.size();i++)
    {
        cout<<*next(se.begin(),i)<< " ";
    }
    cout<<endl;
}