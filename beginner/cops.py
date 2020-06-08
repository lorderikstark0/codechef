def safehouse(m_li,elem2,elem3):
	




def main():
	t=int(input())
	while(t>0):
		inp_li=list(map(int,input().split()))
		while(inp_li[0]>0):
			m_li=list(map(int,input().split()))
			ans=safehouse(m_li,inp_li[1],inp_li[2])
			for i in ans:
				print(i)
			inp_li[0]=inp_li[0]-1
		t=t-1			




if __name__=='__main__':
	main()



