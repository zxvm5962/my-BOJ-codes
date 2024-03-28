#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int failure[1000001];

void fail(string pat)
{
    int j, n = pat.size();
    failure[0] = -1; // failure[0] 는 무조건 -1

    for (int i = 1; i < n; i++)
    {
        j = failure[i - 1];

        while ((pat[i] != pat[j + 1]) && (j >= 0))
        { // 일치할때까지
            j = failure[j];
        }

        if (pat[i] == pat[j + 1])
        { // 일치하면
            failure[i] = j + 1;
        }
        else
        { // 일치하지 않으면
            failure[i] = -1;
        }
    }
}

vector<int> kmp(string str, string pat)
{
    int i = 0;
    int j = 0;
    int lens = str.size();
    int lenp = pat.size();
    vector<int> v;

    while (i < lens)
    {
        if (str[i] == pat[j])
        {        // 본문과 패턴이 같다면
            i++; // 본문 한글자 뒤로
            j++; // 패턴 한글자 뒤로
        }
        else if (j == 0)
        {        // 패턴 첫글자부터 다르면
            i++; // 본문 한글자 뒤로
        }
        else
        {
            j = failure[j - 1] + 1;
        }
        if (j == lenp){
            j = failure[j-1] + 1;
            v.push_back(i-lenp);
        }
    }

    return v;
}

int main()
{

    string str;
    string pat;

    getline(cin, str);
    getline(cin, pat);
    fail(pat);

    vector<int> result = kmp(str, pat);

    if (result.size() == 0)
    {
        cout << 0;
        return 0;
    }
    else
    {
        cout << result.size() << endl;
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] + 1 << ' ';
        }
    }

    return 0;
}