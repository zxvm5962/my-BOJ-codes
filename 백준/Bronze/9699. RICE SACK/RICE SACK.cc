#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

vector<int> v(10);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long T, N, M, K;
    cin >> T;
    int num = 1;
    while (T--)
    {
        int max = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> N;
            if (max < N)
                max = N;
        }
        cout << "Case #" << num << ": " << max << '\n';
        num++;
    }

    return 0;
}
