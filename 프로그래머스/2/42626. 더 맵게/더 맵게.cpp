#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    int answer = 0;
    int len = scoville.size();
    
    for(int i=0; i<len;i++){
        pq.push(scoville[i]);
    }
    
    while(1){
        if(pq.top() >= K)
            break;
        if(pq.size() == 1)
            return -1;
        
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        pq.push(first + second * 2);
        
        answer++;
    }
    
    return answer;
}