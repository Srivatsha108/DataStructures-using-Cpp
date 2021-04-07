from itertools import combinations as c
t=int(input())
for i in range(t):
    s=input()
    s=[int(i) for i in s]
    total=0
    for j in range(len(s)):
        k=list(c(s,j+1))
        p=[sum(i) for i in k]
        total+=sum(p)
        
    print(total)  