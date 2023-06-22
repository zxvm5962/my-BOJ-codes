#include <iostream>
#include <map>
using namespace std;
int main(void){
    int n, m;
    cin >> n >> m;
    string address, password;
    map <string, string> site;
    string temp;
    for(int i = 0; i < n; i++){
        cin >> address >> password;
        site[address] = password;
    }
    for(int i = 0; i < m; i++){
        cin >> temp;
        cout << site[temp] << '\n';
    }
}