#include <iostream>

using namespace std;
const int maximumN = 5000;

int N, x[maximumN+1];
long long p[maximumN+1], dp[maximumN+1][maximumN+1];

long long sum(int l, int r){
	return p[r] - p[l-1];
}

long long solve(int l, int r){
	if(dp[l][r])
        return dp[l][r];
	if(l == r)
        return x[l];
	return dp[l][r] = max(x[l]+sum(l+1, r)-solve(l+1, r), x[r]+sum(l,r-1)-solve(l,r-1));
}

int main(){
	scanf("%d", &N);
	for(int i = 1; i <= N; i++){
		scanf("%d", &x[i]);
		p[i] = p[i-1] + x[i];
	}
	printf("%lld\n", solve(1, N));
}