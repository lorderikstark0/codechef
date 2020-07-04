


def skillTest(li):
	li.sort()
	li2=[]
	for i in range(len(li)):
		for j in range(len(li)):
			while(i!=j):
				li2.append(abs(li[i]-li[j]))
	li2.sort()
	return li2[0]	

def main():
	t=int(input())
	while(t>0):
		n=int(input())
		li=list(map(int,input().split()))
		print(skillTest(li))
		t=t-1

if __name__=='__main__':
	main()
