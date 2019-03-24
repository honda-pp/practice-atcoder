N = int(input())
 
L = list(map(int, input().split()))
 
L.sort()
 
sum_ = 0
for l in L[:-1]:
    sum_ += l
if sum_ > L[-1]:
    print("Yes")
else:
    print("No")