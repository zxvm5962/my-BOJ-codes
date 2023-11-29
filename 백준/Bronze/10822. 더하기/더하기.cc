#include <algorithm>
#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin >> str;
    int sum = 0;
    istringstream ss(str);
    string token;
    vector<std::string> tokens;

    while (std::getline(ss, token, ','))
    {
        tokens.push_back(token);
    }

    for (const auto &t : tokens)
    {
        sum += stoi(t);
    }
    cout << sum;

    return 0;
}
