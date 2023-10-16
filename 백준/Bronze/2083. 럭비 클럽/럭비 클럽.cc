#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string name;
    int n, k;

    while (cin >> name >> n >> k)
    {
        if (name == "#")
            break;
        if(n > 17 || k >= 80){
            cout << name << ' ' << "Senior\n";
        }
        else{
            cout << name << ' ' << "Junior\n";
        }
    }
    return 0;
}
