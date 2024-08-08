#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <map>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k, l, temp;
    for (int i = 0; i < 3; i++)
    {
        vector<int> v(3, 0);
        for (int i = 0; i < 4; i++)
        {
            cin >> n;
            v[n]++;
        }
        if (v[0] == 4)
            cout << "D\n";
        else if (v[0] == 3)
            cout << "C\n";
        
        else if (v[0] == 2)
            cout << "B\n";
        
        else if (v[0] == 1)
            cout << "A\n";
        
        else
            cout << "E\n";
    }

    return 0;
}