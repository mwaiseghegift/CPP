#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> pii;
const int maximumN = 20;
const int INF = maximumN+1;

int N;
pii dp[1<<maximumN];
long long X, w[maximumN];

int main(){
    scanf("%d %lld", &N, &X);
    for(int i = 0; i < N; i++)
        scanf("%lld", &w[i]);

    dp[0] = {1, 0};
    for(int z = 1; z < (1<<N); z++){
        dp[z] = {INF, 0};
        for(int i = 0; i < N; i++){
            if(z&(1<<i)){
                pii can = dp[z^(1<<i)];
                if(can.second + w[i] <= X){
                    can.second += w[i];
                } else {
                    can.first++;
                    can.second = w[i];
                }
                dp[z] = min(dp[z], can);
            }
        }
    }

    printf("%d\n", dp[(1<<N)-1].first);
    return 0;
}