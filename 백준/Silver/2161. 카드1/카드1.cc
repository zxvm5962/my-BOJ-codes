#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue<int> q;

    int n;
    cin >> n;
    if(n==1){
        cout << 1;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        q.push(i + 1);
    }
    while (1)
    {
        cout << q.front() << ' ';
        q.pop();
        int tmp = q.front();
        q.pop();
        q.push(tmp);
        if (q.size() == 1)
        {
            cout << tmp;
            break;
        }
    }

    return 0;
}
