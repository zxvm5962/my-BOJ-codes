#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, num;
    cin >> t;
    queue<int> q;
    string str;
    while (t--)
    {
        cin >> str;
        if (str.compare("push") == 0)
        {
            cin >> num;
            q.push(num);
        }
        else if (str.compare("pop") == 0)
        {
            if (!q.empty())
            {   cout << q.front() << '\n';
                q.pop();
            }
            else
                cout << "-1\n";
        }
        else if (str.compare("size") == 0)
        {
            cout << q.size() << '\n';
        }
        else if (str.compare("empty") == 0)
        {
            cout << q.empty() << '\n';
        }
        else if (str.compare("front") == 0)
        {
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.front() << '\n';
        }
        else if (str.compare("back") == 0)
        {
            if (q.empty())
                cout << "-1\n";
            else
                cout << q.back() << '\n';
        }
    }

    return 0;
}
