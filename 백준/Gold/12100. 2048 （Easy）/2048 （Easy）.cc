#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N;

vector<vector<int>> board;

char dirc[4] = {'L', 'D', 'U', 'R'};

int maxV = 0;

deque<int> calc(deque<int> &dq)
{
    deque<int> tmp;

    for (int i = 0; i < dq.size(); i++)
    {
        if (i+1 < dq.size() && dq[i] == dq[i + 1] )
        {
            tmp.push_back(dq[i] * 2);
            i++;
        }
        else
            tmp.push_back(dq[i]);
    }

    return tmp;
}

void swipe(char dirc, vector<vector<int>> &board)
{
    if (dirc == 'R')
    {
        for (int i = 0; i < N; i++)
        {
            deque<int> dq;

            for (int j = N - 1; j >= 0; j--)
            {
                int cur = board[i][j];
                if (cur == 0)
                    continue;

                dq.push_back(cur);
            }

            dq = calc(dq);

            for (int j = 0; j < N; j++)
            {
                if (j < dq.size())
                    board[i][N - 1 - j] = dq[j];
                else
                    board[i][N - 1 - j] = 0;
            }
        }
    }
    else if (dirc == 'L')
    {
        for (int i = 0; i < N; i++)
        {
            deque<int> dq;

            for (int j = 0; j < N; j++)
            {
                int cur = board[i][j];
                if (cur == 0)
                    continue;

                dq.push_back(cur);
            }

            dq = calc(dq);

            for (int j = 0; j < N; j++)
            {
                if (j < dq.size())
                    board[i][j] = dq[j];
                else
                    board[i][j] = 0;
            }
        }
    }
    else if (dirc == 'U')
    {
        for (int i = 0; i < N; i++)
        {
            deque<int> dq;

            for (int j = 0; j < N; j++)
            {
                int cur = board[j][i];
                if (cur == 0)
                    continue;

                dq.push_back(cur);
            }

            dq = calc(dq);

            for (int j = 0; j < N; j++)
            {
                if (j < dq.size())
                    board[j][i] = dq[j];
                else
                    board[j][i] = 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            deque<int> dq;

            for (int j = N - 1; j >= 0; j--)
            {
                int cur = board[j][i];
                if (cur == 0)
                    continue;

                dq.push_back(cur);
            }

            dq = calc(dq);

            for (int j = 0; j < N; j++)
            {
                if (j < dq.size())
                    board[N - 1 - j][i] = dq[j];
                else
                    board[N - 1 - j][i] = 0;
            }
        }
    }
}

void backtrack(int cnt, vector<vector<int>> &board)
{
    if (cnt == 5)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                maxV = max(maxV, board[i][j]);
            }
        }

        return;
    }

    for (int i = 0; i < 4; i++)
    {
        vector<vector<int>> tmp = board;

        swipe(dirc[i], board);

        backtrack(cnt + 1, board);

        board = tmp;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    board.resize(N + 1);

    int a;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a;

            board[i].push_back(a);
        }
    }

    backtrack(0, board);

    cout << maxV;

    return 0;
}
