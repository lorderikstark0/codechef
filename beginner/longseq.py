def main():
	t=int(input())
	while(t>0):
		p=int(input())
		li1=[int(i) for i in str(p)]
		count_0=0
		count_1=0
		for i in li1:
			if(li1[i]==0):
				count_0=count_0+1
			if(li1[i]==1):
				count_1=count_1+1

		if(count_0==1 and count_1>1):
			print("Yes")
		elif(count_1==1 and count_0>1):
			print("Yes")
		else:
			print("No")
		t=t-1

if __name__=='__main__':
	main()