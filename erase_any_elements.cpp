

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


    s.erase(5);

    cout<<s.size()<<endl;
    set<int>::iterator it;

    it=s.begin();
    advance(it,2);
    s.erase(it);



    for(auto u:s)
    {
        cout<<u<< " ";
    }
    cout<<endl;
}


