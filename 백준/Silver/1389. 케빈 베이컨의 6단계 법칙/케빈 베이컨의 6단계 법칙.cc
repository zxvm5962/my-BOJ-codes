#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> v;
int visited[101];

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

    int N, M;
    cin >> N >> M;
    int A, B;
    v.resize(N + 1);
    while (M--)
    {
        cin >> A >> B;
        v[A].push_back(B);
        v[B].push_back(A);
    }

    vector<pair<int, int>> S;

    for (int i = 0; i < N + 1; i++)
    {
        int sum = 0;
        bfs(i);
        for (int j = 1; j < N + 1; j++)
        {
            sum += visited[j];
        }

        if (i != 0)
            S.push_back({sum, i});

        for (int j = 1; j < N + 1; j++)
        {
            visited[j] = -1;
        }
    }

    sort(S.begin(), S.end());

    cout << S[0].second;

    return 0;
}