#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> &arr, int len, int target)
{
    int low = 0, high = len - 1;

    if (arr[high] < target)
        return high + 1;
    if (arr[low] > target)
        return 0;

    while (high - low > 0)
    {
        int mid = (low + high) / 2;

        if (target > arr[mid])
            low = mid + 1;
        else
            high = mid;
    }
    return high;
}
// 1 3 6
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int N, M, Anum, Bnum;
        vector<int> A, B;
        cin >> N >> M;
        while (N--)
        {
            cin >> Anum;
            A.push_back(Anum);
        }

        while (M--)
        {
            cin >> Bnum;
            B.push_back(Bnum);
        }

        sort(B.begin(), B.end());

        int num;
        int sum = 0;
        for (int i = 0; i < A.size(); i++)
        {
            num = binarySearch(B, B.size(), A[i]);
            sum += num;
        }
        cout << sum << '\n';
        A.clear(), B.clear();
    }
}