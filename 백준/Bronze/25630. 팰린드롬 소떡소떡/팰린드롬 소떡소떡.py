N = int(input())
st = list(input())
cnt = 0
for i in range(N // 2) :
    if st[i] != st[-1-i] :
        cnt += 1
print(cnt)
