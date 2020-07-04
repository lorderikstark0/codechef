
def proudIndian(p):
	found=0
	for i in range(len(p)):
		if(p[i]!='N'):
			if(p[i]=='Y'):
				res="NOT INDIAN"
			elif(p[i]=='I'):
				res="INDIAN"
			found=1
			break
		if(found==0):
			res="NOT SURE"

	return res


def main():
	t=int(input())
	while(t>0):
		n=int(input())
		p =input() ##size of p is n 
		print(proudIndian(p))
		t=t-1

if __name__=='__main__':
	main()