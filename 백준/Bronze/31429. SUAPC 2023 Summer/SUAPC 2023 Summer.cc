#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<pair<int, int>> m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;
    m.push_back({12, 1600});
    m.push_back({11, 894});
    m.push_back({11, 1327});
    m.push_back({10, 1311});
    m.push_back({9, 1004});
    m.push_back({9, 1178});
    m.push_back({9, 1357});

    m.push_back({8, 837});
    m.push_back({7, 1055});
    m.push_back({6, 556});
    m.push_back({6, 773});
    a--;
    cout << m[a].first << ' ' << m[a].second;
    
}
