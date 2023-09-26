#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin >> n >> m;

    map<string,int> map;

    string str;

    while (n--)
    {
        cin >> str;
        map.insert({str,1});
    }
    int cnt = 0;

    while(m--){
        cin >> str;
        if(map[str] == 1){
            cnt ++;
        }
    }

    cout << cnt;


    return 0;
}