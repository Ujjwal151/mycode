//CF 1037 Valid BFS
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+ 10;

vector<int> g[N];
bool vis[N];
vector<int>level(N);

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    
    while(!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        for(int child : g[cur_v])
        {
            if(!vis[child]){
                q.push(child);
                vis[child] = 1;
                level[child] = level[cur_v]+1;
            }
        }
    }

}

int main()
{
    int n; // number of edges
    cin>>n;
    for(int i = 0; i<n-1; i++){
        int x,y;
        cin>>x>>y; // connnected nodes
        g[x].push_back(y);
        g[y].push_back(x);
    }
    
    vector<int> sequence(n);
    for(int i = 0; i<n; i++)
        cin>>sequence[i];
    
    bfs(1);

    for(int i = 1; i<n; i++) {
        if(level[sequence[i-1]] > level[sequence[i]]){
            cout<<"No";
            return 0;
        }
    }

    cout<<"Yes";
  
}