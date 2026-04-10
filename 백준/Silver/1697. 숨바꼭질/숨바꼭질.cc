#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, K;

int dirc[2] = {1, -1};

const int MAX = 3e5;

void solve()
{
    int dist[MAX] = {0};

    queue<int> q;
    q.push(N);
    dist[N] = 1;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        if(cur == K){
            break;
        }

        for (int i = 0; i < 2; i++)
        {
            int nx = cur + dirc[i];

            if (nx < 0 || nx >= MAX)
                continue;

            if (dist[nx] > 0)
                continue;

            dist[nx] = dist[cur] + 1;

            q.push(nx);
        }

        int nx = cur * 2;

        if (nx < 0 || nx >= 2 * K)
            continue;

        if (dist[nx])
            continue;

        dist[nx] = dist[cur] + 1;

        q.push(nx);
    }

    cout << dist[K] - 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    solve();

    return 0;
}
