case = int(input())
for ca in range(1,case+1):
    n = int(input())
    m = [[0]*n]*n
    mc = [[0]*n]*n
    for i in range(0,n):
        m[i] = list(map(int, input().split()))
    mc = [[m[j][i] for j in range(n)] for i in range(n)]        
    rr = 0
    rc = 0
    trace = 0
    for i in range(0,n):
        trace += m[i][i]
        if len(m[i]) != len(set(m[i])):
            rr += 1    
        if len(mc[i]) != len(set(mc[i])):
            rc += 1
            
    print("Case #{}: {} {} {}".format(ca, trace, rr , rc))
        

