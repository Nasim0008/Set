
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s1={1,3,4,2,5,6};
    set<int>s2;
 s2 = s1;

    for(auto u:s1)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    for(auto u:s2)
    {
        cout<<u<< " ";
    }
    cout<<endl;

}
