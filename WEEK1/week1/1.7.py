n=int(input())
for _ in range (n):
	s=input()
	a, b, c, d= int(s[0]), int(s[1]), int(s[2]), int(s[3]);
	

	if (a==b==c==d):
		print(-1)
	
	elif (a==b==c or a==c==d or b==c==d or a==b==d):
		print(6)

	else:
		print(4)
