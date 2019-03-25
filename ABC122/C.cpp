#include<bits/stdc++.h>
using namespace std;
#define forN(n, N) for(int n=0; n<N; n++)
#define res_out(ans) cout << ans << "\n";
#define ll long long
 
int l[int(1e6)], r[int(1e6)];
int dp[int(1e6)];
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N, Q, count;
    string S;
    cin >> N >> Q >> S;
    forN(q, Q)cin >> l[q] >> r[q];
    forN(i, N){
        dp[i+1] = dp[i];
        if(S[i] == 'A' && S[i+1] == 'C')dp[i+1]++;
    }
    forN(q, Q){
        res_out(dp[r[q]-1] - dp[l[q]-1])
    }
    return 0;
}