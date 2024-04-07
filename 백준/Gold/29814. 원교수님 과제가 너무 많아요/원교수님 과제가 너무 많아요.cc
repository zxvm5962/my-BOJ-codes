#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int parent[200001];

int getParent(int x)
{
    if (parent[x] == x)
        return x; // 자기 자신이 부모이므로 x 반환
    else
        return parent[x] = getParent(parent[x]); // 자신의 부모의 부모를 찾기
}

void Union(int a, int b)
{
    a = getParent(a);
    b = getParent(b);
    if (a < b)
        parent[b] = a; // 노드 번호가 작은것을 부모로 선택
    else
        parent[a] = b;
}

struct Compare
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    {
        if (a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
    }
};

priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, C;
    int d, t, p;
    int sum = 0, cnt = 0;
    cin >> N >> C;
    for (int i = 0; i < N; i++)
    {
        cin >> d >> t >> p;
        pq.push({p, d - t + 1}); // 최소 시작 일 -> d-t+1
    }

    for (int i = 1; i <= N; i++)
    {
        parent[i] = i;
    }

    while(!pq.empty())
    {
        int dt = pq.top().second;
        int p = pq.top().first;

        dt = getParent(dt);
        if (dt == 0)
        {
            pq.pop();
            continue;
        }
        sum += p;
        Union(dt,dt-1);
        cnt++;
        pq.pop();

        if (sum >= C)
            break;
    }
    if (sum < C)
        cout << "I'm sorry professor Won!";
    else
        cout << cnt;

    return 0;
}