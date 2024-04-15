#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> v;
int visited[300001];

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start]++;

    // 큐가 빌 때까지 반복
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i = 0; i < v[x].size(); i++)
        {
            int y = v[x][i];
            if (visited[y] == -1)
            {
                q.push(y);
                visited[y] = visited[x] + 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, K, X;
    cin >> N >> M >> K >> X;
    int A, B;
    v.resize(N+1);
    while (M--)
    {
        cin >> A >> B;
        v[A].push_back(B);
    }

    for (int i = 0; i < N+1; i++)
    {
        visited[i] = -1;
    }

    bfs(X);

    bool flag = false;

    for (int i = 0; i < N+1; i++)
    {
        if(visited[i] == K){
            cout << i << '\n';
            flag = true;
        }
    }
    if(!flag){
        cout << -1;
    }
    
    
    return 0;
}