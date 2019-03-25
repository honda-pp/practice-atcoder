S = input()
max = 0
for i in range(len(S)):
    if(S[i] not in ['A', 'T', 'C', 'G']):
        continue
    for n in range(i, len(S)):
        if(S[n] in ['A', 'T', 'C', 'G']):
            if(max < n - i + 1):
                max = n - i + 1
        else:
            break
print(max)
