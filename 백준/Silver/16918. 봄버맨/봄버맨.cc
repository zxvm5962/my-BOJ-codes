#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<char>> v;
vector<vector<char>> v2;
vector<vector<char>> v3;

int R, C, N;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

bool visited[202][202];
bool visited2[202][202];

void boom()
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (v2[i][j] == '.')
                continue;
            for (int k = 0; k < 4; k++)
            {
                int X = i + dx[k];
                int Y = j + dy[k];
                if (X < 0 || X >= R || Y < 0 || Y >= C)
                    continue;
                if (v2[X][Y] != 'O' && visited[i][j] == false)
                {
                    v2[X][Y] = 'O';
                    visited[X][Y] = true;
                }
            }
        }
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (v2[i][j] == '.')
                v2[i][j] = 'O';
            else
                v2[i][j] = '.';
        }
    }
}

void boom2()
{
    v3 = v2;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (v3[i][j] == '.')
                continue;
            for (int k = 0; k < 4; k++)
            {
                int X = i + dx[k];
                int Y = j + dy[k];
                if (X < 0 || X >= R || Y < 0 || Y >= C)
                    continue;
                if (v3[X][Y] != 'O' && visited2[i][j] == false)
                {
                    v3[X][Y] = 'O';
                    visited2[X][Y] = true;
                }
            }
        }
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (v3[i][j] == '.')
                v3[i][j] = 'O';
            else
                v3[i][j] = '.';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char b;

    cin >> R >> C >> N;
    v.resize(R + 2);
    v2.resize(R + 2);

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> b;
            v[i].push_back(b);
        }
    }

    v2 = v;
    boom();
    boom2();
    if (N == 1)
    {
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cout << v[i][j];
            }
            cout << '\n';
        }
    }
    else if (N % 2 == 0)
    {
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cout << 'O';
            }
            cout << '\n';
        }
    }
    else if (N % 4 == 3)
    {
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cout << v2[i][j];
            }
            cout << '\n';
        }
    }
    else if (N % 4 == 1)
    {
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cout << v3[i][j];
            }
            cout << '\n';
        }
    }

    return 0;
}



