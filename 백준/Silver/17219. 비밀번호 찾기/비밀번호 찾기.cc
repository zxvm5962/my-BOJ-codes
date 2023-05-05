#include <iostream>
#include <map>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n,m;
    map<string,string> M;
    string a,b;

    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> a >> b;

        M[a] = b;
    }

    for(int i=0;i<m;i++){
        cin >> a;

        cout << M[a] << '\n';

    }
    return 0;
}