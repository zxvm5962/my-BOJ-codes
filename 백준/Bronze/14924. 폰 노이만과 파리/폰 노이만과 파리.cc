#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y, z;
    cin >> x >> y >> z;
    cout << (z / (2  * x)) * y;
}
