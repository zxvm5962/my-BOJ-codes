#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

void draw()
{
    cout << " @@@   @@@ \n";
    cout << "@   @ @   @\n";
    cout << "@    @    @\n";
    cout << "@         @\n";
    cout << " @       @ \n";
    cout << "  @     @  \n";
    cout << "   @   @   \n";
    cout << "    @ @    \n";
    cout << "     @     \n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long T, N, M, K;
    cin >> N;
    while (N--)
    {
        draw();
    }
    return 0;
}
