#include <iostream>
#include <queue>
#include <vector>

using namespace std;

queue<pair<int,int>> q;
vector<int> result;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, num;
    cin >> N;
    result.resize(N+1);

    for (int i = 1; i <= N; i++)
    {
        cin >> num;
        q.push({num,i});
    }
    
    
    int time = 0;
    while(!q.empty()){
        int f = q.front().first;
        int idx = q.front().second;
        f--;
        time++;
        if(f == 0){
            result[idx] = time;
            q.pop();
        }
        else{
            q.pop();
            q.push({f,idx});
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << result[i] << ' ';
    }
    

    return 0;
}