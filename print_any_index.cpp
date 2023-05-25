#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>se;
    for(int i=2;i<=30;i++)
    {
        se.insert(i);
    }
    cout<< *next(se.begin(),5)<<endl;
}