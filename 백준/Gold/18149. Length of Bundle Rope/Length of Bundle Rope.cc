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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0, result = 0;
        priority_queue<int, vector<int>, greater<int>> pq;

        while (n--)
        {
            int num;
            cin >> num;
            pq.push(num);
        }
        if (pq.size() == 1)
        {
            cout << 0;
            return 0;
        }

        while (1)
        {
            sum += pq.top();
            pq.pop();
            if (pq.empty())
            {
                break;
            }
            sum += pq.top();
            pq.pop();
            pq.push(sum);
            result += sum;
            sum = 0;
        }

        cout << result << '\n';
    }
    return 0;
}
