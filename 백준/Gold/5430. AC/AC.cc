#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    deque<int> dq;

    int T;
    cin >> T;
    while (T--)
    {
        bool flag = true;

        int n, point = 1, temp;
        string rd, str, num;
        cin >> rd >> n >> str;
        if (n == 0)
        {
            goto spot;
        }
        for (int i = 1; i < str.length(); i++)
        {
            if (str[i] == ',' || str[i] == ']')
            {
                num = str.substr(point, i - point);
                temp = stoi(num);
                dq.push_back(temp);
                point = i + 1;
            }
        }

    spot:
        bool idx = true;

        for (int i = 0; i < rd.length(); i++)
        {
            if (rd[i] == 'R')
            {
                idx = !idx;
            }
            else if (rd[i] == 'D')
            {
                if (dq.empty())
                {
                    flag = false;
                    break;
                }
                if (idx == true)
                {
                    dq.pop_front();
                }
                else
                {
                    dq.pop_back();
                }
            }
        }
        if (flag == false)
        {
            cout << "error\n";
        }
        else
        {
            cout << '[';
            while (!dq.empty())
            {
                if (dq.size() == 1)
                {
                    cout << dq.back();
                    dq.pop_back();
                }
                else
                {
                    if (idx == false)
                    {
                        cout << dq.back() << ',';
                        dq.pop_back();
                    }
                    else
                    {
                        cout << dq.front() << ',';
                        dq.pop_front();
                    }
                }
            }
            cout << ']' << '\n';
        }
    }

    return 0;
}
