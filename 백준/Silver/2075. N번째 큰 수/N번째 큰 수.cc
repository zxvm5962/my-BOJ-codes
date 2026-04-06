#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;

    int a;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a;

            pq.push(a);

            if(pq.size() > N){
                pq.pop();
            }
        }
    }

    cout << pq.top(); 

    return 0;
}
