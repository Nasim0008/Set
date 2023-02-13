#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<< *s.begin()<<endl;
    cout<<*s.rbegin()<<endl;
    cout<< *s.begin()+3<<endl;
    cout<< *s.begin()+1 <<endl;
}