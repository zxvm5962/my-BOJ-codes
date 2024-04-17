#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[3];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int num;

    cin >> N;
    while (N--)
    {
        cin >> num;
        arr[num]++;
    }
    if (arr[0] > arr[1])
        cout << "Junhee is not cute!";
    else
        cout << "Junhee is cute!";
    return 0;
}