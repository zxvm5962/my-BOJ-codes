#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, A, B;
    int min = 1001;
    cin >> N;
    while (N--)
    {
        cin >> A >> B;
        if (A > B)
            continue;
        if (min > B)
            min = B;
    }
    if (min == 1001)
        cout << -1;
    else
        cout << min;

    return 0;
}
