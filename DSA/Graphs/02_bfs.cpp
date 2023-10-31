#include<iostream>
#include<unordered_map>
#include<vector>
#include<set>
#include<queue>
using namespace std;
class Graph{
	public:
		unordered_map<int, set<int>> adjList;
		unordered_map<int, bool> visited;
		vector<int> ans;
		vector<vector<int>> adj;
		void prepareAdjList(unordered_map<int, set<int>> &adjList,vector<vector<int>> &adj){
			for(int i=0;i<adj.size();i++){
				int u = adj[i].first;
				int v = adj[i].second;
				
				adjList[u].insert(v);
			}
		}
		void bfs(unordered_map<int, set<int>> &adjList,unordered_map<int, bool> &visited,vector<int> &ans,int node){
			queue<int> q;
			q.push(node);
			visited[node] = 1;
			
			while(!q.empty()){
				int frontNode = q.front();
				q.pop();
				ans.push_back(frontNode);
				for(auto i: adjList[frontNode]){
					if(!visited[i]){
						q.push[i];
						visited[i] = 1;
					}
				}
			}
		}
};

