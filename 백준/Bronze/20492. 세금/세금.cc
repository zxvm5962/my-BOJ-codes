#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;

    cin >> N;
    int a = N / 100 * 78;
    int b = N / 1000 * 956;
    cout << a << ' ' << b;
}