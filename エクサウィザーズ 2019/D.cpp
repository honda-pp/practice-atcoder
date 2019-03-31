#include<bits/stdc++.h>
using namespace std;
#define forN(n, N) for(int n=0; n<N; n++)
#define res_out(ans) cout << ans << "\n";
#define ll long long

ll DIV = 1e9 + 7;
int N, S[int(2e5)], memo[int(2e5)][200];

ll dfs(int mod, int n){
    if(memo[mod][n] != -1){
        //cout << "1: " << mod << " " << n << " " << S[n] << " ";
        //res_out(memo[mod][n])
        return memo[mod][n];
    }
    else if(n == 0){
        memo[mod][n] = mod % S[n];
        //cout << "2: " << mod << " " << n << " ";
        //res_out(memo[mod][n])
        return memo[mod][n];
    }
    else{
        memo[mod][n] = (dfs(mod % S[n], n - 1) + dfs(mod, n - 1) * n) % DIV;
        //cout << "3: " << mod << " " << n << " ";
        //res_out(memo[mod][n])
        return memo[mod][n];
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int X;
    cin >> N >> X;
    forN(n, N)cin >> S[n];
    memset(memo, -1, (X + 1) * 200 * sizeof(int));
    sort(S, S + N);
    res_out(dfs(X, N - 1))
    /*
    forN(x, X + 1){
        forN(n, N)cout << memo[x][n] << " ";
        res_out(" ")
    }
    */
    return 0;
}