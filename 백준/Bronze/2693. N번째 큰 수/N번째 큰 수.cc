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

    int t;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        for (int i = 0; i < 10; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        cout << v[7] << '\n';
        v.clear();
    }

    return 0;
}
