
def substring(string,n):
	##this retrun all the substrings we will require
	li1=[]
	for len in range(1,n+1):
		##picking starting point 
		for i in range(n-len+1):
			##picking ending point 

			j=i+len-1
			for k in range(i,j+1):
				li1.append(string[k])

	return li1

def main():
	t=int(input())
	while(t>0):
		n=int(input())
		##n is the length of the string 
		string=input()
		count=0
		for i in substring(string,n):
			for j in i:
				if(j.startswith('1') and j.endswith('1')):
					count=count+1
		print(count)
		t=t-1


if __name__=='__main__':
	main()				