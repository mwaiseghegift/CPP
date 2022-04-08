#include <iostream>

using namespace std;
const int maximumN = 1000;
const long int MOD = 1e9+7;

int N;
char c[maximumN+1][maximumN+1];
long int dp[maximumN+1][maximumN+1];

int main(){
    scanf("%d", &N);
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++)
            scanf(" %c", &c[i][j]);

    dp[1][1] = (c[1][1] == '.');
    for(int i = 1; i <= N; i++){
        for(int z = 1; z <= N; z++){
            if(c[i][z] == '.'){
                if(c[i-1][z] == '.')    dp[i][z] += dp[i-1][z];
                if(c[i][z-1] == '.')    dp[i][z] += dp[i][z-1];
                dp[i][z] %= MOD;
            }
        }
    }

    printf("%ld\n", dp[N][N]);
}