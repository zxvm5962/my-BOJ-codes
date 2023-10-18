#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < str.length()/2; i++)
    {
        sum1 += str[i];
        sum2 += str[str.length()/2 + i];
    }
    if(sum1 == sum2){
        cout << "LUCKY";
    }
    else{
        cout << "READY";
    }
    

    return 0;
}
