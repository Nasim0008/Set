#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms;
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
     
    auto low = ms.lower_bound(2);
    cout<< *low<<endl;

    auto upper = ms.upper_bound(2);
    cout<< *upper<<endl;
    
}