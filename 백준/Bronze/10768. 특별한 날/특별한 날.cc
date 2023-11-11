#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    if(n==2 && m == 18){
        cout << "Special";
    }
    else if(n == 2 && m < 18){
        cout << "Before";
    }
    else if(n < 2){
        cout << "Before";
    }
    else{
        cout << "After";
    }
    return 0;
}
