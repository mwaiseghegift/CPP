#include <iostream>
using namespace std;
const int maxN = 11;
const int maxM = 1001;
const long long MOD = 1e9+7;

int N, M;
long long dp[maxN][maxM][1<<maxN];

int main(){
    scanf("%d %d", &N, &M);
    dp[N][0][0] = 1;
    for(int i = 1; i <= M; i++){
        for(int j = 0; j < (1<<N); j++)
            dp[0][i][j<<1] = dp[N][i-1][j];

        for(int j = 1; j <= N; j++){
            int x = 1<<(j-1);
            int y = 1<<j;
            for(int z = 0; z < (1<<(N+1)); z++){
                dp[j-1][i][z] %= MOD;
                if((z&x) && (z&y))
                    continue;
                if(z&x)
                    dp[j][i][z^x] += dp[j-1][i][z];
                else if(z&y)
                    dp[j][i][z^y] += dp[j-1][i][z];
                else {
                    dp[j][i][z^x] += dp[j-1][i][z];
                    dp[j][i][z^y] += dp[j-1][i][z];
                }
            }
        }
    }
    printf("%lld\n", dp[N][M][0] % MOD);
    return 0;
}