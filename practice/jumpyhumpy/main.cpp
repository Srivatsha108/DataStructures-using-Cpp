n=int(input())
l=list(map(int,input().split()))
k=[]
for i in range(len(l)-1):
    sum=l[i]
    j=i+1
    while(l[j-1]<l[j]):
            sum^=l[j]
            j+=1 
    k.append(sum)
print(max(k))              