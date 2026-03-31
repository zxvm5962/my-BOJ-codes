#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;

vector<int> parent;
vector<int> plans;

int Find(int x)
{
    if (parent[x] == x)
        return x;

    return parent[x] = Find(parent[x]); //   == return parent[x];
}

void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);
    if (x != y)
        parent[y] = x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int a;

    parent.resize(N + 1);

    for (int i = 1; i < N + 1; i++)
    {
        parent[i] = i;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> a;

            if (a == 1)
            {
                Union(i, j);
            }
        }
    }

    for (int i = 0; i < M; i++)
    {
        cin >> a;

        plans.push_back(a);
    }

    for (int i = 0; i < M - 1; i++)
    {
        if (Find(plans[i]) != Find(plans[i + 1])){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
