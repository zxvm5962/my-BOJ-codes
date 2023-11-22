#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, num;
    stack<int> s;
    cin >> t;
    vector<int> tmp(t,0), v(t,0);

    for (int i = 0; i < t; i++)
    {
        cin >> num;
        tmp[i] = num;
    }
    s.push(0);

    for (int i = 1; i < tmp.size(); i++)
    {
        while (!s.empty() && tmp[s.top()] < tmp[i])
        {
            v[s.top()] = tmp[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        v[s.top()] = -1;
        s.pop();
    }
    for (auto a : v)
        cout << a << ' ';

    return 0;
}
