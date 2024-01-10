#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, num;

    vector<int> v;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int cnt = 0;
        cin >> n;
  
        for (int j = 0; j < 20; j++)
        {
            cin >> num;
            v.push_back(num);
            for (int k = 0; k < v.size(); k++)
            {
                if(v[k] > num){
                    cnt += j-k;
                    break;
                }
            }
            sort(v.begin(),v.end());

        }
        cout << n << ' ' << cnt << '\n';
        v.clear();
    }
    
    return 0;
}