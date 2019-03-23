N, M = map(int, input().split())
Fm = [0]*M
KA = [list(map(int, input().split())) for _ in range(N)]
for n in range(N):
  #KA = list(map(int, input().split()))
  for i in range(KA[n][0]):
    Fm[KA[n][i+1]-1] += 1
ans = 0
for m in range(M):
  if Fm[m] == N:
    ans += 1
print(ans)