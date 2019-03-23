#include<bits/stdc++.h>
using namespace std;
#define forN(n, N) for(int n=0; n<N; n++)
#define res_out(ans) cout << ans << "\n";
#define ll long long
 
int A[int(1e5)], dp[int(1e5)], p[int(1e6)];
 
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N, M, tmp, c[] = {0, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    cin >> N >> M;
    forN(m, M)cin >> A[m];
    sort(A, A+M);
    vector<int> dp(N+1, -1); 
    dp[0] = 0;
    for(int n=2; n<=N; n++){
        for(int m=M-1; m>=0; m--){
            if(c[A[m]] <= n && dp[n-c[A[m]]] >= 0){
                tmp = dp[n - c[A[m]]] + 1;
                if(tmp > dp[n]){
                    //cout << n << " " << A[m] << " " << dp[n - c[A[m]]] << "\n";
                    dp[n] = tmp;
                    p[n] = A[m];
                }
            }
        }
    }
    string ans;
    while(N > 0){
        ans += '0' + p[N];
        N -= c[p[N]];
    }
    res_out(ans)
    return 0;
}