#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N;

long long max_ans = -2e9;

vector<int> numbers;      // 숫자
vector<char> oper;        // 연산자

int calculate(int a, int b, char op)
{
    if (op == '-')
    {
        return a - b;
    }
    else if (op == '+')
    {
        return a + b;
    }
    else
    {
        return a * b;
    }
}

void select(int idx, int cur_res)
{
    if (idx >= oper.size()) // 다 확인했으면
    {
        if (cur_res > max_ans)
            max_ans = cur_res;
        return;
    }

    int next = calculate(cur_res, numbers[idx + 1], oper[idx]); // 괄호 없이
    select(idx + 1, next);

    if(idx + 1 < oper.size()){
        int next = calculate(numbers[idx + 1], numbers[idx + 2], oper[idx + 1]);
        
        select(idx + 2, calculate(cur_res, next, oper[idx]));
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    string str;

    cin >> str;

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            numbers.push_back(str[i] - '0');
        }
        else
        {
            oper.push_back(str[i]);
        }
    }

    select(0, numbers[0]);

    cout << max_ans;

    return 0;
}