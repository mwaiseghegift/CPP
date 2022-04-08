#include <iostream>

using namespace std;
const int maximumX = 1e6;
const long int MOD = 1e9+7;

int N, X, c;
long int dp[maximumX+1];

int main(){
    scanf("%d %d", &N, &X);

    dp[0] = 1;
    for(int i = 0; i < N; i++){
        scanf("%d", &c);
        for(int z = 0; z <= X-c; z++)
            dp[z+c] = (dp[z+c] + dp[z]) % MOD;
    }

    printf("%ld\n", dp[X]);
    return 0;
}