#include<bits/stdc++.h>
using namespace std;
 
long long N, M;
long long X[int(1e5)];
long long D[int(1e5)];
long long times = 0;
 
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> N >> M;
    for(int m=0; m<M; m++)cin >> X[m];
    sort(X, X+M);
    for(int m=M-1; m>=1; m--){
        D[m-1] = X[m] - X[m-1];
    }
    D[M-1] = 0;
    sort(D, D+M-1);
    
    for(int m=0; m<M-N; m++)times += D[m];
    cout << times << "\n";
    return 0;
}