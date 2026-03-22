#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;

const int INF = 1e9;
using pii = pair<int, int>;

vector<vector<int>> graph;
vector<pii> virus;
bool selected[11];

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

int minV = INF;

void solve()
{
    int res[51][51] = {0};
    queue<pii> q;
    int maxV = 1;

    for (int i = 0; i < virus.size(); i++)
    {
        if (selected[i])
        {
            res[virus[i].first][virus[i].second] = 1;
            q.push(virus[i]);
        }
    }

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                continue;
            if (graph[nx][ny] == 1 || res[nx][ny] != 0)
                continue;

            res[nx][ny] = res[x][y] + 1;

            q.push({nx, ny});
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (res[i][j] == 0 && graph[i][j] == 0)
            {
                return;
            }
            
            if(graph[i][j] == 0){
                maxV = maxV = max(maxV, res[i][j]);
            }
            
        }
    }

    minV = min(minV, maxV - 1);
}

void select(int idx, int cnt)
{
    if (cnt == M)
    {
        solve();
        return;
    }

    for (int i = idx; i < virus.size(); i++)
    {
        selected[i] = true;
        select(i + 1, cnt + 1);
        selected[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int a;

    graph.resize(N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a;
            graph[i].push_back(a);

            if (a == 2)
            {
                virus.push_back({i, j});
            }
        }
    }

    select(0, 0);

    if (minV == INF)
    {
        cout << -1;
    }
    else
    {
        cout << minV;
    }

    return 0;
}
