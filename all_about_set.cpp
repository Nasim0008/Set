/*
1. set declaration
2. insert & print
3. size
4. max size
5.begin(), end()
6. empty
7. erase
8. clear
9. find
10. count
11. upper bound
12. lower bound
13. emplace
14. swap
15. operato '='

*/

#include <bits/stdc++.h>
using namespace std;
/*
   The main properties of set:
   1. do not allow duplicate value
   2. sorted (by default ascending order (small to large))
   3. multiset is unindex. that means we can not access through the index
      or we can not traverse the multiset using index. its works with pointer.
   */
int main()
{
    set<int> se;                                 // set declaration
    set<int, greater<int>> descending_order_set; // decleare the set in descending order

    // insert the value of the set
    se.insert(1);
    se.insert(2);
    se.insert(3);
    se.insert(4);
    se.insert(5);
    se.insert(1);
    se.insert(4);

    cout << se.size() << endl; // size of the set

    cout << se.max_size() << endl; // maximum size of the set

    // print with auto keyword (foreach loop)
    for (auto u : se)
    {
        cout << u << " ";
    }
    cout << endl;

    // print with declarative iterator
    set<int>::iterator it;                      // declare the iterator
    for (it = se.begin(); it != se.end(); it++) // traverse the set
    {
        cout << *it << " ";
    }
    cout << endl;

    // print without declarative iterator or auto iterator
    for (auto it = se.begin(); it != se.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // print with next keyword (as like as index wise printing)
    for (int i = 0; i < se.size(); i++)
    {
        cout << *next(se.begin(), i) << " ";
    }
    cout << endl;

    // print the first element
    cout << *se.begin() << endl;
    cout << *next(se.begin(), 0) << endl;

    // print the last element()
    cout << *(--se.end()) << endl;
    cout << *next(se.begin(), (se.size() - 1)) << endl;

    // finding the element between the begin and end function
    int n = distance(se.begin(), se.end()); // size of the set
    cout << n << endl;

    // find function
    if(se.find(4)!=se.end()) // retrun only true or false
    {
        cout<< "Value is present"<<endl;
    }
    else
    {
        cout<< "Value is not present"<<endl;
    }


    // count function (for set, count function always return 0 or 1, if value is present return 1 else 0)
    cout<<se.count(4)<<endl; // count the frequency of the value 

    // assigning the se set to the s2 set
    set<int> s2(se.begin(), se.end());
    for (auto u : s2)
    {
        cout << u << " ";
    }
    cout << endl;

    // value wise erase
    s2.erase(2); // erase the value 2 if it is present in the set
   

    // index wise erase
    s2.erase(s2.begin()); // erase the first value
    s2.erase(--s2.end()); // erase the last of the set
    s2.erase(next(s2.begin(), 2)); // erase any index wise value
    s2.erase(s2.begin(), s2.find(3)); // erase all the element which is less than 3
   


    // clear function()
    se.clear(); // clear the set as like new declarative set

    // check the set is empty or not (size ==0)
    if (se.empty())
    {
        cout << "Yes, Set is empty" << endl;
    }
    else
    {
        cout << "NO, Set is not empty" << endl;
    }
}