#include <iostream>

using namespace std;
const int maximumX = 1e5;

int N, x, largest, cnt;
bool dp[maximumX+1];

int main(){
    scanf("%d", &N);

    dp[0] = true;
    for(int i = 0; i < N; i++){
        scanf("%d", &x);
        for(int z = maximumX-x; z >= 0; z--)
            if(dp[z])
                dp[z+x] = true;
    }

    for(int i = 1; i <= maximumX; i++){
        if(dp[i]){
            largest = i;
            cnt++;
        }
    }

    printf("%d\n", cnt++);
    for(int i = 1; i <= maximumX; i++)
        if(dp[i])
            printf("%d%c", i, (" \n")[i==largest]);
}