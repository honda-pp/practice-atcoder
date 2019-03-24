#include <bits/stdc++.h>
using namespace std;
 
typedef pair<int, int> YM;
 
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N, M, y;
  cin >> N >> M;
  int P[M], X[M];
  vector<YM> ym[N];
  for(int m=0; m<M; m++){
    cin >> P[m] >> y;
    ym[P[m]-1].push_back({y, m});
  }
  for(int n=0; n<N; n++){
    sort(
      ym[n].begin(), ym[n].end(),
      [](const YM& ym0, const YM& ym1) {return ym0.first < ym1.first;}
    );    
    for(int i=0; i<ym[n].size(); i++){
      X[ym[n][i].second] = i+1;
    }
  }
  for(int m=0; m<M; m++)printf("%06d%06d\n", P[m], X[m]);
  return 0;
}