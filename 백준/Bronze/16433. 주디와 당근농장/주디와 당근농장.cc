#include <iostream>

using namespace std;

#define MAX_SIZE 100

int arr[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE][MAX_SIZE];

void carrot(int R, int C)
{
    if (R < 0 || R >= MAX_SIZE || C < 0 || C >= MAX_SIZE)
        return;

    if (visited[R][C] == true)
        return;

    arr[R][C] = 1;
    visited[R][C] = true;

    carrot(R - 1, C + 1);
    carrot(R - 1, C - 1);
    carrot(R + 1, C - 1);
    carrot(R + 1, C + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, R, C;
    cin >> N >> R >> C;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = 0;
        }
    }

    carrot(R, C);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (arr[i][j] == 0)
                cout << '.';
            else if (arr[i][j] == 1)
                cout << 'v';
        }
        cout << '\n';
    }

    return 0;
}
