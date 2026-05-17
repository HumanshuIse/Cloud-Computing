#include<bits/stdc++.h>
using namespace std;

class Graph{
    int vertices;
    vector<vector<int>> adjList;
    public:

    Graph(int v){
        vertices=v;
        adjList.resize(v);
    }

    void addEdge(int u,int v){
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void DFS(int start,vector<bool> &visited){
        visited[start]=true;

        cout<<start<<" ";

        for(int neighbour:adjList[start]){
            if(!visited[neighbour]){
                DFS(neighbour,visited); 
            }
        }
    }
    void BFS(int start){
        vector<bool> visited(vertices,false);

        queue<int> q;

        visited[start]=true;
        q.push(start);

        while(!q.empty()){
            int current=q.front();
            q.pop();

            cout<<current<<" ";

            for(int neighbour:adjList[current]){
                if(!visited[neighbour]){
                    visited[neighbour]=true;
                    q.push(neighbour);
                }
            }
        }
    }

};


int main(){
    int vertices,edges;
    cout<<"Enter no. of vertices: ";
    cin>>vertices;




    Graph g(vertices);

    cout<<"Enter no. of edges: ";
    cin>>edges;

    cout<<"Enter the edges as u v"<<endl;

    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;

        g.addEdge(u,v);
    }

    int start;
    cout<<"Enter Starting index: ";
    cin>>start;

    vector<bool> visited(vertices,false);
    cout<<"DFS traversal: "<<endl;
    g.DFS(start,visited);

    cout<<"BFS traversal: "<<endl;
    g.BFS(start);

    return 0;


}