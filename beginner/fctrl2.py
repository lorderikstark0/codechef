
def factorial(n):
	if (n==0 or n==1):
		return 1
	else:
		return n*(factorial(n-1))

def main():
	t=int(input())
	while(t>0):
		n=int(input())
		print(factorial(n))
		t=t-1

if __name__=='__main__':
	main()		



