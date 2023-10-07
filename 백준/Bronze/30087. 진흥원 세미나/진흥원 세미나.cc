#include <iostream>
#include <stdio.h>
#include <vector>
#include <cstring>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> str;
        if (str == "Algorithm")
            cout << 204 << '\n';
        else if (str == "DataAnalysis")
            cout << 207 << '\n';
        else if (str == "ArtificialIntelligence")
            cout << 302 << '\n';
        else if (str == "CyberSecurity")
            cout << "B101\n";
        else if (str == "Network")
            cout << 303 << '\n'; 
        else if (str == "Startup")
            cout << 501 << '\n';
        else
            cout << 105 << '\n';
    }

    return 0;
}