T = int(input())
d={}
for _ in range(T):  
    s=input()
    if s not in d:
        print("OK")
        d[s]=0
    else:
        i=d[s]+1
        while(True):
            s1 = s + str(i)
            if s1 not in d:
                print(s1)
                d[s]=i
                break
            i+=1