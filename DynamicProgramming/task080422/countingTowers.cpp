#include <iostream>
using namespace std;
const int maximumN = 1e6;
const long MOD = 1e9+7;

int T, N;
long dp[maximumN+1];

int main(){
    dp[1] = 2;
    dp[2] = 8;
    for(int i = 3; i <= maximumN; i++)
        dp[i] = ((6*dp[i-1] - 7*dp[i-2]) % MOD + MOD) % MOD;

    scanf("%d", &T);
    for(int z = 0; z < T; z++){
        scanf("%d", &N);
        printf("%ld\n", dp[N]);
    }
    return 0;
}