#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    // 각 크기별 귤의 개수를 저장
    map<int, int> counter;
    for (int size : tangerine) {
        counter[size]++;
    }
    
    // 개수를 기준으로 정렬하기 위해 vector로 변환
    vector<int> counts;
    for (const auto& pair : counter) {
        counts.push_back(pair.second);
    }
    
    // 개수가 많은 순으로 정렬
    sort(counts.begin(), counts.end(), greater<int>());
    
    int total = 0;
    int answer = 0;
    
    // k개가 될 때까지 가장 개수가 많은 크기부터 선택
    for (int count : counts) {
        total += count;
        answer++;
        if (total >= k) break;
    }
    
    return answer;
}