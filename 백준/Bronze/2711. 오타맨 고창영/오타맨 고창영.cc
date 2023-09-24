#include <iostream>

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while(t--){
        int n;
        string str;
        cin >> n >> str;
        str.erase(str.begin() + n-1);
        cout << str << '\n';
    }
}