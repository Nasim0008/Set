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
     
     auto it = ms.find(2);
     if(it!=ms.end())
     {
        cout<< "Found"<<endl;
     }
     else
     {
        cout<< "Not Found"<<endl;
     }
    
}