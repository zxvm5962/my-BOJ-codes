#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>

using namespace std;

int N;

int dx[3] = {0, 1, 1};
int dy[3] = {1, 1, 0};

int res = 0;

vector<vector<int>> graph;

void dfs(int x, int y, int shape){ // shape 0: 가로 1:대각선 2: 세로

    if(shape == 0){
        for (int i = 0; i < 2; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx >= N || ny < 0 || ny >= N){
                continue;
            }

            if(graph[nx][ny] == 1){
                continue;
            }

            bool flag = false; // 대각선 조건 판독
            if(i == 1){
                for (int j = 0; j < 3; j++)
                {
                    if(graph[x+dx[j]][y+dy[j]] == 1){
                        flag = true;
                        break;
                    }
                }
                if(flag){
                    continue;
                }
            }

            if (nx == N - 1 && ny == N - 1)
            { // 맨 끝에 도착하면 횟수 늘려주고 끝내기
                res++;
                return;
            }

            dfs(nx, ny, i);
        }
    }
    else if(shape == 1){
        for (int i = 0; i < 3; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
            {
                continue;
            }

            if (graph[nx][ny] == 1)
            {
                continue;
            }

            bool flag = false; // 대각선 조건 판독
            if (i == 1)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (graph[x + dx[j]][y + dy[j]] == 1)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    continue;
                }
            }

            if (nx == N - 1 && ny == N - 1)
            { // 맨 끝에 도착하면 횟수 늘려주고 끝내기
                res++;
                return;
            }

            dfs(nx, ny, i);
        }
    }
    else{
        for (int i = 1; i < 3; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
            {
                continue;
            }

            if (graph[nx][ny] == 1)
            {
                continue;
            }

            bool flag = false; // 대각선 조건 판독
            if (i == 1)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (graph[x + dx[j]][y + dy[j]] == 1)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    continue;
                }
            }

            if (nx == N - 1 && ny == N - 1)
            { // 맨 끝에 도착하면 횟수 늘려주고 끝내기
                res++;
                return;
            }

            dfs(nx, ny, i);
        }
    }
    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    graph.resize(N);

    int m;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> m;
            graph[i].push_back(m);
        }
    }

    dfs(0,1,0);
    
    cout << res;

    return 0;
}
