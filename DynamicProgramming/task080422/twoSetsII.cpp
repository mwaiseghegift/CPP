#include <iostream>
#include <vector>
#include <algorithm>

#define dbgv(v) cout<<'>'<< #v <<':'; for(auto ii:v)cout<<ii<<' ';cout<<endl;

#define dbg(x) cout<<'>'<< #x <<':'<< x <<endl;

using namespace std;
#define int long long
const int mod = 1e9 + 7;

void run_case(){
  int n;
  cin>>n;
  
  int sum = n*(n+1)/2;
  if(sum%2!=0){
    cout<<0<<endl;
    return;
  }
  int target = sum/2;
  
  vector<int> a;
  for(int i=0;i<n-1;i++)a.push_back(i+1);

  vector<int> current(target+1,0);
  current[0]=1;
  current[a[0]]=1;
  for(int i=1;i<n-1;i++){
    vector<int> temp = current;
    int coin = a[i];
    for(int j=0;j<=target;j++){

      current[j] = temp[j];
      if(j-coin>=0)current[j] += temp[j-coin];
      current[j] %= mod;
    }
  }
  cout<< current[target]<<endl;
  
}

signed main(){
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);int tc=1;
while(tc--)
    run_case();
return 0;
}