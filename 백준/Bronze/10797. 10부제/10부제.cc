#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, num;
    int cnt = 0;
    cin >> N;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        if (num == N)
            cnt++;
    }
    cout << cnt;

    return 0;
}
