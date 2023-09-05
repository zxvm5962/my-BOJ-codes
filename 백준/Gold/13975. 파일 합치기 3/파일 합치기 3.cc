#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    int N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        priority_queue<long long, vector<long long>, greater<long long>> pq;

        long long num;
        while (N--)
        {
            cin >> num;
            pq.push(num);
        }
        long long sum = 0, result = 0;
        while (pq.size() > 1)
        {
            sum += pq.top();
            pq.pop();
            sum += pq.top();
            pq.pop();
            pq.push(sum);
            result += sum;
            sum = 0;
        }
        cout << result << '\n';
        pq.pop();
    }
}
