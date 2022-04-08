#include <iostream>

using namespace std;
const int maximumN = 100;
const int maximumX = 1e6;
const long int MOD = 1e9+7;

int N, X, c[maximumN];
long int dp[maximumX+1];

int main(){
    scanf("%d %d", &N, &X);
    for(int i = 0; i < N; i++)
        scanf("%d", &c[i]);

    dp[0] = 1;
    for(int i = 0; i < X; i++)
        if(dp[i] != 0)
            for(int j = 0; j < N; j++)
                if(i+c[j] <= X)
                    dp[i+c[j]] = (dp[i+c[j]] + dp[i]) % MOD;

    printf("%ld\n", dp[X]);
    return 0;
}
