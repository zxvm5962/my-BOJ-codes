#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    stack<char> s;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            s.push(str[i]);
        else if (str[i] == ')')
            s.pop();
        else if (str[i] == '*')
        {
            cout << s.size();
            return 0;
        }
    }

    return 0;
}
