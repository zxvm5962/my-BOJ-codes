#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    int num, max = 0;
    int cnt = 0,begin;
    while(n--){
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if(max < v[i]){
            max = v[i];
            begin = i;
        }
        else{
            if(cnt < i - begin){
                cnt = i - begin;
            }
        }
    }

    cout << cnt;
    
    

    return 0;
}
