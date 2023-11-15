#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<char> s;
    vector<int> v;
    int t, num;
    char a;
    cin >> t;
    while (t--)
    {
        cin >> num;
        if (num == 3)
        {
            if (!s.empty())
            {
                if (v.back() == 1)
                {
                    s.pop_back();
                    v.pop_back();
                }

                else
                {
                    s.pop_front();
                    v.pop_back();
                }
            }
        }
        else
        {
            cin >> a;
            if (num == 1)
            {
                s.push_back(a);
                v.push_back(num);
            }
            else{
                s.push_front(a);
                v.push_back(num);
            }
        }
    }
    if (s.empty())
    {
        cout << "0";
        return 0;
    }
    while(!s.empty()){
        cout << s.front();
        s.pop_front();
    }

    return 0;
}
