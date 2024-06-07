#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    double num;
    vector<double> v;
    while (N--)
    {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < 7; i++)
    {
        cout << fixed;
        cout.precision(3);
        cout << v[i] <<'\n';
    }
    
    
}