def ispal(s):
    for i in range(int(len(s)/2)):
        if s[i] != s[len(s)-1-i]:
            return False
    return True

T = int(input())
for _ in range(T):
    n = int(input())
    s=input()
    s1 = set(s)
    if ispal(s):
        print(0)
        continue
    c=10e5
    f=0
    for j in s1:
        sd=s.replace(j, '')
        if ispal(sd):
            co = s.count(j)
            if co < c:
                c=co
                f=1
    if f==0:
        print(-1)
    else:
        print(c)
    