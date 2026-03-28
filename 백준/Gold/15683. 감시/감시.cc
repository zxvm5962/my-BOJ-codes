#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;

int room[9][9];

vector<pair<int, int>> cctvs;

void seek(int x, int y, int angle, vector<pair<int, int>> &modify)
{ // angle: 1: 위, 2: 오른쪽 3: 아래, 4: 왼쪽
    if (angle % 4 == 1)
    {
        for (int i = x - 1; i >= 0; i--)
        {
            if (room[i][y] == 6)
                break;
            if (room[i][y] == 0)
            {
                room[i][y] = 9;
                modify.push_back({i, y});
            }
        }
    }
    else if (angle % 4 == 2)
    {
        for (int i = y + 1; i < M; i++)
        {
            if (room[x][i] == 6)
                break;
            if (room[x][i] == 0)
            {
                room[x][i] = 9;
                modify.push_back({x, i});
            }
        }
    }
    else if (angle % 4 == 3)
    {
        for (int i = x + 1; i < N; i++)
        {
            if (room[i][y] == 6)
                break;

            if (room[i][y] == 0)
            {
                room[i][y] = 9;
                modify.push_back({i, y});
            }
        }
    }
    else
    {
        for (int i = y - 1; i >= 0; i--)
        {
            if (room[x][i] == 6)
                break;
            if (room[x][i] == 0)
            {
                room[x][i] = 9;
                modify.push_back({x, i});
            }
        }
    }
}

void hide(vector<pair<int, int>> &modify)
{ // angle: 1: 위, 2: 오른쪽 3: 아래, 4: 왼쪽
    for (auto a : modify)
    {
        room[a.first][a.second] = 0;
    }
}

int minV = 1e9;

void backtrack(int idx)
{
    if (idx == cctvs.size())
    {
        int cnt = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (room[i][j] == 0)
                {
                    cnt++;
                }
            }
        }

        if (minV > cnt)
        {
            minV = cnt;
        }

        return;
    }

    int x = cctvs[idx].first;
    int y = cctvs[idx].second;

    if (room[x][y] == 1)
    { // 1번 cctv
        for (int i = 1; i <= 4; i++)
        {
            vector<pair<int, int>> modify;
            seek(x, y, i, modify);
            backtrack(idx + 1);
            hide(modify);
        }
    }
    else if (room[x][y] == 2)
    { // 2번 cctv
        for (int i = 1; i <= 2; i++)
        {
            vector<pair<int, int>> modify;
            seek(x, y, i, modify);
            seek(x, y, i + 2, modify);
            backtrack(idx + 1);
            hide(modify);
        }
    }
    else if (room[x][y] == 3)
    { // 3번 cctv
        for (int i = 1; i <= 4; i++)
        {
            vector<pair<int, int>> modify;
            seek(x, y, i, modify);
            seek(x, y, i + 1, modify);
            backtrack(idx + 1);
            hide(modify);
        }
    }
    else if (room[x][y] == 4)
    { // 4번 cctv
        for (int i = 1; i <= 4; i++)
        {
            vector<pair<int, int>> modify;
            seek(x, y, i, modify);
            seek(x, y, i + 1, modify);
            seek(x, y, i + 2, modify);
            backtrack(idx + 1);
            hide(modify);
        }
    }
    else if (room[x][y] == 5)
    { // 5번 cctv
        vector<pair<int, int>> modify;
        seek(x, y, 1, modify);
        seek(x, y, 2, modify);
        seek(x, y, 3, modify);
        seek(x, y, 4, modify);
        backtrack(idx + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> room[i][j];

            if (room[i][j] < 6 && room[i][j] > 0)
            {
                cctvs.push_back({i, j});
            }
        }
    }

    backtrack(0);

    cout << minV;

    return 0;
}
