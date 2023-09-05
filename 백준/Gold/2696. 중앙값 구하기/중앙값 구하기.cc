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
        priority_queue<long long, vector<long long>> pq;
        priority_queue<long long, vector<long long>> pq2;
        vector<long long> res;
        int num, cnt = 0;
        for(int i=1; i<=N;i++)
        {
            cin >> num;
            pq2.push(num);
            pq.push(num);
            if (pq2.size() % 2 == 1)
            {
                for (int j = 0; j < i / 2; j++)
                {
                    pq.pop();
                }
                res.push_back(pq.top());
            }
            pq = pq2;
        }
        cout << res.size() << '\n';
        for(int i=0; i<res.size();i++){
            cout << res[i] << ' ';
            if(i%10 == 9){
                cout << '\n';
            }
        }
        res.clear();
    }
}
