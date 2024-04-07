#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq2;

    int num;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        if (pq.empty())
            pq.push(num);
        else if (pq.size() == pq2.size())
            pq.push(num);
        else
            pq2.push(num);

        if (!pq2.empty())
        {
            if (pq.top() > pq2.top())
            {
                int temp1 = pq.top();
                pq.pop();
                pq.push(pq2.top());
                pq2.pop();
                pq2.push(temp1);
            }
        }
        cout << pq.top() << '\n';
    }
    return 0;
}