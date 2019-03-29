#include<bits/stdc++.h>
using namespace std;
#define forN(n, N) for(int n=0; n<N; n++)
#define res_out(ans) cout << ans << "\n";
#define ll long long

int N, A, B, C;
int l[int(1e4)];

int dfs(int n, int a,int b,int c){
    int ret[4] = {};
    if(n == N){
        if(a == 0 || b == 0 || c == 0)return 1e6;
        return abs(A - a)  + abs(B - b) + abs(C - c) - 30;
    }
    ret[0] = dfs(n + 1, a, b, c);
    ret[1] = dfs(n + 1, a + l[n], b, c) + 10;
    ret[2] = dfs(n + 1, a, b + l[n], c) + 10;
    ret[3] = dfs(n + 1, a, b, c + l[n]) + 10;
    return *min_element(ret, ret + 4);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> N >> A >> B >> C;
    forN(n, N)cin >> l[n];
    res_out(dfs(0, 0, 0, 0));
    return 0;
}