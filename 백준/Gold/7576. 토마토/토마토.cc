#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAX_SIZE 1001

queue<pair<int, int>> q;

int arr[MAX_SIZE][MAX_SIZE];

int N, M;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

void tomato()
{
    while (!q.empty())
    {
        int R = q.front().first;
        int C = q.front().second;
        q.pop();
        if (R < 1 || R > N || C < 1 || C > M)
            continue;
        if (arr[R][C] == -1)
            continue;
        for (int i = 0; i < 4; i++)
        {
            if (R + dx[i] < 1 || R + dx[i] > N || C + dy[i] < 1 || C + dy[i] > M)
                continue;
            if (arr[R + dx[i]][C + dy[i]] == 0)
            {
                arr[R + dx[i]][C + dy[i]] = arr[R][C] + 1;
                q.push({R + dx[i], C + dy[i]});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                q.push({i, j});
        }
    }

    tomato();

    int maxN = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (arr[i][j] == 0)
            {
                cout << -1;
                return 0;
            }
            if (maxN < arr[i][j])
                maxN = arr[i][j];
        }
    }
    cout << maxN - 1;

    return 0;
}
