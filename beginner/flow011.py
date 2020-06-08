
def main():
	t=int(input())
	while(t>0):
		sal=int(input())
		hra=0
		da=0
		if(sal <1500):
			hra= 0.1*sal
			da= 0.9*sal
		if(sal>=1500):
			hra=500
			da=0.98*sal

		gross_sal=sal+hra+da
		print("{:.2f}".format(gross_sal))
		t=t-1

if __name__=='__main__':
	main()