#include <iostream>

using namespace std;
const int maxN = 1e5;
const int maxM = 100;
const long MOD = 1e9+7;

int N, M, x[maxN+1];
long ans, dp[maxN+1][maxM+1];

int main(){
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i++)
        scanf("%d", &x[i]);
    if(x[1])
        dp[1][x[1]] = 1;
    else
        for(int i = 1; i <= M; i++)
            dp[1][i] = 1;
    for(int i = 2; i <= N; i++){
        for(int z = 1; z <= M; z++){
            dp[i][z] = dp[i-1][z];
            if(z != 1)  dp[i][z] += dp[i-1][z-1];
            if(z != M)  dp[i][z] += dp[i-1][z+1];
            dp[i][z] %= MOD;
        }

        if(x[i])
            for(int z = 0; z <= M; z++)
                if(z != x[i])
                    dp[i][z] = 0;
    }

    for(int i= 1; i <= M; i++)
        ans = (ans + dp[N][i]) % MOD;
    printf("%ld\n", ans);
    return 0;
}