#include <iostream>

using namespace std;
const int maximumN = 1e6;
const int INF = 0x3f3f3f3f;

int N, dp[maximumN+1];

int main(){
    scanf("%d", &N);
    fill(dp+1, dp+N+1, INF);

    for(int i = 1; i <= N; i++){
        int z = i;
        while(z > 0){
            if(z%10 != 0)
                dp[i] = min(dp[i], dp[i-(z%10)]+1);
            z /= 10;
        }
    }

    printf("%d\n", dp[N]);
    return 0;
}