#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;

bool s[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> s[i + 1];
    }

    cin >> M;

    int a, b;

    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;

        if (a == 1)
        {
            for (int i = 1; i <= N; i++)
            {
                if(i%b == 0){
                    s[i] = !s[i];
                }
            }
        }
        else{
            int gap = 1;
            s[b] = !s[b];
            while(b + gap <= N && b - gap > 0){
                if(s[b-gap] == s[b+gap]){
                    s[b-gap] = !s[b-gap];
                    s[b+gap] = !s[b+gap];
                    gap++;
                }
                else{
                    break;
                }
            }
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << s[i] << ' ';
        
        if(i % 20 == 0) cout << "\n";
    }


    return 0;
}
