#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
const int maximumN = 20;

bool tight[maximumN];
long long dp[10][maximumN];

long long solve(long long x){
    if(x <= 10) return x;

    vector<int> D;
    memset(dp, 0, sizeof(dp));
    memset(tight, 0, sizeof(tight));
    for(int i = 0; x; i++){
        D.push_back(x%10);
        x /= 10;
    }
    reverse(D.begin(), D.end());
    int N = (int) D.size();

    tight[0] = true;
    for(int i = 1; i < N; i++)
        tight[i] = tight[i-1] && (D[i] != D[i-1]);
    for(int d = 1; d < D[0]; d++)
        dp[d][0] = 1;

    for(int i = 1; i < N; i++){
        if(tight[i-1])
            for(int d = 0; d < D[i]; d++)
                if(d != D[i-1])
                    dp[d][i]++;

        for(int d = 1; d <= 9; d++)
            dp[d][i]++;

        for(int d1 = 0; d1 <= 9; d1++)
            for(int d2 = 0; d2 <= 9; d2++)
                if(d1 != d2)
                    dp[d2][i] += dp[d1][i-1];
    }

    long long cnt = tight[N-1];
    for(int d = 0; d <= 9; d++)
        cnt += dp[d][N-1];
    return cnt;
}

int main(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", solve(b) - solve(a-1));
    return 0;
}