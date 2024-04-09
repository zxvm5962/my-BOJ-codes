#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    double N, X, Y;
    double temp, num;
    while (T--)
    {
        cin >> N >> X >> Y;
        double min = 10000000;
        for (int i = 0; i < N - 1; i++)
        {
            cin >> num;
            temp = X / num;
            if (min > temp)
                min = temp;
        }
        cin >> num;

        if (Y <= num)
        {
            temp = X / num;
            if (min <= temp)
            {
                cout << "-1\n";
                continue;
            }
            else{
                cout << "0\n";
                continue;
            }
        }

        temp = (X - Y) / num;
        temp++;

        if (temp >= min)
        {
            cout << "-1\n";
            continue;
        }

        while (1)
        {
            temp = (X - Y) / num;
            temp++;
            if (temp >= min)
                break;
            if (Y == 0 || Y < num)
                break;
            Y--;
        }
        Y++;
        if (Y <= num)
        {
            cout << "0\n";
            continue;
        }
        cout << Y << "\n";
    }

    return 0;
}
