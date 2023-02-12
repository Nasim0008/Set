
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s={1,3,4,2,5,6};
    for(auto u:s)
    {
        cout<<u<< " ";
    }
    cout<<endl;
    set<int>:: iterator it;
    it=s.upper_bound(3);
    if(it!=s.end())
    {
        cout<< "upper Bound of 3 is "<<*it<<endl;
    }
    else
    {
        cout<< "lower bound is the larger or equal than the greater elements"<<endl;
    }
}
