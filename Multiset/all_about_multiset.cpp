#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
   The main properties of multiset:
   1. allow duplicate value
   2. sorted (by default ascending order (small to large))
   3. multiset is unindex. that means we can not access through the index
      or we can not traverse the multiset using index. its works with pointer.
   */

    multiset<int>ms; // declaration 

    // insert the value to the multiset
    ms.insert(1);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.insert(5);
    ms.insert(1);
    ms.insert(2);   

    cout<<ms.size()<<endl; // size of multiset 

    // print with auto (foreach loop)
    for(auto u:ms)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    // print with declarative iterator
    multiset<int>:: iterator it;// declaration of iterator
    for(it=ms.begin();it!=ms.end();it++) // traverse the iterator 
    {
        cout<<*it<< " ";
    }
    cout<<endl;

    // print without declarative iterator
    for(auto it=ms.begin();it!=ms.end();it++)
    {
        cout<<*it<< " ";
    }
    cout<<endl;

    // print with next keyword (as like as index wise printing)

    for(int i=0; i<ms.size();i++)
    {
        cout<< *next(ms.begin(),i)<< " ";
    }
    cout<<endl;


    // print first element
    auto first = ms.begin();
    cout<<*first<<endl;
    cout<<*next(ms.begin(),0)<<endl;

    // print last element
    auto last = --ms.end();
    cout<<*last<<endl;
    cout<<*next(ms.begin(),ms.size()-1)<<endl;

    



    



}
