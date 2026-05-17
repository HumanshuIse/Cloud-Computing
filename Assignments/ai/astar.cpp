#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

int heuristic(int x,int y, pair<int,int> des){
    return abs(x-des.first) + abs(y-des.second);
}

void findPath(vector<vector<char>> grid,pair<int,int> src, pair<int,int> des){
    int n=4;

    priority_queue<
    pair<int,pair<int,int>>,
    vector<pair<int,pair<int,int>>>,
    greater<pair<int,pair<int,int>>>
    > pq;

    vector<vector<int>> gCost(n,vector<int> (n,INT_MAX));
    vector<vector<bool>> closed(n,vector<bool> (n,false));
    vector<vector<pair<int,int>>> parent(n,vector<pair<int,int>> (n,{-1,-1}));

    gCost[src.first][src.second]=0;
    pq.push({heuristic(src.first,src.second,des),src});

    while(!pq.empty()){
        auto curr=pq.top();
        pq.pop();
        int x=curr.second.first;
        int y=curr.second.second;

        if(closed[x][y]==true) continue;
        closed[x][y]=true;

        if(x==des.first && y==des.second) break;

        for(int i=0;i<n;i++){
            int nx=x+dx[i];
            int ny=y+dy[i];

            if(nx<0 || ny<0 || nx>=4 || ny>=4) continue;
            if(grid[nx][ny]=='X' || closed[nx][ny]) continue;

            int newG=gCost[x][y] + 1;
            if(newG < gCost[nx][ny]){
                gCost[nx][ny]=newG;
                int f=newG+heuristic(nx,ny,des);
                parent[nx][ny]={x,y};
                pq.push({f,{nx,ny}});
            }
        }
    }
    vector<pair<int,int>> path;
    pair<int,int> curr=des;

    while(curr.first != -1){
        path.push_back(curr);
        curr=parent[curr.first][curr.second];
    }

    reverse(path.begin(),path.end());

    cout<<"Path :";
    for(auto &p:path){
        cout<<"("<<p.first<<","<<p.second<<") ";
    }

    cout<<endl;
    cout<<"Distance: "<<gCost[des.first][des.second];
}



int main(){
    vector<vector<char>> grid(4,vector<char> (4,'.'));
    pair<int,int> src={0,0};
    pair<int,int> des={3,3};

     grid[1][2] = 'X';
    grid[2][2] = 'X';

    findPath(grid, src, des);

    return 0;
    
}