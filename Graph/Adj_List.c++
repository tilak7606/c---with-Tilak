#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    public :

    unordered_map<T,list<T>>adj;


   void addEdge(T u,T v,bool direction){
    // direction 0 -> undirected :
    // direction 1 -> directed :

    // create an from u to v :
    adj[u].push_back(v);
    
    // if graph is undirected :
    if(direction == 0){
        adj[v].push_back(u);
    }
   }

   void print_list(){
    for(auto i: adj){
        cout<<i.first<<"->";
        for(auto j: i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
   }
};

int main()
{
    int n;
    cout<<"Enter the number of the nodes : "<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of the edges : "<<endl;
    cin>>m;

    Graph<int> g;

    for(int i = 0; i< m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    
    g.print_list();
    return 0;
}