#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N, T, A;
  cin >> N >> T >> A;
  int H[N];
  for(int n=0; n<N; n++)cin >> H[n];
  T -= A;
  float dif;
  int result = 0;
  float min = 100000;
  for(int n=0; n<N; n++){
    dif = abs(T - 0.006 * H[n]);
    if(min > dif){
      min = dif;
      result = n + 1;
    }
  }
  cout << result << "\n";
  return 0;
}