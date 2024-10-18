#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{   // unordered map ki jagha agar hum sirf map use karen to time complexity badh jati hai O(1) se O(log n) ho jati hai :
    // but ordered map use karne se keys ka order preserve rehta hai :
    // unordered map mai order of the keys is not preserved :
    
    unordered_map<string, int> m;

    // insertion 1st way :
    pair<string, int> p1 = make_pair("Tilak", 1);
    m.insert(p1);

    // 2nd way of insertion :
    pair<string, int> p2("Saini", 2);
    m.insert(p2);

    // 3rd way of insertion :
    m["Apple"] = 3;

    cout << m.size() << endl; // map ka size print kraga :

    cout << m["Tilak"] << endl;            // Tilak pr konsi value map hai vahi print kraga :
    cout << m.at("Saini") << endl;     // ye bhi value print kraga :

    cout << m["Sahab"] << endl;            // agar koi value map mai hai hi nhi to 0 insert kr deta hai
    cout << m.at("Sahab") << endl;

    // To check the presence of a key :
    cout<<m.count("Tilak")<<endl; // it always gives 0 or 1 : 
    cout<<m.count("Papaya")<<endl;

    // Traversing all the keys of the hashmap :
    // with the help of an iterator :
    // creation of an iterator :
    unordered_map<string,int> :: iterator it = m.begin(); 
    
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        // cout<<"new"<<(*it).first<<" "<<(*it).second<<endl;
        it++;
    }
    cout<<"Using auto keyword : "<<endl;


    // with the help of for loop using auto keyword :
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<" "<<endl;

    }

    // m.erase("Tilak");
    auto f = m.find("Tilak");         // agar value mil gai to usi value ka iterator dega nhi mili toh m.end() pr point kraga means next to last element :
    if(f != m.end()){
        cout<<"Value found "<<endl;
    cout<<f->first<<" "<<f->second<<endl;
    }
    else 
    cout<<"Value Not found "<<endl;

    if(f != m.end())
    m.erase(f);         // value mil gai to delete kr dega :
    else 
    cout<<"value Not found "<<endl;


    
    
    m.clear();  // pure map ko clear kar deta hai means empty kar deta hai :
    cout<<m.size()<<endl;    // size 0  print hoga :

    return 0;
}