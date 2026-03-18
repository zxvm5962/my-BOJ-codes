#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N;

using pii = pair<int, int>;

vector<vector<char>> graph;

vector<pii> teachers;

bool flag = false;

bool check()
{
    for (auto t : teachers)
    {
        for (int i = t.first + 1; i < N; i++)
        {
            if (graph[i][t.second] == 'O')
                break;

            if (graph[i][t.second] == 'S')
            {
                return false;
            }
        }

        for (int i = t.first - 1; i >= 0; i--)
        {
            if (graph[i][t.second] == 'O')
                break;

            if (graph[i][t.second] == 'S')
            {
                return false;
            }
        }

        for (int i = t.second + 1; i < N; i++)
        {
            if (graph[t.first][i] == 'O')
                break;

            if (graph[t.first][i] == 'S')
            {
                return false;
            }
        }

        for (int i = t.second - 1; i >= 0; i--)
        {
            if (graph[t.first][i] == 'O')
                break;

            if (graph[t.first][i] == 'S')
            {
                return false;
            }
        }
    }

    return true;
}

void backtrack(int idx, int cnt)
{
    if (cnt == 3)
    { // 벽 3회 세우기 완료
        if(check()) flag = true;

        return;
    }

    for (int i = idx; i < N * N; i++) // 1차원으로 해야함 2차원이면 다 못 돔
    {
        int r = i / N;
        int c = i % N;
        if (graph[r][c] == 'X')
        { // 빈 칸이면 장애물 설치 가능
            graph[r][c] = 'O';
            backtrack(i + 1, cnt + 1);
            graph[r][c] = 'X'; // 백트래킹
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    char a;

    graph.resize(N + 1);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a;

            graph[i].push_back(a);

            if (a == 'T')
            {
                teachers.push_back({i, j});
            }
        }
    }

    backtrack(0, 0);

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
