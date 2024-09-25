#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 두 문자열의 LCS 길이와 실제 LCS를 반환하는 함수
int LCS(const string& X, const string& Y) {
    int m = X.length();
    int n = Y.length();

    // DP 테이블 생성 및 초기화
    vector<vector<int>> L(m + 1, vector<int>(n + 1, 0));

    // DP 테이블 채우기
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (X[i - 1] == Y[j - 1]) {
                L[i][j] = L[i - 1][j - 1] + 1;
            } else {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }
    return L[m][n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string X, Y;
    cin >> X;
    cin >> Y;

    int result = LCS(X, Y);
    cout << result << endl;

    return 0;
}
