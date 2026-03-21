#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int N;

string res;

void swap(string &str, int idx)
{
    if (str[idx] == '0')
    {
        str[idx] = '1';
    }
    else
    {
        str[idx] = '0';
    }
}

int solve(string str, int cnt)
{

    for (int i = 1; i < N; i++)
    {
        if (str[i - 1] != res[i - 1])
        {
            swap(str, i - 1);
            swap(str, i);

            if (i < N - 1)
            {
                swap(str, i + 1);
            }

            cnt++;
        }
    }

    if (str == res)
        return cnt;

    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    string now;

    cin >> now;
    cin >> res;

    string tmp = now;

    swap(tmp, 0); // 0번 스위치 켜기
    swap(tmp, 1);

    int case1 = solve(tmp, 1);
    int case2 = solve(now, 0);

    if(case1 == -1 && case2 == -1){
        cout << -1;
    }
    else if(case1 == -1){
        cout << case2;
    } 
    else if(case2 == -1){
        cout << case1;
    }
    else{
        cout << min(case1, case2);
    }

    return 0;
}

