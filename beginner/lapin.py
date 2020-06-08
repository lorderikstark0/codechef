def checkLapindrome(s):
	s1,s2='',''
	if(len(s)%2==0):
		s1=s[:len(s)//2]
		s2=s[len(s)//2:]
	else:
		s1=s[:len(s)//2]
		s2=s[len(s)//2+1:]
	l1=list(s1)
	l2=list(s2)
	l1.sort()
	l2.sort()
	s1=str(l1)
	s2=str(l2)
	if(s1==s2):
		return True
	else:
		return False	

def main():
	t=int(input())
	while(t>0):
		s=input()
		if(checkLapindrome(s)):
			print("YES")
		else:
			print("NO")
		t=t-1
			
if __name__=='__main__':
	main()