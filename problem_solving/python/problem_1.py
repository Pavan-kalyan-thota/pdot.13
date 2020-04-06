n = int(input())
a = list(map(int, input().split()))
#you can't use this print(a[::-1])
a.reverse()
for i in a:
    print(i,end=" ")