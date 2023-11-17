#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;

    int t, num, cnt = 1;
    cin >> t;
    while (t--)
    {
        cin >> num;
        s.push(num);
    }

    int top = s.top();
    s.pop();
    while (!s.empty())
    {
        if (top >= s.top())
            s.pop();
        else
        {
            top = s.top();
            cnt++;
            s.pop();
        }
    }
    cout << cnt;

    return 0;
}
