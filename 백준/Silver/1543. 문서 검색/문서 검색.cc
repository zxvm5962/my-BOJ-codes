#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str, word;
    getline(cin, str);
    getline(cin, word);
    int cnt = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (word.compare(str.substr(i, word.length())) == 0)
        {
            cnt++;
            i += word.length() - 1;
        }
    }

    cout << cnt;

    return 0;
}
