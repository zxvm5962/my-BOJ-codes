#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(string message, vector<vector<int>> spoiler_ranges) {
    int answer = 0;
    unordered_map<string, int> m; // 단어, 중요도(1: 안중요 2: 중요)
    
    int idx = 0;
    int imp = 1;
    
    vector<bool> is_spoiler(message.size() + 1, 0);
    for(const auto& r : spoiler_ranges) {
        for(int i = r[0]; i <= r[1]; i++) {
            is_spoiler[i] = true;
        }
    }
    
    for(int i=0; i<message.size(); i++){ 
        if(message[i] != ' ' && is_spoiler[i]) {
            imp = 2;
        }
        
        if(message[i] == ' '){
            string s = message.substr(idx, i - idx);
            idx = i + 1;
            if(m.find(s) == m.end()){ // 이 단어가 없으면
                m[s] = imp;
            }
            else if(m[s] == 2 && imp == 1){
                m[s] = 1;
            }
            imp = 1;
        }
        else if(i == message.size() - 1){
            string s = message.substr(idx);
            if(m.find(s) == m.end()){ // 이 단어가 없으면
                m[s] = imp;
            }
            else if(m[s] == 2 && imp == 1){
                m[s] = 1;
            }
            imp = 1;
        }
    }
    
    for(auto a: m){
        if(a.second == 2){
            answer++;
        }
    }
    
    return answer;
}