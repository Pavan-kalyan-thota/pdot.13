s = input()
st = []
for i in s:
    if len(st)!=0 and st[-1]==i:
        st.pop()
    else:
        st.append(i)
if len(st)==0:
    print("Empty String")
else:
    print("".join(i for i in st))            