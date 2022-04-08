#include <iostream>

using namespace std;
const int maxNumber = 1e6;
const int MOD = 1e9+7;

int N, dp[maxNumber+1];

int main(){
    scanf("%d", &N);

    dp[0] = 1;
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= 6 && i-j >= 0; j++)
            dp[i] = (dp[i] + dp[i-j]) % MOD;

    printf("%d\n", dp[N]);
    return 0;
}