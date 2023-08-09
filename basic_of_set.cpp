#include<bits/stdc++.h>
using namespace std;
int main()
{
    //set declaration
    set<int>se;

    // insert the new value in the set
    se.insert(2);
    se.insert(3);
    se.insert(6);
    se.insert(1);
    se.insert(7);
    se.insert(11);
    se.insert(13);
    se.insert(93);
    se.insert(45);
    se.insert(74);
    se.insert(184);
    se.insert(19);
      

    //size of the set
    cout<<se.size()<<endl;

    //maximum size of the set
    cout<<se.max_size()<<endl;
     
    //print the set by using iterator
    // set<int>::iterator it;
    for(auto it = se.begin();it!=se.end();it++)
    {
        cout<<*it<< " ";
    }
    cout<<endl;

    //print the set by using auto funtion
    for(auto u:se)
    {
        cout<<u<<" ";
    }
    cout<<endl;

    //erase any number from the set
    se.erase(1);
    for(auto u:se)
    {
        cout<<u<<" ";
    }
     cout<<endl;

    //erase the 5th element from the set
   auto  it=se.begin();
    advance(it,5);
    se.erase(it);
    for(auto u:se)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    //search the value is present or not by using find function
    if(se.find(19)!=se.end())
    {
        cout<<"Find"<<endl;
    }
    else
    {
        cout<< "Not Find"<<endl;
    }

    // check the value is present or not by using count fucntion
    if(se.count(19)==1)
    {
        cout<< "Present"<<endl;
    }
    else
    {
        cout<< "Not Present"<<endl;
    }

    //clear all the elements from the set
    se.clear();

    //check the set is empty of not
    if(se.empty())
    {
        cout<< "Empty"<<endl;
    }
    else
    {
        cout<< "Not Empty"<<endl;
    }



}