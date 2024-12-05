#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int MAX = 200001;

int N, K;
int dist[MAX]; // 최단 거리 저장
int ways[MAX]; // 방법의 수 저장

void bfs(int start, int target)
{
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    ways[start] = 1;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int next : {cur - 1, cur + 1, cur * 2})
        {
            if (next < 0 || next >= MAX)
                continue;

            if (dist[next] == -1)
            { // 처음 방문하는 경우
                dist[next] = dist[cur] + 1;
                ways[next] = ways[cur];
                q.push(next);
            }
            else if (dist[next] == dist[cur] + 1)
            { // 이미 최단 거리로 도달 가능한 경우
                ways[next] += ways[cur];
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> K;

    memset(dist, -1, sizeof(dist)); // 거리 배열을 -1로 초기화

    bfs(N, K);

    cout << dist[K] << "\n"
         << ways[K] << "\n";

    return 0;
}
