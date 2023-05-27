t=int(input())
for _ in range(t):
    s=input()
    se=set(s)
    if (len(se)==1):
        print("NO")
        continue
    n=len(s)
    if (n%2==1):
        d=int((n-1)/2)
        s1=s[0:d]
        se1=set(s1)
        if (len(se)==2 and len(se1)==1):
            print("NO")
        else:
            print("YES")
    else:
            print("YES")