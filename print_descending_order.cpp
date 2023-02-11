#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int,greater<int> >s;
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(5);
    s.insert(4);



    cout<<s.size()<<endl;
    for(auto u:s)
    {
        cout<<u<< " ";
    }
    cout<<endl;


}


