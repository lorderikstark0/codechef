

def main():
	t=int(input())
	while(t>0):
		n=int(input())
		while(n>0):
			lst=[int(i) for i in input().split][:n]
			n=n-1