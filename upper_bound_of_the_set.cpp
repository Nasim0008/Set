#include<bits/stdc++.h>
using namespace std;
int main()
{
    //set declaration
    set<int>se;

    // insert the new value in the set
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        se.insert(value);
    }
    int target;
    cin>>target;
    auto u = se.upper_bound(target);
    /* 
    upper bound two situation occurs in the upper bound
    2. if the value ispresent or  not present then it give imiditate bigger value 
    3. if the value is greater than the max element of the set then it give the max element 
    */
    cout<<*u<<endl;

}  