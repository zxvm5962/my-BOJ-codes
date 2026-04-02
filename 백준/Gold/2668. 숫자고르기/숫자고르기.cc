#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>

using namespace std;

int N;

set<int> res;

bool visited[101];

void dfs(int start, int target, vector<int> &v){
    if(start == target){
        for (int i = 1; i < N + 1; i++)
        {
            if(visited[i]){
                res.insert(i);
           }
        }
    }

    if (visited[start])
    {
        return;
    }

    visited[start] = true;
    dfs(v[start], target, v);
    visited[start] = false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    vector<int> v(N + 1);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i + 1];
    }

    for (int i = 1; i <= N; i++)
    {
        dfs(i, i, v);
    }
    

    cout << res.size() << '\n';

    for (auto a: res){
        cout << a << '\n';
    }
    
    return 0;
}
