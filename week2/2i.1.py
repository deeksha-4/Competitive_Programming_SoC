t=int(input())
for _ in range(t):
	n=int(input())
	a=input()
	f=0
	for i in range(int(n/2)):
		if a[i]==a[n-i-1]:
			print(n-2*i)
			f=1
			break
	if f==0:
		if n%2==1:
			print(1)
		else:
			print(0)