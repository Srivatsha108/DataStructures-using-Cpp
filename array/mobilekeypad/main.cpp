t=int(input())
d={}
d[2]=["A","B","C"]
d[3]=["D","E","F"]
d[4]=["G","H","I"]
d[5]=["J","K","L"]
d[6]=["M","N","O"]
d[7]=["P","Q","R","S"]
d[8]=["T","U","V"]
d[9]=["W","X","Y","Z"]
for i in range(t):
    s=input()
    for i in s:
        for k,j in d.items():
            if i==" ":
                print(0,end="")
                break
            if i in j:
                print(str(k)*(j.index(i)+1),end="")
    print()                