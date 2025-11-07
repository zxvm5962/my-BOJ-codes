#include <string>
#include <vector>

using namespace std;

int parent[201];

int find(int x){
    if(parent[x] == x)
        return x;
    
    return parent[x] = find(parent[x]);
}

void union_set(int a, int b){
    a = find(a);
    b = find(b);
    
    if(a!=b)
        parent[b] = a;
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i=1; i<=n; i++){
        parent[i] = i;
    }
    for(int i =0; i< n; i++){
        for(int j=0; j< n; j++){
            if(i==j)
                continue;
            if(computers[i][j] == 1)
                union_set(i + 1, j + 1);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (find(i) == i)
            answer++;
    }
    
    return answer;
}