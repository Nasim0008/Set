#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int,greater<int>>ms;
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

   

    multiset<int>::iterator it;
    it = ms.begin();
    cout<<*it<<endl;

  
   

}