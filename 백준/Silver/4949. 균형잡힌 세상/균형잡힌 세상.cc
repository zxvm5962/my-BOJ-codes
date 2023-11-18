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
    while (1)
    {
        stack<char> s;
        bool flag = true;
        getline(cin, str);
        if (str.compare(".") == 0)
            break;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(' || str[i] == '[')
                s.push(str[i]);
            else if (str[i] == ')')
            {
                if (s.empty() != 1 && s.top() == '(')
                    s.pop();
                else
                    flag = false;
            }
            else if (str[i] == ']')
            {
                if (s.empty() != 1 && s.top() == '[')
                    s.pop();
                else
                    flag = false;
            }
            else
                continue;
        }
        if (s.empty() == 1 && flag == true)
            cout << "yes\n";

        else
            cout << "no\n";
        while (!s.empty())
        {
            s.pop();
        }
        
    }

    return 0;
}
