#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, sum;
    vector<int> v;
    cin >> t;
    while(t--){
        int n, num;
        sum = 0;
        cin >> n;
        while(n--){
            cin >> num;
            sum += num;
        }
        v.push_back(sum);
    }
    sort(v.begin(),v.end());

    long long sum2 = 0, sum3 = 0;
    vector<long long> v2;
    for(int i=0; i<v.size();i++){
        sum2 += v[i];
        v2.push_back(sum2);
    }
    for (int i = 0; i < v2.size(); i++)
    {
        sum3 += v2[i];
    }
    
    cout << sum3;
    

    return 0;
}
