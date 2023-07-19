def swap(l, p, q):
    l[p], l[q]=l[q], l[p]

x = list(map(int, input().split()))
n=x[0]
m=x[1]

l=[]

l=list(map(int, input().split()))

s=set()
c=0
for i in l:
    if i not in s:
        c+=1
    s.add(i+1)


for j in range(m):
    [p, q]=list(map(int, input().split()))
    p, q=p-1, q-1
    swap(l, p, q)

    print(c)