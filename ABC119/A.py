import re
S = input()
y, m, d = map(int, re.sub("/", " ", S).split())
ans = "Heisei"
if y > 2019:
  ans = "TBD"
elif y == 2019:
  if m > 4:
    ans = "TBD"
  elif m == 4:
    if d > 30:
      abs = "TBD"
print(ans)
