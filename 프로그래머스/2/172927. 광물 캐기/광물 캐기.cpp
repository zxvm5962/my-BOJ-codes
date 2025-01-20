#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int sum_minerals(vector<string> &v, int idx){
    int sum = 0;
    for(int i = idx; i< idx+5 && i< v.size(); i++){
        if(v[i] == "diamond")
            sum+=25;
        else if(v[i] == "iron")
            sum +=5;
        else
            sum+=1;
    }    
    return sum;
}


int solution(vector<int> picks, vector<string> minerals) {
    int answer = 0;
    int dia = picks[0], iron = picks[1], stone = picks[2];
    int pick = dia + iron + stone;
    vector<int> rank;

    for(int i=0; i< pick * 5 && i < minerals.size(); i+= 5){
        int tmp = sum_minerals(minerals, i);
        rank.push_back(tmp);
    }
    sort(rank.begin(), rank.end(),greater<int>());

    for(int i=0; i< rank.size();i++){
        int res = rank[i];
        int dia_size, iron_size, stone_size;
        if(res == 25 && minerals.size() % 5 != 1){
            dia_size = 0;
            iron_size = 5;
            stone_size = 0;
        }
        else if(res == 5 && minerals.size() % 5 != 1){
            dia_size = 0;
            iron_size = 0;
            stone_size = 5;
        }
        else{
            dia_size = res/25;
            iron_size = (res - dia_size * 25) / 5;
            stone_size = res - dia_size * 25 - iron_size * 5;
        }
        if(dia > 0){
            answer+= dia_size + iron_size + stone_size;
            dia --;
        }
        else if(iron > 0){
            answer += dia_size * 5 + iron_size + stone_size;
            iron--;
        }
        else{
            answer+= res;
            stone--;
        }
    }


    return answer;
}