#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> players, int m, int k) {
    int answer = 0;
    
    queue<pair<int, int>> server;
    
    int available = 0;
    
    for(int i=0; i<players.size(); i++){
        int need = players[i] / m;
        
        if(!server.empty() && server.front().second < i){ // 시간 종료
            available -= server.front().first;
            server.pop();
        }
        
        if(available < need){ // 서버 증설 필요
            server.push({need - available, i + k - 1});
            int gap = need - available;
            
            available += gap;
            answer += gap;
        }
    }
    
    return answer;
}