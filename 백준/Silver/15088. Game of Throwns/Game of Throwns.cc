#include <algorithm>
#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int num;
    string str;
    stack<int> s;
    bool flag = true;
    for (int i = 0; i < k; i++)
    {
        cin >> str;
        if (flag == true)
        {
            if (str == "undo")
            {
                flag = false;
                k++;
            }
            else
            {
                num = stoi(str);
                s.push(num);
            }
        }
        else
        {
            num = stoi(str);
            while (num--)
            {
                if (!s.empty())
                    s.pop();
            }
            flag = true;
        }
    }
    int sum = 0;
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    int ans = sum % n;
    if(ans < 0){
        cout << ans + n;
    }
    else{
        cout << ans;
    }

    return 0;
}