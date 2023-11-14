#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> v;
    string str;
    int cnt = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ')' && v.empty() == 1){
            cnt++;
        }
        else if (str[i] == ')' && v.top() != '(')
                cnt++;
        else if (str[i] == ')' && v.top() == '(')
            v.pop();
        else if (str[i] == '(')
            v.push(str[i]);
    }
    cnt += v.size();
    cout << cnt;

    return 0;
}
