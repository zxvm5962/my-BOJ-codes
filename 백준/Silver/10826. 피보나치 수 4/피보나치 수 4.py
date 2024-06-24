import sys
import math
N = int(sys.stdin.readline())

a = []
a.append(0)
a.append(1)
a.append(1)
for i in range(1, N):
    a.append(a[i+1] + a[i])

print(a[N])