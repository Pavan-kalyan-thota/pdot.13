case = int(input())
for ca in range(1,case+1):
    s = list(map(int,input()))
    re = []
    prev = 0
    count = 0
    for i in s:
        #if len(res) == 0:
        if i == prev:
            re.append(i)
        elif i > prev:
            re.append("("*(i-prev))
            re.append(i)
            prev = i 
        else:
            re.append(")"*(prev-i))
            re.append(i)
            prev = i    
        count += 1            
        if count == len(s) and prev != 0:
            re.append(")"*prev)   
    res = ""
    for i in re:
        res += str(i)        

    print("Case #{}: {}".format(ca, res))



