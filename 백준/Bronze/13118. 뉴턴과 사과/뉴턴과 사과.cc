#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int p;
    vector<int> v;
    int x, y, r;
    for (id_t i = 0; i < 4; i++)
    {
        cin >> p;
        v.push_back(p);
    }

    cin >> x >> y >> r;
    for (int i = 0; i < 4; i++)
    {
        if (x == v[i])
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
