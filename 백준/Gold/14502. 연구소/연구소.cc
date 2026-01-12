#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<pair<int, int>> virus;
int ans = 0;
int n, m;

void bfs(){
    vector<vector<int>> map = graph;
    int dx[4] = {0,0,-1,1};
    int dy[4] = {1,-1,0,0};

    queue<pair<int, int>> q;

    for (int i = 0; i < virus.size(); i++)
    {
        q.push({virus[i].first, virus[i].second});
    }

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                if(map[nx][ny] == 0){
                    map[nx][ny] = 2;
                    q.push({nx, ny});
                }
            }
        }
    }

    // 안전 영역(0) 개수 세기
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (map[i][j] == 0)
            {
                count++;
            }
        }
    }

    // 최댓값 갱신
    ans = max(ans, count);
}

void make_wall(int count, int start){
    if(count == 3){
        bfs();
        return;
    }

    for (int i = start; i < n*m; i++)
    {
        int r = i/m;
        int c = i%m;

        if(graph[r][c] == 0){
            graph[r][c] = 1;
            make_wall(count + 1, i + 1); // 재귀로 벽 생성
            graph[r][c] = 0; // 다시 0으로 복구
        }
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    graph.resize(n);

    int a;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            graph[i].push_back(a);

            if(a == 2){
                virus.push_back({i, j});
            }
        }
    }

    make_wall(0, 0);

    cout << ans;

    return 0;
}
