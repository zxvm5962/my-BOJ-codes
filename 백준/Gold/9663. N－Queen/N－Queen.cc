#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool visited[16];
bool ypx[33];
bool ymx[33];
int cnt = 0;
int N;

void Queen(int idx)
{
    if (idx == N)
    {
        cnt++;
        return;
    }

    for (int i = 0; i < N; i++)
    {
        if (visited[i])
            continue;
        if (ypx[idx + i])
            continue;
        if (ymx[idx - i + 15])
            continue;
        visited[i] = 1;
        ypx[idx + i] = 1;
        ymx[idx - i + 15] = 1;
        Queen(idx + 1);
        visited[i] = 0;
        ypx[idx + i] = 0;
        ymx[idx - i + 15] = 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    Queen(0);
    cout << cnt;

    return 0;
}