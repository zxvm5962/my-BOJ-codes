#include <iostream>
#include <stdio.h>
#include <vector>
#include <cstring>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int arr[27] = {0};
    int max = 0;

    while(getline(cin,str)){
        for(int i=0; i<str.length();i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                arr[str[i]-'a']++;
                if(max < arr[str[i]-'a']){
                    max = arr[str[i]-'a'];
                }
            }
        }

    }

    for(int i=0; i<26;i++){
        if(max == arr[i]){
            printf("%c",i+'a');
        }
    }


    return 0;
}