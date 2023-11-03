#include <algorithm>
#include <iostream>
#include <deque> 

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    deque<int> dq;
    while (t--)
    {
        int num;
        for (int i = 0; i < 5; i++)
        {
            cin >> num;
            dq.push_back(num);
        }
        sort(dq.begin(),dq.end());
        dq.pop_front();
        dq.pop_back();
        
        if(dq.back() - dq.front() >= 4){
            cout << "KIN\n";
        }
        else{
            int sum = 0;
            for(auto a: dq){
                sum += a;
            }
            cout << sum << '\n';
        }
        dq.clear();
        
    }
    

    return 0;
}
