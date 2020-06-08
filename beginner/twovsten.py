

def main():
	
	t=int(input())
	while(t>0):
		x=int(input())
		
		if(x%10==0):
			print(0)
		elif(x%5==0):
			print(1)
		else:
			print(-1)
		t=t-1

if __name__=='__main__':
	main()	
