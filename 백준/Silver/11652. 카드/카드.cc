#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<long long> v;
    long long t;
    cin >> t;

    long long num, max = 0, mnum;
    for (long long i = 0; i < t; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(),v.end());

    mnum = v[0];

    long long cnt = 0;
    for (long long i = 0; i < t-1; i++)
    {
        if(v[i] == v[i+1]){
            cnt++;
            if(max < cnt){
                max = cnt;
                mnum = v[i];
            }
        }
        else{
            cnt = 0;
        }
    }
    
    cout << mnum;

    return 0;
}
