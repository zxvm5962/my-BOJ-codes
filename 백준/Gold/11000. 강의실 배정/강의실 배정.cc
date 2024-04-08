#include <iostream>
#include <vector>
#include <queue>

using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;

priority_queue<int, vector<int>, greater<int>> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, cnt = 0;
    cin >> N;
    int s, t;
    for (int i = 0; i < N; i++)
    {
        cin >> s >> t;
        pq.push({s, t});
    }

    while (!pq.empty())
    {
        if(res.empty()){
            cnt++;
            res.push(pq.top().second);
            pq.pop();
            continue;
        }
        if(pq.top().first >= res.top()){
            res.pop();
            res.push(pq.top().second);
            pq.pop();
        }
        else{
            cnt++;
            res.push(pq.top().second);
            pq.pop();
        }
    }

    cout << cnt;

    return 0;
}