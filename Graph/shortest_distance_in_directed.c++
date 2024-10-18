
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class graph{
    public : 
    unordered_map<int,list<pair<int,int>>>adj;
    
    void addedge(int u,int v, int weight){
        pair<int,int>p = make_pair(v,weight);
        adj[u].push_back(p);
    }
    
    void print_adj(){
        for(auto i : adj){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<"("<<j.first<<","<<j.second<<") , ";
        }
        cout<<endl;
    }
    }
    
    void dfs(int node,stack<int>&st, unordered_map<int,bool>& visited){
        visited[node] = true;
        
        for(auto neighbour : adj[node]){
            if(!visited[neighbour.first]){
                dfs(neighbour.first,st,visited);
            }
        }
        st.push(node);
        }
        
        void shortest_distance(int src,vector<int>&distance,stack<int>&st){
            distance[src] = 0;
            
            while(!st.empty()){
                int top = st.top();
                st.pop();
                
              if(distance[top] != INT_MAX){
                  for(auto i : adj[top]){
                      if(distance[top] + i.second  < distance[i.first])
                      distance[i.first] = distance[top] + i.second;
                  }
              }
            }
        }

};

int main()
{
   graph g;
   g.addedge(0,1,5);
   g.addedge(0,2,3);
   g.addedge(1,2,2);
   g.addedge(1,3,6);
   g.addedge(2,3,7);
   g.addedge(2,4,4);
   g.addedge(2,5,2);

   g.addedge(3,4,-1);
   g.addedge(4,5,-2);

   g.print_adj();
   
    // topological sort :
  int n = 6;
  unordered_map<int,bool> visited;
  stack<int> st;
   
  for(int i = 0; i< n;i++){
      if(!visited[i])
      g.dfs(i,st,visited);
  }
   
  vector<int>distance(n);
  for(int i = 0;i < n;i++){
      distance[i] = INT_MAX;
  }
  
  int src = 1;
   
   
  g.shortest_distance(src,distance,st);
   
  for(int i = 0;i < distance.size();i++){
      cout<<distance[i]<<" ";
  }
  cout<<endl;
   

    return 0;
}