n=int(input())
l=[]

l=list(map(int, input().split()))

s=set()
c=0

for i in l:
    if i not in s:
        c+=1
    s.add(i+1)

print(c)