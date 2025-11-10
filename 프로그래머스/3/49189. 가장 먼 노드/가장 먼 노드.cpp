#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int MAX = 20001;

vector<int> dist;
bool visited[MAX];
vector<vector<int>> graph;

void bfs(int sx){
    queue<int> q;
    
    q.push(sx);
    int cur_dist = 0;
    visited[sx] = true;
    
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        
        for (int next : graph[cur]) {
            if (!visited[next]) {
                visited[next] = true;
                dist[next] = dist[cur] + 1;
                q.push(next);
            }
        }
    }
}

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    
    graph.assign(n+1, {});
    dist.assign(n+1, 0);
    
    for(int i=0; i<edge.size(); i++){
        graph[edge[i][0]].push_back(edge[i][1]);
        graph[edge[i][1]].push_back(edge[i][0]);
    }
    
    bfs(1);
    
    sort(dist.begin() + 1, dist.end(), greater<int>());
    
    int cnt = 1;
    for(int i= 1; i<n; i++){
        if(dist[i] > dist[i+1])
            break;
        cnt++;
    }
    
    answer = cnt;

    return answer;
}