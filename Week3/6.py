T = int(input())
for _ in range(T):
    [n, q]=list(map(int, input().split()))
    l=list(map(int, input().split()))
    s=set()

    for __ in range(q):
        m = list(map(int, input().split()))
        if len(m)==3:
            le=m[1]-1
            r=m[2]-1
            for i in range(le, r+1):
                s.add(i)
        else:
            x=m[1]-1
            e=l[x]
            if x not in s:
                print(e)
            else:
                stre=str(e)
                if len(stre)==1:
                    print(e)
                    s.remove(x)
                    continue

                sum=0
                for i in stre:
                    sum+=int(i)
                l[x]=sum
                
                print(sum)