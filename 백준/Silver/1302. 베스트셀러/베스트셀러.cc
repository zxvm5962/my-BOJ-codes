#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    map<string,int> m1;

    string str, result;
    int n, max = 0;
    cin >> n;

    while(n--){
        cin >> str;
        if(m1.find(str) != m1.end()){
            m1[str]++;
        }
        else{
            m1.insert({str, 1});
        }
    }
    for(auto iter: m1){
        if(iter.second > max){
            max = iter.second;
            result = iter.first;
        }
    }

    cout << result;


    return 0;
}