T = int(input())
for _ in range(T):
    n=int(input())
    s=input()
    if n%2==1:
        print(-1)
        continue
    l1=[]
    l2=[]
    l3=[]
    for i in range(n/2):
        l1.append(s[i])
        l2.append(s[n/2+i])
        if s[i]==s[n/2+i]:
            l3.append(1)
        else:
            l3.append(0)
    c=0
    while(4):
        if 1 not in l3:
            print(c)
            break
        