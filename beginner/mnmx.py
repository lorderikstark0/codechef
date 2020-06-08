
def maxcost(li1):
	cost=0
	for i, j in li1:
		if li1[i] > li1[j]:
			li1.pop(i)
			cost+=li1[j]
		if li1[i] < li1[j]:
			li1.pop(j)
			cost+=li1[i]
	return cost	

def main():
	t=int(input())
	while(t>0):
		n=int(input())
		li=list(map(int,input().split()))
		print(maxcost(li))
		t=t-1

if __name__=='__main__':
	main()