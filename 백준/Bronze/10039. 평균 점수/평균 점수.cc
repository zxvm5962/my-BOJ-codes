#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sum = 0;
    int num;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        if(num < 40){
            num = 40;
        }
        sum += num;
    }
    cout << sum/5;

    return 0;
}
