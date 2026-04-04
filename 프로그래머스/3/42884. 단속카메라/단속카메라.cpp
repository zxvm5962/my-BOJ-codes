#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> a, vector<int> b){
    return a[1] < b[1];
}

int solution(vector<vector<int>> routes) {
    int answer = 0;
    
    sort(routes.begin(), routes.end(), cmp);
    
    while(!routes.empty()){
        int cur_start = routes[0][0];
        int cur_end = routes[0][1];
        
        vector<int> idx;
        idx.push_back(0);
        for(int j=1; j<routes.size(); j++){
            if(routes[j][0] <= cur_end){
                idx.push_back(j);
            }
        }
        
        answer++;

        for(int i= idx.size() - 1; i >= 0; i--){
            routes.erase(routes.begin() + idx[i]);
        }
    }
    
    return answer;
}