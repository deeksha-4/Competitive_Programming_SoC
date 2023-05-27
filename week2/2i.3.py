def isapal(s):
    for i in range(int(len(s)/2)):
        if s[i]!=s[len(s)-1-i]:
            return 0
        return 1

t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    if isapal(s):
        print("Yes")
        continue
    else:
        f=0
        for i in range(int(n/2)):
            if (f==0):
                if (s[i]!=s[n-1-i]):
                    j=i
                    while s[j]!=s[n-1-j]:
                        j+=1
                for k in range(j, int(n/2)):
                    if s[k]!=s[n-1-k]:
                        f=1
                        break
            else:
                print("No")
                break
        if (f==0):
            print("Yes")