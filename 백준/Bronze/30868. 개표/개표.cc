#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, num;
    cin >> t;
    while (t--)
    {
        cin >> num;
        int plus = num / 5;
        int line = num % 5;
        for (int i = 0; i < plus; i++)
        {
            cout << "++++ ";
        }
        for (int i = 0; i < line; i++)
        {
            cout << '|';
        }
        cout << '\n';
    }

    return 0;
}
