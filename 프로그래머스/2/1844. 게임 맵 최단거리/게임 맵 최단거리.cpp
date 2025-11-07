#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int MAX = 101;

int bfs(vector<vector<int>>& maps, int sx, int sy) {
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    int n = maps[0].size();
    int m = maps.size();     

    int dist[MAX][MAX] = {0};
    bool visited[MAX][MAX] = {0};
    
    queue<pair<int, int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;
    dist[sx][sy] = 1;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                continue;

            if (maps[nx][ny] == 0 || visited[nx][ny])
                continue;

            visited[nx][ny] = true;
            dist[nx][ny] = dist[x][y] + 1;
            
            q.push({nx, ny});
        }
    }
    
    if(visited[m-1][n-1] == false)
        return -1;
    return dist[m-1][n-1];
}

int solution(vector<vector<int>> maps)
{
    int answer = 0;
    
    answer = bfs(maps, 0, 0);
    
    return answer;
}