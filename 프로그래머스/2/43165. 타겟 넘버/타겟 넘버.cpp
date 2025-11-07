#include <string>
#include <vector>

using namespace std;

int answer = 0;

void dfs(vector<int>& numbers, int idx, int current_sum, int target) {
    if (idx == numbers.size()) { // 마지막까지 탐색
        if (current_sum == target) answer++;
        return;
    }

    dfs(numbers, idx + 1, current_sum + numbers[idx], target);
    dfs(numbers, idx + 1, current_sum - numbers[idx], target);
}

int solution(vector<int> numbers, int target) {
    
    dfs(numbers, 0, 0, target);
    
    return answer;
}