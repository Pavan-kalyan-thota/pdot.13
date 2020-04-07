n = int(input())
a = [[]*n]*n 
for i in range(n):
    a[i] = list(map(int, input().split()))
lr=0
rl=0
for i in range(n):
    lr += a[i][i]
    rl += a[i][n-1-i]
print(abs(lr-rl))