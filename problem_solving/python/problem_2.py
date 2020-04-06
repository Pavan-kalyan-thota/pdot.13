n, d = map(int, input().split())
a = list(map(int, input().split()))
r = [0]*n
for i in range(n):
    if (i-d) >= 0:
        r[i-d] = a[i]
    else:
        r[i+n-d] = a[i]
for i in r:
    print(i, end=" ")
