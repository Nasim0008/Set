#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(5);
    s.insert(4);

    cout<<s.size()<<endl;
//    set<int>::iterator it;
//    for(it=s.begin();it!=s.end();it++)
//    {
//        cout<< *it<< " ";
//    }
//    cout<<endl;

    for(auto u:s)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    s.clear();
    if(s.empty())
    {
        cout<< "Empty"<<endl;
    }
    else
    {
        cout<< "Not Empty"<<endl;
    }

}
