import sys 

def main():
	nums = map(int,sys.stdin.readline().split())
	num=nums[0]-nums[1]
	print (num(-1 if num%10==9 else 1))

if __name__=='__main__':
	main()