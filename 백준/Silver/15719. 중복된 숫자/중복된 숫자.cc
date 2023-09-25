#include <iostream>
#include <vector>

using namespace std;

int arr[10000000];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, num;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> num;
        arr[num]++;

        if(arr[num] == 2){
            cout << num;
            break;
        }
    }

    return 0;
}