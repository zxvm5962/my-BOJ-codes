#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int> pq;

    int t, num;
    cin >> t;
    while (t--)
    {
        cin >> num;
        pq.push(num);
    }
    long long sum = 0;
    int cnt = 0;
    while (!pq.empty())
    {
        cnt++;
        if (cnt % 3 == 0)
        {
            pq.pop();
        }
        else
        {
            sum += pq.top();
            pq.pop();
        }
    }
    cout << sum;

    return 0;
}
