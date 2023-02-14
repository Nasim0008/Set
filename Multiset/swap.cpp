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

    ms2.insert(5);
    ms2.insert(5);
    ms2.insert(3);
    ms2.insert(4);
    ms2.insert(4);
     
   swap(ms,ms2);
   for(auto u:ms)
   {
    cout<< u<< " ";
   }
   cout<<endl;
    

    for(auto u:ms2)
    {
        cout<< u <<  " ";
    }
    cout<<endl;
}