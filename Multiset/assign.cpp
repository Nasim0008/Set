#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms,ms2;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(5);
    ms.insert(5);
    ms.insert(3);
    ms.insert(4);
    ms.insert(4);
     
    ms2= ms;
    for(auto u:ms2)
    {
        cout<<u<< " ";
    }
    cout<<endl;
    
}