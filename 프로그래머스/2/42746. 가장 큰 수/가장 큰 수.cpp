#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    
    vector<string> strNum;
    
    for(int i=0; i< numbers.size();i++){
        strNum.push_back(to_string(numbers[i]));
    }
    
    sort(strNum.begin(), strNum.end(), compare);
    
    if(strNum[0] == "0"){
        return "0";
    }
    
    for(int i=0; i< strNum.size(); i++){
        answer += strNum[i];
    }
    
    return answer;
}