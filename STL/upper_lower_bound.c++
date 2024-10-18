#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{

    vector<int>v = {2,6,7,8,9,10};        // upper ya lower bound found karne ke lia data sorted hona compulsory hai :
    for(auto i : v)
    cout<<i<<" ";
    cout<<endl;

    // lower bound jis value ka find karte hai agar vo present hai to usi value ko return kraga other wise usse badi vali :
    auto low = lower_bound(v.begin(),v.end(),8);
    cout<<*low<<endl;

    // uppar bound hamesha badi value deta hai :
    auto up = upper_bound(v.begin(),v.end(),9);
    cout<<*up<<endl;

    //set ke case mai :
    // s.upper_bound(value) ;

    return 0;
}