#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    char k;
    cin >> n >> k;
    map<string, int> m;
    string str;
    while(n--){
        cin >> str;
        m.insert({str,1});
    }
    if(k == 'Y'){
        cout << m.size();
    }
    else if (k == 'F'){
        cout << m.size()/2;
    }
    else{
        cout << m.size()/3;
    }

    return 0;
}
